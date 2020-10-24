<?php

$input = fgets(STDIN);
$array = explode(' ', $input);

$withdraw = (float)$array[0];
$initial_balance = (float)$array[1];

$banking_fees = 0.5;

if (($withdraw + $banking_fees) <= $initial_balance && $withdraw % 5 == 0) {
    $new_balance = $initial_balance - $withdraw - $banking_fees;
        printf('%.2f', $new_balance);
} else {
    printf('%.2f', $initial_balance);
}