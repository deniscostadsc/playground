Scanf.scanf "%s %f %f\n" (fun _ b c ->
    Printf.printf "TOTAL = R$ %.2f\n" (b +. (c *. 0.15));
)
