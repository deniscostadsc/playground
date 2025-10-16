let () =
    for i = 1 to 9 do
        if i mod 2 = 1 then (
            Printf.printf "I=%d J=7\n" i;
            Printf.printf "I=%d J=6\n" i;
            Printf.printf "I=%d J=5\n" i
        )
    done
