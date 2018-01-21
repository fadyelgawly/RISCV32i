`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:52:26 12/10/2017 
// Design Name: 
// Module Name:    ALU 
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
module ALU (A, B, Result, ALUSel, ZFlag, SignFlag);
	reg [31:0] y;
	input [31:0] A, B;
	input [3:0] ALUSel;
	output reg [31:0] Result;
	output SignFlag;
	assign SignFlag = Result[31];
	output ZFlag;
	assign ZFlag = (Result==32'b0);

always @ (*) begin
	case (ALUSel)
		0: Result = A + B; // addition
		1: Result = A - B; // subtraction
		2: Result = A << B ; // Sll (shifter)
		3: if (A == B) begin Result=0; end
	else if (A < B) begin Result = 1; end
	else begin Result = 0; end       // Slt ()       
		4: Result = $unsigned(A) < $unsigned(B)  ; //Sltu  ()
		5: Result = A ^ B; // bitwise XOR
		6: Result = A >> B;  //Srl (shifter invet input)
		7: Result = $signed(A) >>> B; //Sra (shifter + depend on last bit) 
		8: Result = A | B; // bitwise OR
		9: Result = A & B; // bitwise AND
		10: if (A == B) begin Result=1; end
    else begin Result =0; end       // check if equal for BEQ
		11: if (A == B) begin Result=0; end
    else begin Result =1; end       // check if equal for BNE
		12: if (A > B) begin Result=1; end
    else if (A == B) begin Result =1; end      // for BGE
    else begin Result=0; end

default Result = -1;
endcase
end
endmodule 



module ControlUnit(clk, rst, instructionWord, MemReg, MemWr,Branch, BranchSelect,ALU_ctrl, ALU_src, RegD, Regwr, rs1, rs2, rd);
    input clk, rst;
    input [31:0] instructionWord;
    reg [6:0] op, func7;           //Re consider your logic and choose a way to implement.. in my @ alwayes I eliminated the need to fuck3 and fuck7 and opomak
    reg [2:0] func3; 
    output reg MemReg, MemWr, Branch, ALU_src, Regwr;
	 output reg [1:0] BranchSelect;
    output reg [3:0] ALU_ctrl;
    output reg [4:0] RegD;
	 output [4:0] rs1, rs2, rd; 

	assign rs1 = instructionWord[19:15]; 
	 assign rs2 = instructionWord[24:20];
	 assign rd = instructionWord[11:7];

    
    always @(*) begin	 
		func7   <= instructionWord[31:25];
		func3 <= instructionWord[14:12];
		op   <= 	instructionWord[6:0];
	
        if (!rst) begin 
            if (op == 7'b0110011) begin 
                if (func3 == 3'd0 ) begin
                    if (func7 == 0) begin  MemReg= 0;  MemWr=0;  Branch=0; BranchSelect=0;   ALU_ctrl= 0;  ALU_src=0; RegD=0;  Regwr=1; end// add   assign alu control = 0 if sub alu control = 1 etc.... //7 bits not 3
                    else begin             MemReg= 0;  MemWr=0;  Branch=0; BranchSelect=0;  	ALU_ctrl= 1;  ALU_src=0; RegD=0;  Regwr=1; end//sub
                end
                
                if (func3 == 3'd1) 	begin MemReg= 0; 	MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 2; ALU_src=0; RegD=0; Regwr=1;end  //sll
                if (func3 == 3'd2)	begin MemReg= 0; 	MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 3; ALU_src=0; RegD=0; Regwr=1; end//slt
                if (func3 == 3'd3) 	begin MemReg= 0; 	MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 4; ALU_src=0; RegD=0; Regwr=1; end //sltu
                if (func3 ==3'd4)  	begin MemReg= 0; 	MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 5; ALU_src=0; RegD=0; Regwr=1;end //xor
                if (func3 ==3'd5)	begin
							if (func7 ==7'd0) 
												begin MemReg= 0; MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 6; ALU_src=0; RegD=0; Regwr=1; end //srl //7 bits not 3
                    else 				begin MemReg= 0; MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 7; ALU_src=0; RegD=0; Regwr=1; end//sra
                end
                if (func3 ==3'd6 ) begin  MemReg= 0; MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 8; ALU_src=0; RegD=0; Regwr=1; end//or
                if (func3 ==3'd7 ) begin  MemReg= 0; MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 9; ALU_src=0; RegD=0; Regwr=1; end//and
            end
            if (op ==7'b0010011) begin //  I-type instructions
                if (func3 == 3'd0 ) begin 	MemReg= 0; MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 0; ALU_src=1; RegD=0; Regwr=1; end//addi 
                if (func3 == 3'd2 ) begin 	MemReg= 0; MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 3; ALU_src=1; RegD=0; Regwr=1; end//slti
                if (func3 == 3'd3 ) begin 	MemReg= 0; MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 4; ALU_src=1; RegD=0; Regwr=1; end//sltiu
                if (func3 == 3'd4 ) begin 	MemReg= 0; MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 5; ALU_src=1; RegD=0; Regwr=1; end//xori
                if (func3 == 3'd6 ) begin 	MemReg= 0; MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 8; ALU_src=1; RegD=0; Regwr=1; end//ori
                if (func3 == 3'd7 ) begin 	MemReg= 0; MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 9; ALU_src=1; RegD=0; Regwr=1; end//andi
                if (func3 == 3'd1 ) begin 	MemReg= 0; MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 2; ALU_src=1; RegD=0; Regwr=1; end//slli
                if (func3 == 3'd5 ) begin 
                  if (func7 == 7'd0) begin  
														MemReg= 0; MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 6; ALU_src=1; RegD=0; Regwr=1; end //srli
                    else begin            MemReg= 0; MemWr=0;Branch=0; BranchSelect=0;ALU_ctrl= 7; ALU_src=1; RegD=0; Regwr=1; end  //srai
                end
            end
           /* 
            if (op ==7'd2) begin //  I-type instructions Load instructions
               
                
                if (func3 ==3'd2 ) begin MemReg= 1; MemWr=0; Branch=0; BranchSelect=0; ALU_ctrl= 0; ALU_src=1; RegD=0; Regwr=0; end //lw      el dr aal hane3mel lw bas
               
                
                
            end
            
            if (op ==7'b0100011) begin //  S-type instructions 
                
                if (func3 ==3'd2 ) begin MemReg= 0; MemWr=1; Branch=0;BranchSelect=0; ALU_ctrl= 0; ALU_src=0; RegD=0; Regwr=0; end //sw     w sw bas
                
            end
            
            if (op ==7'b1100011) begin
                if (func3 ==3'd0 ) begin MemReg= 0; MemWr=0; Branch=1; BranchSelect=0; ALU_ctrl= 1; ALU_src=0; RegD=0; Regwr=0; end //BEQ
                if (func3 ==3'd1 ) begin MemReg= 0; MemWr=1; Branch=1; BranchSelect=1; ALU_ctrl= 1; ALU_src=0; RegD=0; Regwr=0; end //bne
                if (func3 ==3'd4 ) begin MemReg= 0; MemWr=1; Branch=1; BranchSelect=2; ALU_ctrl= 3; ALU_src=0; RegD=0; Regwr=0; end //blt
                if (func3 ==3'd5 ) begin MemReg= 0; MemWr=1; Branch=1; BranchSelect=3; ALU_ctrl= 1; ALU_src=0; RegD=0; Regwr=0; end //bge
                if (func3 ==3'd6 ) begin MemReg= 0; MemWr=1; Branch=1; BranchSelect=2; ALU_ctrl= 4; ALU_src=0; RegD=0; Regwr=0; end //bltu
                if (func3 ==3'd7 ) begin MemReg= 0; MemWr=1; Branch=1; BranchSelect=3; ALU_ctrl= 0; ALU_src=0; RegD=0; Regwr=0; end //bgeu
                
            end
            */
            
        end
        else begin
            //Sequential logic goes here.
        end
    end
endmodule

module RegFile( clk,rst, R1, R2, wd, rs1, rs2, rd, writeEnable, view, out);
    input clk, rst;
    output[31:0] R1, R2;  // output registers Register 1 and register 2 32 bits  (A and B in ALU)
    input[31:0] wd;        // data to be written / loaded in register file
    input[4:0] rs1, rs2, rd;    //4 bits input rs1. rs2. rd
    input writeEnable;         // signal to write or not
    reg[31:0] RegFile[31:0]; // declaring array of 32 32-bit registers - Register File
	 input [4:0] view;
	 output  [31:0] out;
	
	 
	 

    // Reading register
    assign R1 = RegFile[rs1];
    assign R2 = RegFile[rs2];
    
	 assign out = RegFile[view];
	 
	 // Writing to a register
    always @ (posedge clk) begin
        if(!rst) if(writeEnable) RegFile[rd] = wd; // writing data to register number wd
        RegFile[0] = 0;
    end
	
endmodule


