#!/bin/ksh
for file in `find .. -name \*.c`
do
  echo $file
  gcc $file -o a.out
  ./a.out
done

