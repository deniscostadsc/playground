import 'dart:io';

void main() {
  int v, t;
  var line;

  while ((line = stdin.readLineSync()) != null) {
    var numbers = line.split(' ');
    v = int.parse(numbers[0]);
    t = int.parse(numbers[1]);

    print(v * t * 2);
  }
}
