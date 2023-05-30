c=0
while read line; do
  c=$(( c+1 ))
  if [ $c -eq 10 ]; then
    echo $line
    break
  fi
done < file.txt
