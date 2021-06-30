<?php
$a = (float)trim(fgets(STDIN));
$b = (float)trim(fgets(STDIN));
$average = ($a * 3.5 + $b * 7.5) / 11.0;

echo "MEDIA = " . number_format($average, 5, '.', '') . "\n";
?>
