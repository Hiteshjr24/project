a.out:j1.o festival.o weekday.o month.o 
	gcc festival.o weekday.o month.o j1.o 
j1.o:j1.o server.h
	gcc -c j1.c
festival.o:festival.o server.h
	gcc -c festival.c
weekday.o:weekday.o server.h
	gcc -c weekday.c
month.o:month.o server.h
	gcc -c month.c
