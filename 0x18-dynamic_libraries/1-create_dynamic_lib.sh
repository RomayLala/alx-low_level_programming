#!/bin/bash
# This script compiles all .c files in the current directory into
# a dynamic library called liball.so

# Step 1: Compile all .c files into position-independent object files (.o)
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c

# Step 2: Create the shared library (liball.so) from the object files
gcc -shared -o liball.so *.o

# Step 3: Clean up by removing the object files (.o)
rm *.o
