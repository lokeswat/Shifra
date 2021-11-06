#ifndef BASIC
#define BASIC

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<setjmp.h>
#include<windows.h>

jmp_buf buf,buf1;

int N=20;
struct employee
{
	char name[100];
	int id;
	int sal;
	struct perf
	{
		int w_days;
		int rec_calls;
		int holidays;
	}perf[100];
	
	
}s[100];

#endif
