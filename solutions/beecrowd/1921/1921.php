<?php

while ($line = trim(fgets(STDIN))) {
    if ($line == '') {
        break;
    }

    $n = (int)$line;
    $result = ($n * ($n - 1) / 2) - $n;

    echo $result . "\n";
}
