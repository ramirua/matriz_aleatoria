/*creando una matriz con numeros aleatorios*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define F 5
#define C 5

int main()
{
	int matriz[F][C],i,j,mat[F][C],matri[F][C];
	
	//cargando la matriz con numeros aleatorios
	srand(time(0));
	for(i=0;i<F;i++)
	{
		for(j=0;j<C;j++)
		{
			matriz[i][j]=rand()%50+50; //numeros generan la cantidad de por encima o por debajo de 100
		}
	}
	
	//impriendo la matriz
	for(i=0;i<F;i++)
	{
		for(j=0;j<C;j++)
		{
			printf(" %d",matriz[i][j]);
		}
		printf("\n");
	}
	
	// transpuesta
	printf("\n\n matriz transpuesta: \n");
	for(i=0;i<F;i++)
	{
		for(j=0;j<C;j++)
		{
				printf(" %d ",matriz[j][i]);
		}
		printf("\n");
	}
	
	//suma de matrices
	for(i=0;i<F;i++)
	{
		for(j=0;j<C;j++)
		{
			mat[i][j]=matriz[i][j]+matriz[j][i];
		}
	}
	printf("\n\n suma de las matrices: \n");
	for(i=0;i<F;i++)
	{
		for(j=0;j<C;j++)
		{
			printf(" %d ",mat[i][j]);
		}
		printf("\n");
	}
	
		//multiplicacion de matrices
	for(i=0;i<F;i++)
	{
		for(j=0;j<C;j++)
		{
			matri[i][j]=matriz[i][j]*mat[i][j];
		}
	}
	printf("\n\n multiplicacion de las matrices: \n");
	for(i=0;i<F;i++)
	{
		for(j=0;j<C;j++)
		{
			printf(" %d ",matri[i][j]);
		}
		printf("\n");
	}
	return 0;
}
