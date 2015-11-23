#include<stdio.h>
int Max[10];
int a=0;
int N1;
int main()
{
	printf("Inserte el Numero\n");
	scanf("%d",&N1);
	for(a=0;a<10;a++)
	{
	Max[a]=N1*(a+1);
	printf("Sus multiplos son:%d\n", Max[a]);	
	}
}
