import 'dart:io';

void main() {
  double a, b, c, pi = 3.14159;

  for (var line = stdin.readLineSync();
      line != null;
      line = stdin.readLineSync()) {
    var numbers = line.split(' ');

    a = double.parse(numbers[0]);
    b = double.parse(numbers[1]);
    c = double.parse(numbers[2]);

    print("TRIANGULO: ${(a * c / 2).toStringAsFixed(3)}");
    print("CIRCULO: ${(pi * (c * c)).toStringAsFixed(3)}");
    print("TRAPEZIO: ${(c * ((a + b) / 2)).toStringAsFixed(3)}");
    print("QUADRADO: ${(b * b).toStringAsFixed(3)}");
    print("RETANGULO: ${(a * b).toStringAsFixed(3)}");
  }
}
