#!/bin/bash
wget -P /tmp/ https://github.com/RidaBoutskaouin/alx-low_level_programming/blob/master/0x18-dynamic_libraries/nrandom.s
export LD_PRELOAD=/tmp/nrandom.so
