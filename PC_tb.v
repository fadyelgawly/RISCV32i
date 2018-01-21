`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:31:04 12/12/2017
// Design Name:   PCCount
// Module Name:   C:/.Xilinx/RiscV_CPU_G7/PC_tb.v
// Project Name:  RiscV_CPU_G7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PCCount
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PC_tb;

	// Inputs
	reg clk;
	reg [7:0] incrementOffset;
	reg branch;

	// Outputs
	wire [7:0] PC;

	// Instantiate the Unit Under Test (UUT)
	PCCount uut (
		.clk(clk), 
		.incrementOffset(incrementOffset), 
		.branch(branch), 
		.PC(PC)
	);
	
	
	always #5 clk = !clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		incrementOffset = 0;
		branch = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

