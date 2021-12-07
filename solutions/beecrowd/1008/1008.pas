Uses sysutils;

Var a : Integer;
    b : Integer;
    c : Double;

begin
    read(a);
    read(b);
    read(c);

    WriteLn(Format('NUMBER = %d', [a]));
    WriteLn(Format('SALARY = U$ %.2f', [b * c]));
end.
