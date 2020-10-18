#!/bin/bash

letters=("A" "C" "G" "T")

num_lines=500
num_char=100

for i in {0..500}
do
	line=""
	for i in {0..99}
	do 
	choice=$((RANDOM % 4))
	line+=${letters[choice]}
	done
	mkdir -p out/
	echo $line >> out/genome.txt

done
