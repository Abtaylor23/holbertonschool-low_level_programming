#!/bin/bash
ggc -Wall -Wextra -Werror -pedantic -c *.c
ar -rc liball.a *.o

