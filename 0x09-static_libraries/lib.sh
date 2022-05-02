#!/bin/bash

gcc -c *.c
ar rc libtout.a *.o
ranlib libmy.a
