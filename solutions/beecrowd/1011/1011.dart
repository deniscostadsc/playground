import 'dart:io';
import 'dart:math';

void main() {
  double r, pi = 3.14159;
  var line;

  while ((line = stdin.readLineSync()) != null) {
    r = double.parse(line);
    print('VOLUME = ${(4.0 / 3.0 * pi * pow(r, 3)).toStringAsFixed(3)}');
  }
}
