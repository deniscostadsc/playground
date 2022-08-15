import 'dart:io';

void main() {
  double a = double.parse(stdin.readLineSync() ?? '');
  double b = double.parse(stdin.readLineSync() ?? '');
  double c = double.parse(stdin.readLineSync() ?? '');

  double media = (a * 2.0 + b * 3.0 + c * 5.0) / 10.0;

  print('MEDIA = ${media.toStringAsFixed(1)}');
}
