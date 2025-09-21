<?php

while ($line = fgets(STDIN)) {
    $width = (int)$line;
    $length = (int)fgets(STDIN);

    echo ($width * $length) + (($width - 1) * ($length - 1)) . "\n";
    echo (($width - 1) * 2) + (($length - 1) * 2) . "\n";
}
