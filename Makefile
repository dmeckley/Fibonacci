fib : main.o Fibonacci.o
	clang++ main.o Fibonacci.o -o fib

main.o : main.cpp Fibonacci.h
	clang++ -c main.cpp

Fibonacci.o : Fibonacci.cpp Fibonacci.h
	clang++ -c Fibonacci.cpp

clean :
	rm -f *.o fib