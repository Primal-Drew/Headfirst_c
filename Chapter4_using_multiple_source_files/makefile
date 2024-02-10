message_hider.o: message_hider.c
	gcc -c message_hider.c

encrypt.o: encrypt.c encrypt.h 
	gcc -c encrypt.c

encrypter: message_hider.o encrypt.o
	gcc encrypt.o message_hider.o -o encrypter.out && ./encrypter.out
