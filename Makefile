all: progprincipal

progprincipal: progprincipal.o func1.o func2.o func3.o
	gcc -o progprincipal progprincipal.o func1.o func2.o func3.o

%.o: %.c funcs.h
	gcc -c $<

clean:
	rm *.o progprincipal
