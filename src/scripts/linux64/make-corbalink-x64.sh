#!/bin/bash

. setdirs.sh

make -C ${SRCBOX}/corba/cpp -f corbalink-linux.mak $MAKEOPTS
if [ $? -ne 0 ]; then
    echo "make -C ${SRCBOX}/corba/cpp -f corbalink-linux.mak $MAKEOPTS failed"
    exit 1
fi

mkdir -p ${DSTBOX}/corba
if [ $? -ne 0 ]; then
    echo "mkdir -p ${DSTBOX}/corba failed"
    exit 1
fi

cp ${SRCBOX}/corba/cpp/g2-corba ${DSTBOX}/corba
