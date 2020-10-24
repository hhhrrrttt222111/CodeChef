<?php
$totalLine = (int)fgets(STDIN);

while ($totalLine > 0) {
    $input = fgets(STDIN);    
    $array = explode(' ', $input);
    $n = (int)$array[0];
    $m = (int)$array[1];
    if(($n*$m)%2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    $totalLine -= 1;
}
