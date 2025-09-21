import 'dart:io';

void main() {
  int l, c;
  var l_str, c_str;

  while ((l_str = stdin.readLineSync()) != null && (c_str = stdin.readLineSync()) != null) {
    l = int.parse(l_str);
    c = int.parse(c_str);

    print('${(l * c) + ((l - 1) * (c - 1))}\n${((l - 1) * 2) + ((c - 1) * 2)}');
  }
}
