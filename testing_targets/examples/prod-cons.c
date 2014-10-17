#include <stdio.h>
#include "/home/wmd/cloud9/src/cloud9/include/klee/klee.h"
int test3(int b)
{
	int c = 0;
	c ++;
	return b;
}

int test4(int b)
{
	return b;
}

void test2(int b)
{
	if(b>0)
		test3(b);
	else
		test4(b);
}

int test(int a, int b)
{
	
	int c = 0;
	if(a==1)
	{
		a++;
		if(b==1)
		{
			test2(1);
		}
		else
		{
			test2(-1);
		}
		return c;
	}
	return c;
}

void test5(int a, int b)
{
	if(a>b)
		test3(b);
	else
		test4(b);
}

int main() {
  	int a;
	int b;
	int i;
	int k;
	klee_make_symbolic(&a, sizeof(a), "a");
	klee_make_symbolic(&b, sizeof(b), "b");
	klee_make_symbolic(&k, sizeof(i), "k");
	i=0;
	while(i<k)
	{
		if(i>5)
		{
			test5(a,b);
			break;
		}
		else
			i++;
	}	

/*
	if(a>b)
	{
		test(a, b);
	}
	else
	{
		test(b, a);
	}
*/
	return 0;
}
