let split_on_char sep s =
  let rec loop i =
    try
      let j = String.index_from s i sep in
      String.sub s i (j - i) :: loop (j + 1)
    with Not_found -> [String.sub s i (String.length s - i)]
  in
  loop 0

let () =
  try
    while true do
      let line = input_line stdin in
      match split_on_char ' ' line with
      | [f; l] ->
          let first = int_of_string f in
          let last = int_of_string l in
          Printf.printf "%d\n" ((last - first + 1) * (first + last) / 2)
      | _ -> ()
    done
  with End_of_file -> ()
