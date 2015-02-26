#include "debug/debug.h"

#include <stdio.h>

FILE *const stdin;
FILE *const stdout;
FILE *const stderr;

size_t fread(void *a, size_t b, size_t c, FILE *d){printd("9Debug Print!!!\n");}
size_t fwrite(const void *a, size_t b, size_t c, FILE * d){printd("10Debug Print!!!\n");}
int putc(int a, FILE *b){printd("11Debug Print!!!\n");}
int printf(const char *a, ...){printd("12Debug Print!!!\n");}
int fprintf(FILE *a, const char *b, ...){printd("13Debug Print!!!\n");}
int snprintf(char *a, size_t b, const char *c, ...){printd("14Debug Print!!!\n");}
int fgetc(FILE *a){printd("15Debug Print!!!\n");}
int feof(FILE *a){printd("16Debug Print!!!\n");}
int fputs(const char *a, FILE *b){printd("17Debug Print!!!\n");}


#include <string.h>

void *memcpy (void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *d = dest;
	const unsigned char *s = src;

	printd("memcpy\n");

	if(dest == NULL || src == NULL)printd("NULL Pointer\n");

	for(i=0; i<n; i++){
		d[i] = s[i];
	}

	return dest;
}

int memcmp (const void *s1, const void *s2, size_t n)
{
	size_t i;
	const unsigned char *p1 = s1;
	const unsigned char *p2 = s2;

	printd("memcmp\n");

	for (i=0; i<n; i++){
		if(p1[i] != p2[i]){
			return p2[i] - p1[i];
		}
	}

	return 0;
}

void *memchr (const void *a, int b, size_t c){printd("37Debug Print!!!\n");}
size_t strlen (const char *s)
{
	size_t len=0;
	printd("strlen\n");
	while(s[len] != 0x00) len++;
	return len;
}

char *strchr (const char *a, int b){printd("39Debug Print!!!\n");}
void *memmove (void *a, const void *b, size_t c){printd("40Debug Print!!!\n");}
void *memset (void *s, int c, size_t n)
{
	unsigned char *p = (unsigned char *)s;

	printd("memset\n");
	
	while(0<n) p[--n] = c;

	return s;
}
int strcmp (const char *a, const char *b){printd("42Debug Print!!!\n");}
int strncmp (const char *a, const char *b, size_t c){printd("43Debug Print!!!\n");}


#include <stdlib.h>
char memory[128*1024*1024];
size_t pos=0;
void *realloc (void *ptr, size_t size)
{
	void *ret = &memory[pos];
	
	printd("realloc\n");
	
	if(ptr != NULL) memcpy(ret, ptr, size);

	pos += size;

	return ret;
}

void free (void *ptr)
{
	printd("free\n");
}

double strtod (const char *a, char **b){printd("62Debug Print!!!\n");}
int abs (int a){printd("63Debug Print!!!\n");}
int atoi (const char *a){printd("64Debug Print!!!\n");}
_Noreturn void abort (void){while(1);}


#include <ctype.h>
int   tolower(int a){printd("69Debug Print!!!\n");}
int   toupper(int a){printd("70Debug Print!!!\n");}
int   isalnum(int a){printd("71Debug Print!!!\n");}
int   isxdigit(int a){printd("72Debug Print!!!\n");}


#include <assert.h>
void __assert_fail (const char *a, const char *b, int c, const char *d){printd("76Debug Print!!!\n");}


#include <math.h>
double      pow(double a, double b){printd("80Debug Print!!!\n");}
double      fmod(double a, double b){printd("81Debug Print!!!\n");}
double      floor(double a){printd("82Debug Print!!!\n");}
double      ceil(double a){printd("83Debug Print!!!\n");}
int __signbitl(long double a){printd("84Debug Print!!!\n");}
int __fpclassifyl(long double a){printd("85Debug Print!!!\n");}
long double frexpl(long double a, int *b){printd("86Debug Print!!!\n");}


#include <setjmp.h>
//int setjmp (jmp_buf env){printd("setjmp\n");}
//_Noreturn void longjmp (jmp_buf a, int b){while(1);}

#include <errno.h>
int *__errno_location(void){printd("94Debug Print!!!\n");}


_Noreturn void exit(int status)
{
	while(1);
}
