Uses sysutils;

Var n, i : integer;

Begin
    for i := 1 to 9 do
    begin
        if i mod 2 <> 0 then
        begin
            writeln(Format('I=%d J=7', [i]));
            writeln(Format('I=%d J=6', [i]));
            writeln(Format('I=%d J=5', [i]));
        end;
    end;
End.
