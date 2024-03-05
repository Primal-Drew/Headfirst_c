checksum.o: checksum.c 
	gcc -c checksum.c -o checksum.o

encrypt.o: encrypt.c
	gcc -c encrypt.c -o encrypt.o

test.out: test_code.c
	gcc test_code.c encrypt.o checksum.o -o test.out

