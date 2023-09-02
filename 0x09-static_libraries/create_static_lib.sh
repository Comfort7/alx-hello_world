#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create a static library from the compiled object files
ar -rc liball.a *.o

# Clean up by removing the object files
rm *.o

echo "Static library liball.a has been created."
