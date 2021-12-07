<?php
$a = trim(fgets(STDIN));
$b = trim(fgets(STDIN));
$c = trim(fgets(STDIN));

echo "NUMBER = " . $a . "\n";
echo "SALARY = U$ " . number_format($b * $c, 2, '.', '') . "\n";
?>
