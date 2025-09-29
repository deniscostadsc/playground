import 'dart:io';

void main() {
  var line;
  int x_m, y_m, x_r, y_r;

  while ((line = stdin.readLineSync()) != null) {
    var numbers = line.split(' ');

    x_m = int.parse(numbers[0]);
    y_m = int.parse(numbers[1]);
    x_r = int.parse(numbers[2]);
    y_r = int.parse(numbers[3]);

    print('${(x_r - x_m).abs() + (y_r - y_m).abs()}');
  }
}
