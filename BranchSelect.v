`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:13:23 12/11/2017 
// Design Name: 
// Module Name:    BranchSelect 
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
module BranchSelect(
    sel,
	 en,
    out,
    Zflag,
    Signflag
);


input en,Signflag,Zflag;
input [1:0] sel;
output reg out;

always @ (*) begin
    if (en == 1) begin
        case (sel)
            2'd0:  out <= Zflag;
            2'd1:  out <= ~Zflag;
            2'd2:  out <= Signflag;
            2'd3:  out <= ~Signflag;
            default out <= 0;
            endcase
    end
    else begin 
        out <= 0; 
    end
end
endmodule
