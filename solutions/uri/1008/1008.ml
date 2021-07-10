Scanf.scanf "%d %f %f\n" (fun a b c ->
    Printf.printf "NUMBER = %d\n" (a);
    Printf.printf "SALARY = U$ %.2f\n" (b *. c);
)
