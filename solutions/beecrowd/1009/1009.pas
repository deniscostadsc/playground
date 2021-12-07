Uses sysutils;

Var a : String;
    b : Double;
    c : Double;

begin
    read(a);
    read(b);
    read(c);

    WriteLn(Format('TOTAL = R$ %.2f', [b + round((c * 0.15) * 100) / 100]));
end.
