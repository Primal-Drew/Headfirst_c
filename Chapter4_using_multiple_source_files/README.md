# Chapter4: Using Multiple Source files
## Description 
If you create a big program, you don’t want a big source file.

C allows you to break your source code into small, manageable chunks and then rebuild them into one huge
program.

## Requirements
``gcc compiler``

``vs code``

## Build
Enter this in your Makefile:

    message_hider.o: message_hider.c
	    gcc -c message_hider.c

    encrypt.o: encrypt.c encrypt.h 
	    gcc -c encrypt.c

    encrypter: message_hider.o encrypt.o
	    gcc encrypt.o message_hider.o -o encrypter.out && ./encrypter.out


