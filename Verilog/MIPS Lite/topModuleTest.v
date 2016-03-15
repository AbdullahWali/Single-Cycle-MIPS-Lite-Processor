`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:53:39 03/08/2016
// Design Name:   top
// Module Name:   E:/Google Drive/Bilkent/Semester IV/CS224/Labs/Lab 3/Verilog/Lab3/topModuleTest.v
// Project Name:  Lab3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module topModuleTest;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] writedata;
	wire [31:0] dataadr;
	wire memwrite;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.reset(reset), 
		.writedata(writedata), 
		.dataadr(dataadr), 
		.memwrite(memwrite)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always 
	begin
	clk = 1;
	#100;
	clk = 0;
	#100;
	end
     
endmodule

