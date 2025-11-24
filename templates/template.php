<?php

while ($line = trim(fgets(STDIN))) {
    [$n, $y] = explode(" ", $line);

    echo $n + $y . "\n";
}
