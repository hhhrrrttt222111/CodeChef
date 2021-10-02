read num
n=$((num%4))
if [ $n -eq 0 ]
then
    w=$((num+1))
    echo $w
else   
    e=$((num-1))
    echo $e
fi
