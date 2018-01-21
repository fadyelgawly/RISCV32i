`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:39:28 12/11/2017 
// Design Name: 
// Module Name:    DataPath 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module DataPath(	clk,
						rst,
						view,
						out
						);
input clk,rst;						
wire [31:0]  RD2,RD1,Imm, ALUSourceB, Result;						//Imm goes to Mux or a shifter then adrress adder
wire RegWriteEnable, Branch,ZFlag, SignFlag, ALU_Source, WillBranchSignal;
wire [1:0] BranchSelect;
wire [3:0] ALUOperationSelect;
wire [7:0] PC;
input [4:0] view;
output [31:0] out;
wire [31:0] InstructionWord;
wire [4:0] rs1, rs2, rd;

//initial InstructionWord = 32'h000000B3;


ROM InstructionMemory (
  .clka(clk), // input clka
  .addra(PC), // input [7 : 0] addra
  .douta(InstructionWord) // output [31 : 0] douta
);
/*
DRAM DataMemory (
  .clka(clk), // input clka
  .wea(wea), // input [0 : 0] wea
  .addra(addra), // input [5 : 0] addra
  .dina(dina), // input [31 : 0] dina
  .douta(douta) // output [31 : 0] douta
);
*/
Immediate_Gen Imm_Generator (
	.instruction(InstructionWord),
	.imm(Imm)
);



RegFile regfile( 
	.clk(clk),																		//DONE
	.rst(rst), 																		//DONE
	.R1(RD1), 																		//DONE
	.R2(RD2), 																			//ALU Source B
	.wd(Result), 																			//FROM DRAM
	.rs1(rs1), 											//DONE
	.rs2(rs2), 											//DONE
	.rd(rd),//InstructionWord[11:7]), 												//DONE
	.writeEnable(1'd1),//RegWriteEnable),												//DONE
	.view(view),
	.out(out)
);

ControlUnit CU(
	.clk(clk),																		//DONE
	.rst(rst),																		//DONE
	.instructionWord(InstructionWord),        				
	.MemReg(), 																		//TO DRAM AREA
	.MemWr(),																			//TO DRAM
	.Branch(Branch),																//DONE
	.BranchSelect(BranchSelect),												//DONE
	.ALU_ctrl(ALUOperationSelect),																		//TO ALU
	.ALU_src(ALU_Source),														//TO ALU
	.RegD(),																			//PLEASE REMOVE REGD FROM CU. Fady
	.Regwr(RegWriteEnable),														//DONE
	.rs1(rs1),
	.rs2(rs2),
	.rd(rd)
);

BranchSelect branch(
    .sel(BranchSelect),															//DONE
	 .en(Branch),																	//DONE
    .out(WillBranchSignal),   																		//TO PC Branch Mechanism
    .Zflag(ZFlag),																//FROM ALU
    .Signflag(SignFlag)															//FROM ALU
);

ALU  alu(
	.A(RD1),																			//DONE
	.B(ALUSourceB),																//FROM REG RD2 ORRRRR immm
	.Result(Result),																		//TO DRAM
	.ALUSel(ALUOperationSelect),												//DONE
	.ZFlag(ZFlag),																	//DONE
	.SignFlag(SignFlag)															//DONE
);


Mux2x1_32b ALUSourceBSelect(
	.a(RD2),
   .b(Imm),
   .sel(ALU_Source),
   .out(ALUSourceB)
);

PCCount PCHandler(
	.clk(clk),
	.rst(rst),
	.incrementOffset(8'd0),//Imm),		
	.branch(1'b0),//WillBranchSignal),
	.PC(PC) 
    );

endmodule
