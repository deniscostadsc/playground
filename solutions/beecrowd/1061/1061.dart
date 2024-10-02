import 'dart:io';

void main() {
  int initial_day, initial_hour, initial_minute, initial_second;
  int final_day, final_hour, final_minute, final_second;
  var line;

  for (line = stdin.readLineSync(); line != null; line = stdin.readLineSync()) {
    var line_items = line.split(' ');
    initial_day = int.parse(line_items[1]);

    line = stdin.readLineSync();
    line_items = line.split(' : ');
    initial_hour = int.parse(line_items[0]);
    initial_minute = int.parse(line_items[1]);
    initial_second = int.parse(line_items[2]);

    line = stdin.readLineSync();
    line_items = line.split(' ');
    final_day = int.parse(line_items[1]);

    line = stdin.readLineSync();
    line_items = line.split(' : ');
    final_hour = int.parse(line_items[0]);
    final_minute = int.parse(line_items[1]);
    final_second = int.parse(line_items[2]);

    var delta_second = final_second - initial_second;
    var delta_minute = final_minute - initial_minute;
    var delta_hour = final_hour - initial_hour;
    var delta_day = final_day - initial_day;

    if (delta_second < 0) {
      delta_second += 60;
      delta_minute -= 1;
    }

    if (delta_minute < 0) {
      delta_minute += 60;
      delta_hour -= 1;
    }

    if (delta_hour < 0) {
      delta_hour += 24;
      delta_day -= 1;
    }

    print('${delta_day} dia(s)');
    print('${delta_hour} hora(s)');
    print('${delta_minute} minuto(s)');
    print('${delta_second} segundo(s)');
  }
}
