
`timescale 1ns/1ns

module clkDiv(clk, clkA, clkB, en, rst);
parameter n= 50;
parameter k= 1;
parameter t = 2;

input clk, rst, en;
output reg clkA, clkB;

reg [31:0] counter1, counter2;

always @(posedge clk or posedge rst) begin
    if(rst) begin
        clkA = 1'b0;
        clkB = 1'b0;
        counter1 = 32'd0;
        counter2 = 32'd0;
    end else if(en) begin
        if(counter1 == n/(2*k)) begin
            clkA = ~clkA;
            counter1 = 32'd0;
        end
        else counter1 = counter1 + 32'd1;
        
        if(counter2 == n/(2*t)) begin
            clkB = ~clkB;
            counter2 = 32'd0;
        end
        else counter2 = counter2 + 32'd1;
        
    end
    else begin
        clkA = clkA;
        clkB = clkB;
        counter1 = counter1;
        counter2 = counter2;
    end






end



endmodule





`timescale 1ns/1ns
module binary_to_BCD(A,ONES,TENS,HUNDREDS);
input [7:0] A;
output [3:0] ONES, TENS;
output [1:0] HUNDREDS;
wire [3:0] c1,c2,c3,c4,c5,c6,c7;
wire [3:0] d1,d2,d3,d4,d5,d6,d7;

assign d1 = {1'b0,A[7:5]};
assign d2 = {c1[2:0],A[4]};
assign d3 = {c2[2:0],A[3]};
assign d4 = {c3[2:0],A[2]};
assign d5 = {c4[2:0],A[1]};
assign d6 = {1'b0,c1[3],c2[3],c3[3]};
assign d7 = {c6[2:0],c4[3]};
add3 m1(d1,c1);
add3 m2(d2,c2);
add3 m3(d3,c3);
add3 m4(d4,c4);
add3 m5(d5,c5);
add3 m6(d6,c6);
add3 m7(d7,c7);
assign ONES = {c5[2:0],A[0]};
assign TENS = {c7[2:0],c5[3]};
assign HUNDREDS = {c6[3],c7[3]};

endmodule




module add3(in,out);
input [3:0] in;
output [3:0] out;
reg [3:0] out;

always @ (in)
	case (in)
	4'b0000: out = 4'b0000;
	4'b0001: out = 4'b0001;
	4'b0010: out = 4'b0010;
	4'b0011: out = 4'b0011;
	4'b0100: out = 4'b0100;
	4'b0101: out = 4'b1000;
	4'b0110: out = 4'b1001;
	4'b0111: out = 4'b1010;
	4'b1000: out = 4'b1011;
	4'b1001: out = 4'b1100;
	default: out = 4'b0000;
	endcase
endmodule

module MulDisp(in, Y, en,clk);
input [7:0] in;
output [6:0] Y;
output reg [3:0] en;
input clk;

initial en <= 4'b1110;

wire clkA, clkB;

clkDiv #(50000000,100,1) Clo (clk, clkA, clkB, 1'b1, 1'b0);

wire [3:0] ONES, TENS;
wire [1:0] HUNDREDS;

binary_to_BCD Bit0(in,ONES,TENS,HUNDREDS);

reg [3:0]into;

Sevenseg Bit1(into, Y);

always @(en) begin
case(en)
    4'b1110: into <= ONES;
    4'b1101: into <= TENS;
    4'b1011: into <= {2'd0, HUNDREDS};
    4'b0111: into <= 4'd0;
endcase
end

always @(posedge clkA) begin
    en = {en[0],en[3],en[2],en[1]};     //ring counter
end


endmodule

module Sevenseg(in, out);
	input [3:0] in;
	output reg [6:0] out;
	
	always @ (in) begin 
		case(in)
			4'd0: out =7'b0000001;
			4'd1: out =7'b1001111;
			4'd2: out =7'b0010010;
			4'd3: out =7'b0000110;
			4'd4: out =7'b1001100;
			4'd5: out =7'b0100100;
			4'd6: out =7'b0100000;
			4'd7: out =7'b0001111;
			4'd8: out =7'b0000000;
			4'd9: out =7'b0000100;
			4'd10: out =7'b0001000;
			4'd11: out =7'b1100000;
			4'd12: out =7'b0110001;
			4'd13: out =7'b1000010;
			4'd14: out =7'b0110000;
			4'd15: out =7'b0111000;
			default: out= 7'b1111111;
		endcase
	end
endmodule

