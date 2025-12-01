var
  first, last: QWord;
begin
  while not EOF do
  begin
    ReadLn(first, last);
    WriteLn((last - first + 1) * (first + last) div 2);
  end;
end.
