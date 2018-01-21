`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:33:48 12/10/2017 
// Design Name: 
// Module Name:    Immediate_Gen 
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
module Immediate_Gen(instruction,imm);
input [31:0] instruction;
wire [6:0] op;
output reg [31:0]imm;

	assign op = instruction [6:0];

	always @ (*) begin
	case(op)//-------------------
	7'b0010011:  imm = {{21{instruction[31]}}, instruction[31:20]};//I-immidiate
	7'b0000011:  imm = {{21{instruction[31]}}, instruction[31:20]};//I-load
	7'b0100011:  imm = {{21{instruction[31]}}, instruction[31:25],instruction[11:7]}; //S
	7'b1100011:  imm = {{20{instruction[31]}}, instruction[7], instruction[30:25], instruction[11:8],1'b0 };//B
	7'b0110111:  imm = {{2{instruction[31]}}, instruction[30:20], instruction[19:12], 12'b0};//U (LUI)
	7'b0010111:  imm = {{2{instruction[31]}}, instruction[30:20], instruction[19:12], 12'b0};//U (AUIPC)
	7'b1101111:  imm = {{12{instruction[31]}}, instruction[19:12], instruction[20], instruction[30:25], instruction[24:21], 1'b0}; //J
endcase
end
endmodule
