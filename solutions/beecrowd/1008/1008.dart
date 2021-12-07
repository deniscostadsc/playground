import 'dart:io';

void main() {
  int a = int.parse(stdin.readLineSync() ?? '');
  int b = int.parse(stdin.readLineSync() ?? '');
  double c = double.parse(stdin.readLineSync() ?? '');
  double salary = c * b;

  print("NUMBER = ${a}");
  print("SALARY = U\$ ${salary.toStringAsFixed(2)}");
}
