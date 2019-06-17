#!/usr/bin/env bash

sed -i '1,/<tbody>/d' problems-*.html
sed -i '/<\/tbody>/,$d' problems-*.html
sed -i 's/<[^/][^>]\+>//g' problems-*.html
sed -i 's/<\/td>//g' problems-*.html
sed -i 's/<\/a>//g' problems-*.html
sed -i 's/^[[:space:]]\+//g' problems-*.html
sed -i '/^$/d;' problems*.html
sed -i 's/[[:space:]]*$//g' problems-*.html
sed -i 's/,//g' problems-*.html
sed -i 's/$/,/' problems-*.html
sed -i ':a;/$/{N;s/\n//;ba}' problems-*.html
sed -i 's/<\/tr>,/\n/g' problems-*.html
sed -i 's/,$//' problems-*.html
sed -i "s/&#039;/\'/" problems-*.html
cat problems-*.html > temp.1
sed -i '/^$/d;' temp.1
cat temp.1 | sort -n > temp.2
cat <(echo "number,name,category,solved,level") temp.2 > uri-problems.csv
rm temp.*
