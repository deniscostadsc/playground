import 'dart:io';

void main() {
  String line = stdin.readLineSync()!;
  int n = int.parse(line);

  for (int i = 1; i <= n; i++) {
    print('${i} ${i * i} ${i * i * i}');
  }
}
