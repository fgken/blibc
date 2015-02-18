#include <stdio.h>

FILE *const stdin;
FILE *const stdout;
FILE *const stderr;

size_t fread(void *a, size_t b, size_t c, FILE *d){return 0;}
size_t fwrite(const void *a, size_t b, size_t c, FILE * d){return 0;}
int putc(int a, FILE *b){return 0;}
int printf(const char *a, ...){}
int fprintf(FILE *a, const char *b, ...){}
int snprintf(char *a, size_t b, const char *c, ...){}
int fgetc(FILE *a){}
int feof(FILE *a){}
int fputs(const char *a, FILE *b){}


#include <string.h>

void *memcpy (void *a, const void *b, size_t c){}
int memcmp (const void *a, const void *b, size_t c){}
void *memchr (const void *a, int b, size_t c){}
size_t strlen (const char *a){return 0;}
char *strchr (const char *a, int b){}
void *memmove (void *a, const void *b, size_t c){}
void *memset (void *a, int b, size_t c){}
int strcmp (const char *a, const char *b){}
int strncmp (const char *a, const char *b, size_t c){}


#include <stdlib.h>
void *realloc (void *a, size_t b){}
void free (void *a){}
double strtod (const char *a, char **b){}
int abs (int a){}
int atoi (const char *a){}
_Noreturn void abort (void){while(1);}


#include <ctype.h>
int   tolower(int a){}
int   toupper(int a){}
int   isalnum(int a){}
int   isxdigit(int a){}


#include <assert.h>
void __assert_fail (const char *a, const char *b, int c, const char *d){}


#include <math.h>
double      pow(double a, double b){}
double      fmod(double a, double b){}
double      floor(double a){}
double      ceil(double a){}
int __signbitl(long double a){}
int __fpclassifyl(long double a){}
long double frexpl(long double a, int *b){}


#include <setjmp.h>
int setjmp (jmp_buf a){}
_Noreturn void longjmp (jmp_buf a, int b){while(1);}

#include <errno.h>
int *__errno_location(void){}


_Noreturn void exit(int status)
{
	while(1);
}
