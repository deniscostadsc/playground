<?php

$s = 0.0;

while ($line = fgets(STDIN)) {
    $arr = explode(" ", $line);
    $b = $arr[1];
    $c = $arr[2];
    $s += $b * $c;
}

echo "VALOR A PAGAR: R$ " . number_format($s, 2, '.', '') . "\n";
