#!/bin/bash
read num
if [ $num -eq 5 ]
then
	echo "Num is equal to 5"
elif [ $num -lt 5 ]
then 
	echo "Num less than 5"
elif [ $num -gt 5 ]
then
	echo "Num greater than 5"
fi

read num1

if (( $num1 < 10 )) || (( $num1 > 5 ))
then 	
	echo "Num  $num1 is greater than  5 or less than 10"
fi
