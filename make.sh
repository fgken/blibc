gcc -c -nostdinc -nostdlib -fno-builtin src/libc.c -o lib/libc.o
ar rcs lib/libc.a lib/libc.o
