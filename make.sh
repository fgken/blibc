mkdir -p lib
ARCH="x86_64"
gcc -c src/arch/$ARCH/setjmp.s -o lib/setjmp.o
gcc -c src/arch/$ARCH/longjmp.s -o lib/longjmp.o
gcc -c -nostdinc -nostdlib -fno-builtin -Iinclude src/libc.c -o lib/libc.o
ar rcs lib/libc.a lib/libc.o lib/setjmp.o lib/longjmp.o
