package main

import (
	"fmt"
)

func main() {
	var initial_day, final_day,
		initial_hour, final_hour,
		initial_minute, final_minute,
		initial_second, final_second,
		delta_day, delta_hour, delta_minute, delta_second int16

	for {
		_, err := fmt.Scanf("Dia %d", &initial_day)
		if err != nil {
			break
		}
		fmt.Scanf("%d : %d : %d", &initial_hour, &initial_minute, &initial_second)
		fmt.Scanf("Dia %d", &final_day)
		fmt.Scanf("%d : %d : %d", &final_hour, &final_minute, &final_second)

		delta_day = final_day - initial_day
		delta_hour = final_hour - initial_hour
		delta_minute = final_minute - initial_minute
		delta_second = final_second - initial_second

		if delta_second < 0 {
			delta_second += 60
			delta_minute--
		}

		if delta_minute < 0 {
			delta_minute += 60
			delta_hour--
		}

		if delta_hour < 0 {
			delta_hour += 24
			delta_day--
		}

		fmt.Printf("%d dia(s)\n", delta_day)
		fmt.Printf("%d hora(s)\n", delta_hour)
		fmt.Printf("%d minuto(s)\n", delta_minute)
		fmt.Printf("%d segundo(s)\n", delta_second)
	}
}
