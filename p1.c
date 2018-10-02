//nome:Layanne Roberta Silva Oliveira
//matrícula: 11811ETE012

#include <stdio.h>

int main ()
{
	int estado=0, i=0;
	char bits[256];
	printf("\nDigite um numero binario: ");
	scanf("%[^\n]",bits);
	while (bits[i] != '\0')
	{
		if (bits[i]=='0')
			{
				if (estado==0)
					estado=0;
				else
					if (estado==1)
						estado=2;
					else
						if (estado==2)
							estado=1;
			}
			
		if (bits[i]=='1')
			{
				if (estado==0)
					estado=1;
				else
					if (estado==1)
						estado=0;
					else
						if (estado==2)
							estado=2;
		}	
		i++;			
	}
	if (estado==0)
		printf ("\nO binario e multiplo de 3");
	else 
		printf ("\nO binario nao e multiplo de 3");
	
	return 0;
}
