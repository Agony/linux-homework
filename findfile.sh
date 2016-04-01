#!/bin/bash

findFile()
{

	for file in `ls $1`
	do
	    if [ -d $1"/"$file ]
	    then
		findFile $1"/"$file 
	    fi

	    if [ -f $1"/"$file ]
	    then
		echo "$file"
	    fi
	done
}

echo "文件有："

space="/home"
findFile $space
