Uses sysutils;

Var x_m, y_m, x_r, y_r : integer;

Begin
    while not EOF do
    begin
        readln(x_m, y_m, x_r, y_r);
        writeln(abs(x_r - x_m) + abs(y_r - y_m));
    end;
End.
