#!/bin/bash
wget -P /tmp https://github.com/SaharMFR/alx-low_level_programming/tree/master/0x18-dynamic_libraries/myhack.so
export LD_PRELOAD=/tmp/myhack.so
