`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:31:36 12/12/2017 
// Design Name: 
// Module Name:    PC 
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
module PCCount(
	input clk,
	input rst,
	input [7:0]incrementOffset,
	input branch,
	output reg [7:0] PC 
    );
	 initial PC = 7'd0;
	 
	always @ (posedge clk) begin
	
	if(rst) PC = 0;
	else begin
	
		if (~branch) PC = PC + 1;
		else if (branch) PC = PC + incrementOffset;
		
	end
	end
	
endmodule
