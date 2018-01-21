`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:38:24 12/12/2017 
// Design Name: 
// Module Name:    Mux2x1_32b 
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
module Mux2x1_32b(
	input [31:0] a,
   input [31:0] b,
   input sel,
   output [31:0] out);
   
    assign out = sel ? b : a;

endmodule

