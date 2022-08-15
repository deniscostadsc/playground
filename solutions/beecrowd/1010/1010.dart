import 'dart:io';

void main() {
  int b;
  double c, result = 0.0;
  var line;

  while ((line = stdin.readLineSync()) != null) {
    var numbers = line.split(' ');
    b = int.parse(numbers[1]);
    c = double.parse(numbers[2]);

    result += c * b;
  }

  print('VALOR A PAGAR: R\$ ${result.toStringAsFixed(2)}');
}
