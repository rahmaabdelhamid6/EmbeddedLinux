#!/bin/bash

echo "Do you know me ?"
read -rp "Answer is " Answer

case $Answer in 
yes|yes|y|y)
echo "True"
;;  #break 
No|no|N|n)
echo "False"
;;
esac

#Select
select name in moatasem elsayed mahmoud; do
    case ${name} in
        moatasem)
            echo "hello ${name}"
            ;;
        *)
            break
            ;;
    esac
done


select name in Rahma AbdElhamid Afifi; do
    echo $name
    break
done

select name in $(ls); do
    echo "${name}"
    break
done

############# break ###########
#break
#Select use with switch or if

select name in "Rahma" "AbdElhamid" "Afifi"
do
    case "${name}" in
        "Rahma")
            echo "hello ${name}"
            break
            ;;
        "AbdElhamid")
            echo "hello ${name}"
            break
            ;;  
        "Afifi")
            echo "hello ${name}"
            break
            ;; 
        *)
            echo "Invalid option, exiting."
            break
            ;;
    esac
done
