gcc -c conecta4.c
gcc -c main.c
gcc -o ejecutable conecta4.o main.o
rm *.o
./ejecutable