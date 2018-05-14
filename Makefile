PROG = produto
CC = g++
CPPFLAGS = -Wall -pedantic -std=c++11
OBJS = main.o produto.o bebida.o fruta.o roupa.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) main.cpp -c $(CPPFLAGS)

produto.o: produto.h
	$(CC) produto.cpp -c $(CPPFLAGS)

bebida.o: bebida.h
	$(CC) bebida.cpp -c $(CPPFLAGS)

fruta.o: fruta.h
	$(CC) fruta.cpp -c $(CPPFLAGS)

roupa.o: roupa.h
	$(CC) roupa.cpp -c $(CPPFLAGS)

clean:
rm -f core $(PROG) $(OBJS)
