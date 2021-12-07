<?php
$a = trim(fgets(STDIN));
$b = trim(fgets(STDIN));
$c = trim(fgets(STDIN));

echo "TOTAL = R$ " . number_format($b + ($c * 0.15) * 100 / 100, 2, '.', '') . "\n";
?>
