import 'dart:io';

void main() {
  int n;
  var line;

  while ((line = stdin.readLineSync()) != null) {
    n = int.parse(line);

    print('${n}');
  }
}
