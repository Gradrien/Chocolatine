#!/bin/bash

useless_files=($(find . -name '*.o' -o -name '*.a' -o -name '#*#'))
for (( i=0; i<${#useless_files[@]}; ++i)) do echo ${useless_files[$i]}
done
