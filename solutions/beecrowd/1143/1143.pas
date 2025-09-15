Uses sysutils;

Var n, i : integer;

Begin
    readln(n);
    for i := 1 to n do
    begin
        writeln(Format('%d %d %d', [i, i * i, i * i * i]));
    end;
End.
