Uses sysutils;

Var a : Double;
    b : Double;

begin
   read(a);
   read(b);

   WriteLn(Format('MEDIA = %.5f', [(a * 3.5 + b * 7.5) / 11.0]));
end.
