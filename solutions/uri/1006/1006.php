<?php
$a = (float)trim(fgets(STDIN));
$b = (float)trim(fgets(STDIN));
$c = (float)trim(fgets(STDIN));
$average = ($a * 2.0 + $b * 3.0 + $c * 5.0) / 10.0;

echo "MEDIA = " . number_format($average, 1, '.', '') . "\n";
?>
