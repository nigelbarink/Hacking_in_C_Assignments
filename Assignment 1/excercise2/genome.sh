#!/bin/bash

if [ [ -z $1 ]  -o  [ -z $2 ] ]
	then 
		echo 'please provide arguments'
		exit
fi


RESULT=`cat  $1 | grep -c  $2`
echo $2 appeared $RESULT times in $1



