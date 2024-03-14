checksum.o: checksum.c checksum.h
	gcc -c checksum.c 

encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c

test.o: test_code.c encrypt.o checksum.o
	gcc -c test_code.c

