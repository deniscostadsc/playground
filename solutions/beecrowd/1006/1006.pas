Uses sysutils;

Var a : Double;
    b : Double;
    c : Double;

begin
   read(a);
   read(b);
   read(c);

   WriteLn(Format('MEDIA = %.1f', [(a * 2.0 + b * 3.0 + c * 5.0) / 10.0]));
end.
