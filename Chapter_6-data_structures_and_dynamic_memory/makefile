tour.out: tour.c
	gcc tour.c -o tour.out && ./tour.out

play.out: play.c
	gcc -g play.c -o play.out && valgrind --leak-check=full ./play.out < islands.txt

flight.out: flight_operators.c
	gcc flight_operators.c -o flight.out && ./flight.out < islands.txt

spies.out: spies.c
	gcc -g spies.c -o spies.out && valgrind --leak-check=full ./spies.out