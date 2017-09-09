#!/bin/bash

export PRODUCT=GW

. setdirs.sh



runmake_and_check() {
    ../runmake $1 $2 $3 $4
    if [ $? -ne 0 ]; then
	echo "runmake $1 failed"
	exit 1
    fi
}

runmake_and_check rtl opt all $MAKEOPTS
runmake_and_check ext opt all $MAKEOPTS
runmake_and_check gsi opt all $MAKEOPTS
runmake_and_check gw opt all $MAKEOPTS
runmake_and_check gw opt install

