using System;

class Solution {
    static void Main() {
        int initial_day, final_day,
        initial_hour, final_hour,
        initial_minute, final_minute,
        initial_second, final_second,
        delta_day, delta_hour, delta_minute, delta_second;
        string line;
        string[] line_split;

        while ((line = Console.ReadLine()) != null) {
            line_split = line.Split(' ');
            initial_day = Convert.ToInt32(line_split[1]);

            line = Console.ReadLine();
            line_split = line.Split(':');
            initial_hour = Convert.ToInt32(line_split[0]);
            initial_minute = Convert.ToInt32(line_split[1]);
            initial_second = Convert.ToInt32(line_split[2]);

            line = Console.ReadLine();
            line_split = line.Split(' ');
            final_day = Convert.ToInt32(line_split[1]);

            line = Console.ReadLine();
            line_split = line.Split(':');
            final_hour = Convert.ToInt32(line_split[0]);
            final_minute = Convert.ToInt32(line_split[1]);
            final_second = Convert.ToInt32(line_split[2]);

            delta_day = final_day - initial_day;
            delta_hour = final_hour - initial_hour;
            delta_minute = final_minute - initial_minute;
            delta_second = final_second - initial_second;

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

            Console.WriteLine("{0} dia(s)", delta_day);
            Console.WriteLine("{0} hora(s)", delta_hour);
            Console.WriteLine("{0} minuto(s)", delta_minute);
            Console.WriteLine("{0} segundo(s)", delta_second);
        }
    }
}
