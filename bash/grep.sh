#!/bin/bash

cat /etc/dictionaries-common/words
while read line
do
    name=$line
    echo "$name"
done < /etc/dictionaries-common/words  
