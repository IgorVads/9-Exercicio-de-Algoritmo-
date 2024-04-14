#include <stdio.h>
#include <locale.h>
/*Um programa que solicita e armazena oito valores inteiros em um vetor, 
denominado de A, e exibe os valores armazenados, porém na ordem inversa.*/

int main()
{
	int A[8];
	int i;
	
	printf("Digite oito valores: \n");
	
	for	(i = 0; i < 8; i++) 
	{
		printf("%i° valor: ", i+1);
			scanf("%i", &A[i]);
	}
	
	printf("\nValores inversos: \n");
		for (i = 7; i >= 0; i--) 
		{
			printf("\n%i", A[i]);
		}
	return 0;
}