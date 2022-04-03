all: pd

pdm:main.o restaurant_bill.o
	gcc -Wall -o pd main.o restaurant_bill.o

main.o:main.c
	gcc -c -Wall main.c

restaurant_billmanagement.o:restaurant_bill.c
	gcc -c -Wall restaurant_bill.c
