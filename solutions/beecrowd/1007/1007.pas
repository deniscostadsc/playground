Uses sysutils;

Var a : Integer;
    b : Integer;
    c : Integer;
    d : Integer;

begin
   read(a);
   read(b);
   read(c);
   read(d);

   WriteLn(Format('DIFERENCA = %d', [a * b - c * d]));
end.
