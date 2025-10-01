<?php

while ($line = fgets(STDIN)) {
    $arr = explode(" ", $line);
    $x_m = $arr[0];
    $y_m = $arr[1];
    $x_r = $arr[2];
    $y_r = $arr[3];

    echo abs($x_r - $x_m) + abs($y_r - $y_m) . "\n";
}
