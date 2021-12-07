<?php
$n = trim(fgets(STDIN));

echo "A=" . number_format($n * $n * 3.14159, 4, '.', '') . "\n";
?>
