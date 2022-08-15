import 'dart:io';

void main() {
  var line;
  double a, b, c, m;

  while ((line = stdin.readLineSync()) != null) {
    var numbers = line.split(' ');
    a = double.parse(numbers[0]);
    b = double.parse(numbers[1]);
    c = double.parse(numbers[2]);

    m = (a + b + (a - b).abs()) / 2;
    m = (m + c + (m - c).abs()) / 2;

    print("${m.round()} eh o maior");
  }
}
