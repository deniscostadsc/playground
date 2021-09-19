Uses types,
     strutils,
     sysutils;

Var line, line2 : String;
    b, c, s, ss : Double;
    numbers, bumners : TStringDynArray;

begin
    s := 0.0;
    read(line);
    read(line2);
    WriteLn(line);
    WriteLn('++++');
    numbers := SplitString(line, ' ');
    val(numbers[1], b);
    val(numbers[2], c);
    s := s + (b * c);

    // read(line2);
    WriteLn(line2);
    WriteLn('----');
    bumners := SplitString(line2, ' ');
    val(bumners[1], b);
    val(bumners[2], c);
    ss := s + (b * c);

    WriteLn(Format('VALOR A PAGAR: R$ %.2f', [ss]));
end.
