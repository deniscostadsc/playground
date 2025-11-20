<?php

while ($line = trim(fgets(STDIN))) {
    $arr = explode(" ", $line);
    $n = $arr[0];
    $y = $arr[1];

    echo $n + $y . "\n";
}
