#!/bin/bash
rm -rf a.out && g++ $1 && ./a.out < input.txt