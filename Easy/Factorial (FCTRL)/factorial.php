<?php  
    $num = readline();  
    $factorial = 1;  
    for ($i=$num; $i>=1; $i--)   
    {  
      $factorial = $factorial * $i;  
    }  
    echo "$factorial";  
?>  