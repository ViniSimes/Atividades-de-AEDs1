/**
 * @file Exemplo0510             (C)
 * @author Vinicius_Simoes (1387659)
 * @version 1.0
 * @date 24-04-2022
 */

//dependentes
#include "io.h"

/**
Method00 - nao faz nada.
*/
void method00 ( )
{
// nao faz nada
} // end method00 ( )


/**
Method01 - Mostrar certa quantidade de valores
  @param x - quantidade de valores a serem mostrados
*/
void method01a ( int x )
{
  // definir dado
  int y = 1;    //controle

  // repetir enquanto controle menor que a quantidade desejada
  while ( y <= x )
  {
    //mostrar valor
    IO_printf( "%s%d\n", "Valor= ", y );

    //passar ao proximo
    y = y + 1;
  }// end while
  
} // end method01a ( )



/**
Method01 - Mostrar certa quantidade de valores
     OBS.: Preparacao de outro metodo
*/

void method01 ( )
{
  // identificar
  IO_id ( "EXEMPLO0510 - Method01 - v0.0" );

  //executar o metodo auxiliar
  method01a ( 5 );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );  
} // end method02 ( )



/**
Method02 - Mostrar certa quantidade de valores pares
  @param x - quantidade de valores a serem mostrados
*/
void method02a ( int x )
{
  // definir dado local
  int y = 1;    //controle
  int z = 2;

  // repetir enquanto controle menor que a quantidade desejada
  while ( y <= x )
  {
    //mostrar valor
    IO_printf( "%d: %d\n", "Valor = ", y, z );

    //passar para proximo par
    z = z + 2;

    //passar ao proximo valor controlado
    y = y + 1;
  }// end while
  
} // end method02a ( )


/**
Method02 - Mostrar certa quantidade de valores pares
  @param x - quantidade de valores a serem mostrados
*/
void method02 ( )
{
  // identificar
  IO_id ( "EXEMPLO0510 - Method02 - v0.0" );

  //executar o metodo auxiliar
  method02a ( 5 );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method02 ( )



/**
Method03a - Mostrar certa quantidade de valores pares
  @param x - quantidade de valores a serem desejada
*/
void method03a ( int x )
{
  //definir dados
  int y = 1;
  int z = 0;

  //repetir enquanto controle menor que a quantidade desejada
  z = 2 * y;

  //mostrar valor
  IO_printf ( "%d: %d\n", y, z );

  //passar ao proximo valor controlado
  y = y + 1;
}// end method03a


/**
Method03 - realizar method03a
*/
void method03 ( )
{
  // identificar
  IO_id ( "EXEMPLO0510 - Method03 - v0.0" );

  //executar o metodo auxiliar
  method03a ( 5 );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method03 ( )




/**
Method04a - Mostrar certa quantidade de valores pares
  @param x - quantidade de valores a serem desejada
*/
void method04a ( int x )
{
  //definir dados
  int y = x;
  int z = 0;

  //repetir enquanto controle menor que a quantidade desejada
  while ( y > 0 )
  {
    //vincular o valor a ser mostrado ao controle
    z = 2 * y;

    //mostrar valor
    IO_printf ( "%d: %d\n", y, z );

    //passar ao proximo valor controlado
    y = y - 1;
  }// end while
}// end method04a

/**
Method04 - realizar method04a
*/
void method04 ( )
{
  // identificar
  IO_id ( "EXEMPLO0510 - Method04 - v0.0" );

  //executar o metodo auxiliar
  method04a ( 5 );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method04 ( )



/**
Method05a - Mostrar ceerta quantidade de valores pares
  @param x - quantidade de valores a serem mostrados
*/
void method05a ( int x )
{
  //definar dado
  int y = 0;

  //repetir enquanto controle menor que a quantidade desejada
  for ( y = x; y > 0; y = y - 1 )
  {
    //mostrar valor
    IO_printf ( "%d: %d\n", y, ( 2 * y ) );
  }// end for  
}// end method05a


/**
Method05.
*/
void method05 ( )
{
  // identificar
  IO_id ( "EXEMPLO0510 - Method05 - v0.0" );

  //executar o metodo auxiliar
  method05a ( 5 );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method05 ( )



/**
somarValores - funcao para somar certaquantidade de pares
 @return soma dos valores
 @param x - quantidade de valores a serem mostrados
*/
int somarValores ( int x )
{
  //definir dados locais
  int soma = 1;
  int    y = 0;

  //repetir enquanto controle menor que a quantidade desejada
  for ( y = x - 1; y > 0; y = y - 1 )
  {
    //mostrar valor
    IO_printf ( "%d: %d\n", y, (2 * y) );

    //somar valor
    soma = soma + (2 * y);
  }// end for

  //retornar resultado
  return ( soma );
}// end somarValores ( )


/**
Method06.
*/
void method06 ( )
{
  //definir dados
  int soma = 0;

  // identificar
  IO_id ( "EXEMPLO0510 - Method06 - v0.0" );

  //chamar e receber resultados da funcao 
  soma = somarValores ( 5 );

  //mostrar resultado
  IO_printf ( "soma de pares = %d\n", soma );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method06 ( )



/**
somarFracao - funcao para somar certa quantidade de fracoes
 @return soma dos valores
 @param x - qunatidade de valores a serem mnostrados
*/
double somarFracao ( int x )
{
  //definir dados
  double soma        = 1.0;
  double numerador   = 0.0;
  double denominador = 0.0;
  int y              = 0  ;

  //repetir enquanto controle menor que a quantiadde desejada
  for ( y = x - 1; y > 0; y = y - 1 )
  {
    //calcular numerador
    numerador = 1.0;
    //calcular denominador
    denominador = 2.0 * y;
    //mostrar valor
    IO_printf ( "%d: %7.4lf/%7.4lf = %lf\n",
                y, numerador, denominador, (numerador/denominador) );
    //somar valor
    soma = soma + (1.0)/(2.0*y);
  }// end for

  //retornar resultado
  return ( soma );
}// end somarFracao ( )


/**
Method07.
*/
void method07 ( )
{
  //definir dado
  double soma = 0.0;

  // identificar
  IO_id ( "EXEMPLO0510 - Method07 - v0.0" );

  //chamar e receber resultado da funcao
  soma = somarFracao ( 5 );

  //mostrar resultado
  IO_printf ( "soma de fracoes = %lf\n", soma );
  
  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method07 ( )



/**
somarFracao - funcao para somar certa quantidade de fracoes
 @return soma dos valores
 @param x - qunatidade de valores a serem mnostrados
*/
double somarFracaoo ( int x )
{
  //definir dados
  double soma        = 1.0;
  double numerador   = 0.0;
  double denominador = 0.0;
  int y              = 0  ;

  //mostrar primeiro valor
  IO_printf ( "%d: %7.4lf/%7.4lf\n", 1, 1.0, soma );

  //repetir enquanto controle menor que a quantiadde desejada
  for ( y = 1; y <= (x - 1); y = y + 1 )
  {
    //calcular numerador
    numerador = 2.0 * y - 1;
    //calcular denominador
    denominador = 2.0 * y;

    //mostrar valor
    IO_printf ( "%d: %7.4lf/%7.4lf = %lf\n",
                y + 1, numerador, denominador, (numerador/denominador) );
   
    //somar valor
    soma = soma + (2.0 * y - 1)/(2.0*y);
  }// end for

  //retornar resultado
  return ( soma );
}// end somarFracao ( )


/**
Method08.
*/
void method08 ( )
{
  //definir dados
  double soma = 0.0;

  // identificar
  IO_id ( "EXEMPLO0510 - Method08 - v0.0" );

  //chamar e receber resultado da fracao
  soma = somarFracaoo ( 5 );

  //mostrar resultado
  IO_printf ( "soma de fracoes = %lf\n", soma );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method08 ( )



/**
somarFracao2 - funcao para somar certa quantidade de fracoes
 @return soma dos valores
 @param x - quantidade de calores  a serem mostrados
*/
double somarFracao2 ( int x )
{
  //definir dados
  double soma        = 1.0;
  double numerador   = 0.0;
  double denominador = 0.0;
  int y              = 0  ;

  //mostrar primeiro valor
  IO_printf ( "%d: %7.4lf/%7.4lf\n", 1, 1.0, soma );

  //repetir enquanto controle menor que a quantiadde desejada
  for ( y = 1; y <= (x - 1); y = y + 1 )
  {
    //mostrar valor
    IO_printf ( "%d: %7.4lf/%7.4lf = %lf\n",
                y + 1, (2.0 * y), (2.0 * y + 1), ((2.0 * y)/(2.0 * y + 1)) );
   
    //somar valor
    soma = soma + (2.0 * y)/(2.0 * y + 1);
  }// end for

  //retornar resultado
  return ( soma );
}// end somarFracao ( )


/**
Method09.
*/
void method09 ( )
{
  //definir dado
  double soma = 0.0;

  // identificar
  IO_id ( "EXEMPLO0510 - Method09 - v0.0" );

  //chamar e receber resultado da funcao
  soma = somarFracao2 ( 5 );

  //mostrar resultado
  IO_printf ( "soma de fracoes = %lf\n", soma );
  
  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method09 ( )



/**
multiplicarValores - funcao para multiplicar certa quantidade de valores impares
 @return produtos de valores
 @param x - quantidade de valores 
*/
int multiplicarValores ( int x )
{
  //definir dados
  int produto = 1;
  int y        = 0;

  //repetir enquanto controle menor que a quantidade desejada
  for ( y = 1; y <= x; y = y + 1 )
  {
    //mostrar valor
    IO_printf ( "%d: %d\n", y, (2 * y - 1) );

    //somar valor
    produto = produto * (2 * y - 1);
  }// end for

  //retornar resultado
  return ( produto );
}// end multiplicarValores ( )


/**
Method10.
*/
void method10 ( )
{
  // identificar
  IO_id ( "EXEMPLO0510 - Method10 - v0.0" );

  //mostrar produto de valores
  IO_printf ( "%s%d\n", "produto = ", multiplicarValores ( 5 ) );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method10 ( )



/**
Funcao principal.
  @return codigo de encerramento
*/

int main ( )
{
  // definir dado
  int x = 0;

  // repetir até desejar parar
  do
  {
    // identificar
    IO_id ( "EXEMPLO0510 - Programa - v0.0" );

    // ler do teclado
    IO_println ( "Opcoes" );
    IO_println ( " 0 - parar" );
    IO_println ( " 1 - mostrar certa quantidade de valores"           );
    IO_println ( " 2 - mostrar certa quantidade de valores pares"     );
    IO_println ( " 3 - mostrar certa quantidade de valores pares"     );
    IO_println ( " 4 - mostrar certa quantidade de valores pares"     );
    IO_println ( " 5 - mostrar certa quantidade de valores pares"     );
    IO_println ( " 6 - funcao para somar certaquantidade de pares"    );
    IO_println ( " 7 - funcao para somar certa quantidade de fracoes" );
    IO_println ( " 8 - funcao para somar certa quantidade de fracoes" );
    IO_println ( " 9 - funcao para somar certa quantidade de fracoes" );
    IO_println ( "10 - funcao para multiplicar certa quantidade de valores impares" );
    IO_println ( "" );
    x = IO_readint ( "Entrar com uma opcao: " );
    
    // testar valor
      switch ( x )
      {
        case 0: method00 ( );
        break;

        case 1: method01 ( );
        break;

        case 2: method02 ( );
        break;

        case 3: method03 ( );
        break;

        case 4: method04 ( );
        break;

        case 5: method05 ( );
        break;

        case 6: method06 ( );
        break;

        case 7: method07 ( );
        break;

        case 8: method08 ( );
        break;

        case 9: method09 ( );
        break;

        case 10: method10 ( );
        break;

        default:
        IO_pause ( "ERRO: Valor invalido." );
      } // end switch
  }
  while ( x != 0 );

  // encerrar
  IO_pause ( "Apertar ENTER para terminar" );
  return ( 0 );

}// end main( )


/*
Teste    Versao    Resultado      Atualizacao
 1.0       0.1       (OK)          identificacao do progama
 2.0       0.1       (OK)          method02
 3.0       0.1       (OK)          method03
 4.0       0.1       (OK)          method04
 5.0       0.1       (OK)          method05
 6.0       0.1       (OK)          method06
 7.0       0.1       (OK)          method07
 8.0       0.1       (OK)          method08
 9.0       0.1       (OK)          method09
 10.0       0.1       (OK)          method10
*/