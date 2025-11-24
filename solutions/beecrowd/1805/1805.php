<?php

while ($line = trim(fgets(STDIN))) {
    [$first, $last] = explode(" ", $line);

    echo ($last - $first + 1) * ($first + $last) / 2 . "\n";
}
