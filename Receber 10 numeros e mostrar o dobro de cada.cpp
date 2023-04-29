#include<stdio.h>
#include<stdlib.h>

main()
{
	int num[10];
	int cont = 1;
	
	
	
	for(int i=0; i<10;i++)
	{
		printf("insira o valor %i: ", cont++);
		scanf("%i", &num[i]);
	}
	
	
	for(int i=0; i<10;i++)
	{
	int resultado = (num[i] * 2);
		printf("\nO dobro do numero inserido e %i. ", resultado);
	}
	
	return 0;
}
