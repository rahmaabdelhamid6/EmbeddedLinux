#!/bin/bash   
for i in 1 2 3 4 5 6 ; do
    echo $i
done

for i in {1..10}; do
    echo "the number is ${i}"
done

learn="start learning bash"
for i in $learn ; do
    echo "$i"
done

x=0
y=3
while [[ ${x} -le 5 && ${y} -ge 0 ]]
do
    echo "x = ${x}"
    echo "y = ${y}"
    ((++x))
    ((y--))
done 

i=1  
until [ $i -gt 10 ]  
do  
echo $i  
((i++))  
done 