#include "debug/debug.h"

#include <stdio.h>

FILE *const stdin;
FILE *const stdout;
FILE *const stderr;

size_t fread(void *a, size_t b, size_t c, FILE *d){printd("Debug Print!!!\n");}
size_t fwrite(const void *a, size_t b, size_t c, FILE * d){printd("Debug Print!!!\n");}
int putc(int a, FILE *b){printd("Debug Print!!!\n");}
int printf(const char *a, ...){printd("Debug Print!!!\n");}
int fprintf(FILE *a, const char *b, ...){printd("Debug Print!!!\n");}
int snprintf(char *a, size_t b, const char *c, ...){printd("Debug Print!!!\n");}
int fgetc(FILE *a){printd("Debug Print!!!\n");}
int feof(FILE *a){printd("Debug Print!!!\n");}
int fputs(const char *a, FILE *b){printd("Debug Print!!!\n");}


#include <string.h>

void *memcpy (void *a, const void *b, size_t c){printd("Debug Print!!!\n");}
int memcmp (const void *a, const void *b, size_t c){printd("Debug Print!!!\n");}
void *memchr (const void *a, int b, size_t c){printd("Debug Print!!!\n");}
size_t strlen (const char *a){printd("Debug Print!!!\n");}
char *strchr (const char *a, int b){printd("Debug Print!!!\n");}
void *memmove (void *a, const void *b, size_t c){printd("Debug Print!!!\n");}
void *memset (void *a, int b, size_t c){printd("Debug Print!!!\n");}
int strcmp (const char *a, const char *b){printd("Debug Print!!!\n");}
int strncmp (const char *a, const char *b, size_t c){printd("Debug Print!!!\n");}


#include <stdlib.h>
void *realloc (void *a, size_t b){printd("Debug Print!!!\n");}
void free (void *a){printd("Debug Print!!!\n");}
double strtod (const char *a, char **b){printd("Debug Print!!!\n");}
int abs (int a){printd("Debug Print!!!\n");}
int atoi (const char *a){printd("Debug Print!!!\n");}
_Noreturn void abort (void){while(1);}


#include <ctype.h>
int   tolower(int a){printd("Debug Print!!!\n");}
int   toupper(int a){printd("Debug Print!!!\n");}
int   isalnum(int a){printd("Debug Print!!!\n");}
int   isxdigit(int a){printd("Debug Print!!!\n");}


#include <assert.h>
void __assert_fail (const char *a, const char *b, int c, const char *d){printd("Debug Print!!!\n");}


#include <math.h>
double      pow(double a, double b){printd("Debug Print!!!\n");}
double      fmod(double a, double b){printd("Debug Print!!!\n");}
double      floor(double a){printd("Debug Print!!!\n");}
double      ceil(double a){printd("Debug Print!!!\n");}
int __signbitl(long double a){printd("Debug Print!!!\n");}
int __fpclassifyl(long double a){printd("Debug Print!!!\n");}
long double frexpl(long double a, int *b){printd("Debug Print!!!\n");}


#include <setjmp.h>
int setjmp (jmp_buf a){printd("Debug Print!!!\n");}
_Noreturn void longjmp (jmp_buf a, int b){while(1);}

#include <errno.h>
int *__errno_location(void){printd("Debug Print!!!\n");}


_Noreturn void exit(int status)
{
	while(1);
}
