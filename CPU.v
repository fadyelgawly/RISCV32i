`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:10:23 12/12/2017 
// Design Name: 
// Module Name:    CPU 
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
module CPU(
	input clk,
	input rst,
	input [4:0] view,
	output [6:0] SevenSegout,
	output  [3:0] en
    );
	 
	 wire clkA;
	 wire[31:0] out;
	 	 
DataPath dp(
						.clk(clk),
						.rst(rst),
						.view(view),
						.out(out)
						);
		
MulDisp disp(
	.in(out[7:0]),
	.Y(SevenSegout),
	.en(en),
	.clk(clk)
	);
		

endmodule
