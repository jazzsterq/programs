
module test;

  reg A,B,Cin,mode;
  wire S,Bout;
  full_adder_subtractor  dut (
    A,B,Cin,mode,S,Bout);
initial
  begin
    $dumpfile("dut.vcd");
    $dumpvars();
  end
initial 
  begin
    mode = 0;
      A=1'b0;B=1'b0;Cin=1'b0; 
    #5A=1'b0;B=1'b0;Cin=1'b1; 
    #5A=1'b0;B=1'b1;Cin=1'b0; 
    #5A=1'b0;B=1'b1;Cin=1'b1; 
    #5A=1'b1;B=1'b0;Cin=1'b0; 
    #5A=1'b1;B=1'b0;Cin=1'b1; 
    #5A=1'b1;B=1'b1;Cin=1'b0; 
    #5A=1'b1;B=1'b1;Cin=1'b1; 

     mode = 1;
      A=1'b0;B=1'b0;Cin=1'b0; 
    #5A=1'b0;B=1'b0;Cin=1'b1; 
    #5A=1'b0;B=1'b1;Cin=1'b0; 
    #5A=1'b0;B=1'b1;Cin=1'b1; 
    #5A=1'b1;B=1'b0;Cin=1'b0; 
    #5A=1'b1;B=1'b0;Cin=1'b1; 
    #5A=1'b1;B=1'b1;Cin=1'b0; 
    #5A=1'b1;B=1'b1;Cin=1'b1; 

  end

endmodule