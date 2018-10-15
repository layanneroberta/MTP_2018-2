//nome:layanne roberta silva oliveira  matricula:11811ETE012

#include <stdio.h>
 
int main ()
{
	char str[256],num[256]={48};
	int i=0,j=0;
	printf ("\nDigite o desejado: ");
	scanf ("%s",str);
	getchar();
	while (str[i]!='\0')
	{
		if (str[i]>='0')
		{
			if(str[i]<='9')
			{
				num[j]=str[i];
				j++;
			}
			i++;
		}
	}
	printf ("\nOs numeros sao: %s",num);
	return 0;
}
