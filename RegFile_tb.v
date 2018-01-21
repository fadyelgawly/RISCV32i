`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:32:55 12/12/2017
// Design Name:   RegFile
// Module Name:   C:/.Xilinx/RiscV_CPU_G7/RegFile_tb.v
// Project Name:  RiscV_CPU_G7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegFile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RegFile_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] wd;
	reg [4:0] rs1;
	reg [4:0] rs2;
	reg [4:0] rd;
	reg writeEnable;
	reg [4:0] view;

	// Outputs
	wire [31:0] R1;
	wire [31:0] R2;
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	RegFile uut (
		.clk(clk), 
		.rst(rst), 
		.R1(R1), 
		.R2(R2), 
		.wd(wd), 
		.rs1(rs1), 
		.rs2(rs2), 
		.rd(rd), 
		.writeEnable(writeEnable), 
		.view(view), 
		.out(out)
	);
	
	always #5 clk = !clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		wd = 0;
		rs1 = 0;
		rs2 = 0;
		rd = 0;
		writeEnable = 0;
		view = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		rst = 0;



		wd = 100;
		rs1 = 0;
		rs2 = 0;
		rd = 1;
		writeEnable = 1;
		view = 0;

		#100;
		writeEnable = 0;
		view = 1;
		
		#100
		
		wd = 200;
		rs1 = 0;
		rs2 = 0;
		rd = 2;
		writeEnable = 1;
		

		#100;
		writeEnable = 0;
		view = 2;



	end
      
endmodule

