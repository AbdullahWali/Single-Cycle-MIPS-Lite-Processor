module alu (
    input [31:0] A,
    input [31:0] B,
    input [2:0] S,
    output reg [31:0]  Y,
    output reg zero
   // ,output A_gt_B
    );
	 
	 always @ (*) begin 
		case (S)
			3'b000: Y <= (A && B); //AND
			3'b001: Y <= (A || B); //OR
			3'b010: Y <= A + B; //add
			3'b100: Y <= A + B; // Add
			3'b101: Y <= A - B; //subtract
			3'b111: if ( A < B) Y <= 32'b1; else Y = 32'b0;
			default: Y <= 31'b0; //default
		endcase
	end
	always @ (*)
		if (Y== 32'b0) zero = 1; else zero = 0;
	//assign A_gt_B = ~Y[31]; 
endmodule
