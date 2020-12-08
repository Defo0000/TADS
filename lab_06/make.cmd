@ECHO OFF
CHCP 65001
gcc -std=c99 -Wall -Werror -pedantic -c src/menu.c -o out/menu.o
gcc -std=c99 -Wall -Werror -pedantic -c src/io.c -o out/io.o
gcc -std=c99 -Wall -Werror -pedantic -c src/main.c -o out/main.o
gcc -o app.exe out/main.o out/menu.o out/io.o