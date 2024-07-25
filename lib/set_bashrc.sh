#!/bin/bash

PWD=$(pwd)
PIN_PATH=${PWD}/pin
LIBCONFIG_PATH=${PWD}/libconfig
C_PATH="/usr/include/hdf5/serial"


EXPORT_PIN_LINE="export PINPATH=\"${PIN_PATH}\""
EXPORT_LIBCONFIG_LINE="export LIBCONFIGPATH=\"${LIBCONFIG_PATH}\""
EXPORT_CPATH_LINE="export CPATH=\"${C_PATH}\""

grep -qF "$EXPORT_PIN_LINE" ~/.bashrc
if [ $? -ne 0 ]; then
    echo "$EXPORT_PIN_LINE" >> ~/.bashrc
fi

grep -qF "$EXPORT_LIBCONFIG_LINE" ~/.bashrc
if [ $? -ne 0 ]; then
    echo "$EXPORT_LIBCONFIG_LINE" >> ~/.bashrc
fi

grep -qF "$EXPORT_CPATH_LINE" ~/.bashrc
if [ $? -ne 0 ]; then
    echo "$EXPORT_CPATH_LINE" >> ~/.bashrc
fi

source ~/.bashrc

