#/!bin/bash

id $FT_USER -n -G | tr " " "," | tr -d "\n"
