#!/bin/bash

cd libconfig
./configure --prefix=$(pwd) && make install
