checksum.o: checksum.c checksum.h
	gcc -c checksum.c 

encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c

libhfsecurity.a:checksum.o encrypt.o
	ar -rcs libhfsecurity.a encrypt.o checksum.o

test_code: test_code.c libhfsecurity.a
	gcc test_code.c -I. -L. -lhfsecurity

