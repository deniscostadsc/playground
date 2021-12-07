import 'dart:io';

void main() {
  double n = double.parse(stdin.readLineSync() ?? '');
  double result = n * n * 3.14159;

  print("A=${result.toStringAsFixed(4)}");
}
