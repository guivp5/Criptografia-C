#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>


double f( double x , double B ) {

	double coef[ ] = { 186.752, -148.235, 34.5049, -3.5091, 0.183166, -0.00513554, 0.0000735464, -4.22038e-7 };
	double resultado = coef[ 0 ] + ( coef[ 1 ] + B ) * x;
	int i = 2;
	for ( i = 2; i < 8; i++ ) {
		resultado += coef[ i ] * pow( x , i );
	}

	return resultado;
}

void processar_mensagem( char * mensagem , int B ) {
	int j = 1;
	int i = 0;
	

	while ( mensagem[ i ] != '\0' ) {
		if ( i % 2 == 1 ) {
			int f_ = round( f( j , B ) );
			if ( f_ != 0 ) {
				char hexString[ 2 ] = { mensagem[ i - 1 ], mensagem[ i ] };
				int asciiValue = ( int ) strtol( hexString , NULL , 16 );

				if ( asciiValue == 0 ) {
					break;
				}

				printf( "%c" , ( char ) asciiValue  );
			}
			j++;
		}
		i++;
	}
	printf( "\n" );
}

int main( ) {

	int nMensagens = 0;
	printf( "Numero de mensagens> " );
	scanf( "%d" , &nMensagens );
	int n = 0;
	for ( n = 0; n < nMensagens; n++ ) {
		int B = 0;
		printf( "B> " );
		scanf( "%d" , &B );

		char mensagem[ 100 ];
		printf( "Mensagem> " );
		scanf( "%s" , mensagem );

		processar_mensagem( mensagem , B );
	}

	return 0;
}