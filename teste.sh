#! /bin/bash
SUB_DOMAIN=$1

echo "Params recived ${@}"

for PARAM in $@
do
    if [ $PARAM -eq '--bot' ]
    then
        echo  'Removing bot';
    elif [ $PARAM -eq '--department' ]
    then
        echo 'Removing department';
    else
        echo 'Falta de parametros';
    fi
done
