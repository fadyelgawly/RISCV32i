`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:26:56 12/12/2017
// Design Name:   ControlUnit
// Module Name:   C:/.Xilinx/RiscV_CPU_G7/CU_tb.v
// Project Name:  RiscV_CPU_G7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ControlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CU_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] instructionWord;

	// Outputs
	wire MemReg;
	wire MemWr;
	wire Branch;
	wire [1:0] BranchSelect;
	wire [3:0] ALU_ctrl;
	wire ALU_src;
	wire [4:0] RegD;
	wire Regwr;
	wire [4:0] rs1;
	wire [4:0] rs2;
	wire [4:0] rd;

	// Instantiate the Unit Under Test (UUT)
	ControlUnit uut (
		.clk(clk), 
		.rst(rst), 
		.instructionWord(instructionWord), 
		.MemReg(MemReg), 
		.MemWr(MemWr), 
		.Branch(Branch), 
		.BranchSelect(BranchSelect), 
		.ALU_ctrl(ALU_ctrl), 
		.ALU_src(ALU_src), 
		.RegD(RegD), 
		.Regwr(Regwr), 
		.rs1(rs1), 
		.rs2(rs2), 
		.rd(rd)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		instructionWord = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		instructionWord = 32'h000000B3;

	end
      
endmodule

