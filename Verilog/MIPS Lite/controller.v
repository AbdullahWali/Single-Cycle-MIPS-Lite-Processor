module controller(input  [5:0] op, funct,
                  input        zero,
                  output       memtoreg, memwrite,
                  output       pcsrc, alusrc,
                  output       regdst, regwrite,
                  output       jump,
                  output [2:0] alucontrol);

  wire [1:0] aluop;
  wire       branch;

  maindec md (op, regwrite, regdst, alusrc, branch,
             memwrite, memtoreg, aluop, jump);
  aludec  ad (funct, aluop, alucontrol);

  assign pcsrc = branch & zero;
endmodule