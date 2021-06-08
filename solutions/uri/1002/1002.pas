Uses sysutils;

Var n : Double;

begin
   read(n);

   WriteLn(Format('A=%.4f', [n * n * 3.14159]));
end.
