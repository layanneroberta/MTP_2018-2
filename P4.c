//Layanne Roberta Silva Oliveira  Matricula:11811ETE012

# include  <stdio.h>


int  A (int k, int l)
{
	if ( k == 0 )
		return l + 1 ;
	
	if ( k > 0 && l == 0)
		return  A(k - 1,1 );
		
	if ( k> 0 && l> 0 )
		return  A(k - 1 , A(k, l - 1 ));
	
}

int  main ()
{
	int k, l;
	
	printf ( " Funcao de Ackermann \ n " );
	printf ( " Entre com valor 'l': " );
	scanf ( "%d",&l);
	getchar ();
	printf ( " Entre com valores 'k':");
	scanf ( "%d",&k);
	getchar ();
	
	printf ( "\t %d", A(k,l));

    return  0 ;
}
