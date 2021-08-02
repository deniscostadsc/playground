import 'dart:io';

void main() {
  String _ = stdin.readLineSync() ?? '';
  double a = double.parse(stdin.readLineSync() ?? '');
  double b = double.parse(stdin.readLineSync() ?? '');
  double salary = a + b * 0.15 * 100 / 100;

  print("TOTAL = R\$ ${salary.toStringAsFixed(2)}");
}
