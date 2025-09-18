<?php

$n = (int)trim(fgets(STDIN));

for ($i = 1; $i <= $n; $i++) {
    echo $i . " " . $i * $i . " " . $i * $i * $i . "\n";
}
