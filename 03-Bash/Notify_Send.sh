#!/bin/bash 
BATTERY_PATH="/sys/class/power_supply/BAT0/capacity"
BATTERY_Value=$(cat $BATTERY_PATH)
if [ "${BATTERY_Value}" -lt 100 ]
then
    notify-send "please take care your battery less than 100"
fi