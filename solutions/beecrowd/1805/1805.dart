import 'dart:io';

void main() {
  var line;

  while ((line = stdin.readLineSync()) != null) {
    var [first, last] = line.split(' ').map(int.parse).toList();

    print('${((last - first + 1) * (first + last) / 2).round()}');
  }
}
