#!/bin/bash

path=/home/yuri/Code/proglogic

for folder_name in 9 10 11 12 13 14 15 16 17 18 19 20 
do
    cd $path/$folder_name/
    touch README.md
    echo README "created"
done

