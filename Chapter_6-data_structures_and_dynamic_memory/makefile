tour.out: tour.c
	gcc tour.c -o tour.out && ./tour.out

school.out: school.c
	gcc -g school.c -o school.out && valgrind --leak-check=full ./school.out < students.txt

flight.out: flight_operators.c
	gcc flight_operators.c -o flight.out && ./flight.out < islands.txt

spies.out: spies.c
	gcc -g spies.c -o spies.out && valgrind --leak-check=full ./spies.out