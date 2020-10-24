<?php

$t = intval(fgets(STDIN));

while ($t--) {
  $nums = explode(' ', trim(fgets(STDIN)), 2);
  $a = (int)$nums[0];
  $b = (int)$nums[1];
  $sum = $a + $b;
  echo $sum . "\n";
}

?>