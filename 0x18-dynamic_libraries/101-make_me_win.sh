#!/bin/bash
wget -P /tmp https://github.com/mbithuka-00/alx-low_level_programming/raw/master/0x18-dynamic_libraries/mau.so
export LD_PRELOAD=/tmp/nrandom.so
