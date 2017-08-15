#! /bin/bash

rm photo.html
gal="/home/user/GALLERY/*"
for image in $gal
do
    echo "<img src=$image/>" >> photo.html
done

firefox photo.html

