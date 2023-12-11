#!/bin/bash
wget -P .. https://rawgithubusercontent.com/dretechdev/alx-low_level_programming/master/0x18-dynamic_libraries/libhackme.so
export LD_PRELOAD="$PWD/../libhackme.so"
