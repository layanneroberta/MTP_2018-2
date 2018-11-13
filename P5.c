//LAYANNE ROBERTA SILVA OLIVEIRA matricula : 11811ETE012

#include <stdio.h>

typedef
	unsigned long long int
Bytes8;

typedef
	struct LCG { Bytes8 a, c, m, rand_max, atual;}
LCG;

void semente(LCG * r, Bytes8 seed) 
{
	r->a = 0x5DEECE66DULL;
	r->c = 11ULL;
	r->m = (1ULL << 48);
	r->rand_max = r->m - 1;
	r->atual = seed;
}

Bytes8 lcg_rand(LCG * r) 
{
	r->atual = (r->a * r->atual + r->c) % r->m;
	return r->atual;
}

double lcg_rand_01(LCG * r) 
{
	return ((double) lcg_rand(r))/(r->rand_max);
}

void gera_numeros(float * vetor, int tam, float min, float max, LCG * r) //retorna um vetor entre 0.5 e 1.5
{
	int i;
	for(i = 0; i < tam; i++)
		vetor[i] = (max-min)*lcg_rand_01(r) + min;
}

float soma(float *inicio, float *fim)
{
	while (inicio != fim + 1) 
		return (*inicio + soma(inicio + 1, fim));
	return 0;
}

float produto(float *inicio, float *fim)
{
	while (inicio != fim + 1) 
		return (*inicio * produto(inicio + 1, fim));
	return 1;	
}

int main()
{
	LCG random;
   	semente(&random, 123456);
	
	int op;
	float vetor[50];//N
	
	gera_numeros(vetor, 50, 0.5, 1.5, &random);
	
	do
	{
		printf ("Voce deseja realizar um: \
		\n\n1) SomatoriO \n2) Produtorio \n3) Sair do programa. \n\n");
		scanf ("%d", &op);
		getchar();
		switch (op)
		{
			case 1:
				printf ("\nSomatorio: %.6f \n\n", soma (&vetor[0], &vetor[49]));
				break;
			case 2:
				printf ("\nProdutorio: %g \n\n", produto (&vetor[0], &vetor[49]));
				break;	
			default:
				if (op != 3)
					printf ("\nOpcao invalida! \n\n");
		}	
	} while (op != 3);
	return 0;
}
