Uses sysutils;

Var a, b : integer;
    c, result : double;

Begin
    result := 0.0;

    readln(a, b, c);
    result := result + (b * c);
    readln(a, b, c);
    result := result + (b * c);

    writeln(Format('VALOR A PAGAR: R$ %.2f', [result]));
End.
