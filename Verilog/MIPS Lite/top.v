	
// Written by David_Harris@hmc.edu 9 November 2005
//  with edits and improvements by Will Sawyer in 2013

// Top level system including MIPS and memories

module top( input         clk, reset,
            output [31:0] writedata, dataadr,
            output        memwrite);

 
  wire [31:0] pc, instr, readdata;

  // instantiate processor and memories

  mips mips(clk, reset, pc, instr, memwrite, dataadr, writedata, readdata);
  imem imem(pc[7:2], instr);
  dmem dmem(clk, memwrite, dataadr, writedata, readdata);

endmodule