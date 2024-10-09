#!/bin/bash   
#set -x    
echo "hello"
name="Rahma"
echo ${name}AbdElhamid
printf "Hello %s from bash \n" $name
read -rsp "Enter your input here: " value
echo "The Value is : ${value} "
output=$(ls)
echo "${output}"
output=`ls` 
echo "${output}"
value=1 
if [ ${value} -eq 1 ]
then 
    echo "the value is valid"
elif [ ${value} -gt 2 ]
then 
    echo "the value is valid2"
else
    echo "the value is invalid"
fi
if [ -f test.sh ];then   #to check if the exist or no
    echo "the file is exist"
fi


