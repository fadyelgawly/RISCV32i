`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:18:48 12/12/2017
// Design Name:   DataPath
// Module Name:   C:/.Xilinx/RiscV_CPU_G7/Datapath_tb.v
// Project Name:  RiscV_CPU_G7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DataPath
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Datapath_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [4:0] view;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	DataPath uut (
		.clk(clk), 
		.rst(rst), 
		.view(view), 
		.out(out)
	);

	

	initial begin
		// Initialize Inputs
		clk = 0;
		
		
		rst = 1;
		view = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 0;
      view = 0;
		#100 
		view = 1;
		#100 
		view = 2;
		#100 
		view = 3;
		#100 
		view = 4;
		#100 
		view = 5;
		#100 
		view = 6;
		// Add stimulus here
//		+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	end
	
	always #5 clk = !clk;
      
endmodule

