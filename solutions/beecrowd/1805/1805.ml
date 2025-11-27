let () =
  try
    while true do
      let line = input_line stdin in
      match String.split_on_char ' ' line with
      | [f; l] ->
          let first = int_of_string f in
          let last = int_of_string l in
          Printf.printf "%d\n" ((last - first + 1) * (first + last) / 2)
      | _ -> ()
    done
  with End_of_file -> ()
