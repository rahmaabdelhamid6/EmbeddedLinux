#!/bin/bash 

value="${HOME}/Pictures\n${HOME}/Music"
select=$(echo -e "$value" | rofi -dmenu)
nautilus "$select" &