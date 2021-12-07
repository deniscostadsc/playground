Uses types,
     strutils,
     sysutils;

Var stdin : text;
    line : String;
    b, c, result : Double;
    numbers : TStringDynArray;

begin
    result := 0.0;

    assign(stdin, '');
    reset(stdin);

    while not eof(stdin) do
    begin
        readln(stdin, line);
        numbers := SplitString(line, ' ');
        val(numbers[1], b);
        val(numbers[2], c);
        result := result + (b * c);
    end;

    close(stdin);

    writeln(Format('VALOR A PAGAR: R$ %.2f', [result]));
end.
