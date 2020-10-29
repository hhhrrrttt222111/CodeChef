<?php

$test = fgets(STDIN);

for ($i=0; $i < $test; $i++) {
    $input = fgets(STDIN);
    echo fact($input)."\r\n";
}

function fact($input)
{
    $fact=5;
    $count=0;
    $input = (int)$input;
    while ($fact<=$input) {
        $count = (int)($count + $input / $fact);
        $fact = $fact*5;
    }

    return $count;
}
