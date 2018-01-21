`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:32:47 12/13/2017
// Design Name:   CPU
// Module Name:   C:/.Xilinx/RiscV_CPU_G7/CPU_tb.v
// Project Name:  RiscV_CPU_G7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CPU_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [4:0] view;

	// Outputs
	wire [6:0] SevenSegout;
	wire [3:0] en;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.clk(clk), 
		.rst(rst), 
		.view(view), 
		.SevenSegout(SevenSegout), 
		.en(en)
	);

	always #5 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1; 
		view = 0;
		
		#5 rst = 0;
		
		#5 view = 1;
		
		#5 view = 2;
		

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

