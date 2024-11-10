#!/bin/bash

echo hello world

num=1
name="CITTU"

echo "My name is $name"
echo "My roll number is $num"

num1=20
num2=30
((num1++))

sum=$((num1+num2))

echo "SUm is $sum"

for i in {1..5}; do
	echo "counting: $i"
done
count=1
while [ $count -le 5 ]; do
	echo "count: $count"
	((count++))
done

count2=1
echo  "while loop 2"
while (( count2<=5 )); do
	echo "count is: $count2"
	(( count2++ ))
done

num=50

if [ $num -lt 10 ]; then
	echo "Less than10"
elif [ $num -gt 10 ] && [ $num -lt 20 ]; then
	echo "Between 10 and 20"
else
	echo "none"
fi

