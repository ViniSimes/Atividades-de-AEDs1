/**
 * @file Exemplo0611             (C)
 * @author Vinicius_Simoes (1387659)
 * @version 1.1
 * @date 07-06-2022
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
Method01 - Mostrar certa quantidade de valores recursivamente
  @param x - quantidade de valores a serem mostrados
*/
void method01a ( int x )
{
  // repetir enquanto valor maior que zero
  if ( x > 0 )
  {
    //mostrar valor
    IO_printf( "%s%d\n", "Valor = ", x );

    //passar ao proximo
    method01a( x - 1 );
  }// end if
  
} // end method01a ( )



/**
Method01 - Mostrar certa quantidade de valores
     OBS.: Preparacao de outro metodo
*/

void method01 ( )
{
  //definir dados
  int quantidade = 0;
  int valor      = 0;
  int controle   = 0;

  // identificar
  IO_id ( "EXEMPLO0611 - Method01 - v0.0" );

  //executar o metodo auxiliar
  method01a ( 5 );                //motor da recusrsividade

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );  
} // end method02 ( )



/**
 Method02a - mostrar certa quantidade de valores recursivamente
 @param x - quantidade de valores a serem mostrados
*/
void method02a ( int x )
{
  //repetir enquanto valores maior que zero
  if ( x > 0 )
  {
    //passar ao proximo
    method02a ( x - 1 );

    //mostrar valor
    IO_printf ( "%s%d\n", "Valor = ", x);
  }// end if
}// end method02a ( )

/**
Method02.
*/
void method02 ( )
{
  // identificar
  IO_id ( "EXEMPLO0611 - Method02 - v0.0" );

  //executar o metodo auxiliar
  method02a ( 5 );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method02 ( )



/**
 Method03a - mostrar certa quantidade de valores recursivamente
 @param x - quantidade de valores a serem mostrados
*/
void method03a ( int x )
{
  //repetir enquanto valores maior que zero
  if ( x > 1 )
  {
    //passar ao proximo
    method03a ( x - 1 );

    //mostrar valor
    IO_printf ( "%s%d\n", "Valor = ", x);
  }
    else
    {
      //mostrar o ultimo
      IO_printf ( "%s\n", "Valor = 1" );
    }// end if else

}// end method03a ( )


/**
Method03.
*/
void method03 ( )
{
  // identificar
  IO_id ( "EXEMPLO0611 - Method03 - v0.0" );

  //executar o metodo auxiliar
  method03a ( 5 );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method03 ( )



/**
 Method04a - mostrar certa quantidade de valores recursivamente
 @param x - quantidade de valores a serem mostrados
*/
void method04a ( int x )
{
  //repetir enquanto valores maior que zero
  if ( x > 1 )
  {
    //passar ao proximo
    method04a ( x - 1 );

    //mostrar valor
    IO_printf ( "%s%d\n", "Valor = ", 2*(x-1) );
  }
    else
    {
      //mostrar o ultimo
      IO_printf ( "%s\n", "Valor = 1" );
    }// end if else

}// end method04a ( )


/**
Method04.
*/
void method04 ( )
{
  // identificar
  IO_id ( "EXEMPLO0611 - Method04 - v0.0" );

  //executar o metodo auxiliar
  method04a ( 5 );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method04 ( )



/**
 Method05a - mostrar certa quantidade de valores recursivamente
 @param x - quantidade de valores a serem mostrados
*/
void method05a ( int x )
{
  //repetir enquanto valores maior que zero
  if ( x > 1 )
  {
    //passar ao proximo
    method05a ( x - 1 );

    //mostrar valor
    IO_printf ( "%d: %d%d\n", x, (2*(x-1)), (2*(x-1) + 1) );
  }
    else
    {
      //mostrar o ultimo
      IO_printf ( "%d; %d\n", x, 1 );
    }// end if else

}// end method05a ( )


/**
Method05.
*/
void method05 ( )
{
  // identificar
  IO_id ( "EXEMPLO0611 - Method05 - v0.0" );

  //executar o metodo auxiliar
  method05a ( 5 );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method05 ( )



/**
 somarFracoes - Somar certa quanatidade de fracoes recursivamente
 @return soma de valores
 @param x - quantidade de valores a serem colocaros
*/
double somarFracoes ( int x )
{
  //definir dados
  double soma = 0.0;

  //repetir enquanto valor maior que zero
  if ( x > 1 )
  {
    //separar um valor e passar ao proximo (motor da recursivaidade)
    soma = ( 2.0*(x-1))/(2.0*(x-1)+1 ) + somarFracoes ( x - 1 );

    //mostrar valor
    IO_printf ( "%d: %lf%lf\n", x, ( 2.0*(x-1))/(2.0*(x-1)+1) );
  }
      else
      {
        //base da recursividade
        soma = 1.0;

        //mostrar o ultimo
        IO_printf( "%d; %lf\n", x, 1.0 );
      }// end if else
  
  //retornar resultados
  return ( soma );
}// end somarFracoes ( )


/**
Method06.
*/
void method06 ( )
{
  //definir dados
  double soma = 0.0;
  
  // identificar
  IO_id ( "EXEMPLO0611 - Method06 - v0.0" );

  //chamar a funcao e receber o resultado
  soma = somarFracoes ( 5 );

  //mostrar resultados
  IO_printf( "soma = %lf\n", soma );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method06 ( )



/**
 somarFracoes2b - somar certa quantidade de fracoes recursivamente
 @return soma de valores
 @param x           - quantidade de valores a serem mostrados
 @param soma        - valor atual da soma
 @param numerador   - numerador da parcela a ser somada
 @param denominador - denominador a parcela a ser somada
*/
double somarFracoes2b ( int x, double soma, double numerador, double denominador )
{
  //repetir valores maiores que zero
  if ( x > 0 )
  {
    //mostrar valores atuais
    IO_printf ( "%d: %lf%lf\n", x, numerador, denominador );

    //somar o termo atual e passar ao proximo
    soma = somarFracoes2b ( x - 1,
                           soma + ((1.0*numerador) / denominador), 
                          numerador +2.0 , 
                          denominador+2.0 );
  }// end if

  //return resultado
  return ( soma );
}// end somarFracoes2b ( )


/**
 somarFracoes2a - somar certa quantidade de fracoes recursivamente
 @return soma de valores
 @param x           - quantidade de valores a serem mostrados
*/
double somarFracoes2a ( int x )
{
  //definir dados
  double soma = 0.0;

  //repetir valores maiores que zero
  if ( x > 0 )
  {
    //mostrar ultimo
    IO_printf ( "%d: %lf\n", x, 1.0 );

    //somar o termo atual e passar ao proximo
    soma = somarFracoes2b ( x - 1, 1.0, 2.0, 3.0 );
  }// end if

  //return resultado
  return ( soma );
}// end somarFracoes2b ( )


/**
Method07.
*/
void method07 ( )
{
  //definir dados
  double soma = 0.0;

  // identificar
  IO_id ( "EXEMPLO0611 - Method07 - v0.0" );

  //chamar a funcao e receber o resultado
  soma = somarFracoes2a ( 5 );

  //mostrar resultado
  IO_printf ( "soma = %lf\n", soma );
  
  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method07 ( )



/**
 contarDigitos - Contar digitos recursivamente.
 @return quantidade de digitos
 @param x - numero cuja quantidade de digitos sera' calculada
*/
int contarDigito ( int x )
{
  //definir dados
  int resposta = 1;

  //testar se contador valido
  if ( x >= 10 )
  {
    //tentar fazer de novo com valor menor
    resposta = 1 + contarDigito ( x/10 );
  }
      else
      {
          if( x < 0 )
          {
            //fazer de novo com valor absoluto
            resposta = contarDigito ( -x );
          }// end if
      }//end if else

      //retornar resposta
      return ( resposta );
}// end contarDigitos ( )


/**
Method08.
*/
void method08 ( )
{
  // identificar
  IO_id ( "EXEMPLO0611 - Method08 - v0.0" );

  //mostar resultado
  IO_printf ( "digitos (%3d) = %d\n", 123, contarDigito  ( 123 ) );
  IO_printf ( "digitos (%3d) = %d\n", 1,   contarDigito    ( 1 ) );
  IO_printf ( "digitos (%3d) = %d\n", -10, contarDigito  ( -10 ) );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method08 ( )



/**
 fibonacci - gerador de numero de Fibonacci
 @return numero de Fibonacci
 @param x - numero de ordem cujo valor sera' calculado
*/
int fibonacci ( int x )
{
  //definir dados
  int resposta = 0;

  //testar se contador valido
  if ( x == 1 || x == 2 )
  {
    //primeiros dois valores iguais a 1
    resposta  = 1;
  }
      else
      {
        if( x > 1 )
        {
          //fazer de novo com valor absoluto
          resposta = fibonacci ( x - 1 ) + fibonacci ( x - 2 );
        }// end if 
      }// end if else

  //retornar resposta
  return ( resposta );
}// end finbonacci ( )


/**
Method09.
*/
void method09 ( )
{
  // identificar
  IO_id ( "EXEMPLO0611 - Method09 - v0.0" );

  //calcular numero de Fibonacci
  IO_printf ( "fibonacci (%d) = %d\n", 1, fibonacci ( 1 ) );
  IO_printf ( "fibonacci (%d) = %d\n", 2, fibonacci ( 2 ) );
  IO_printf ( "fibonacci (%d) = %d\n", 3, fibonacci ( 3 ) );
  IO_printf ( "fibonacci (%d) = %d\n", 4, fibonacci ( 4 ) );
  IO_printf ( "fibonacci (%d) = %d\n", 5, fibonacci ( 5 ) );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method09 ( )



/**
 contarMinuscula - Contador de letras minusculas.
 @return quantidade de letras minusculas
 @param x - cadeia de caracteres a ser avaliada
*/
int contarMinuscula ( chars cadeia, int x )
{
  //definir dados
  int resposta = 0;

  //testar se contador valido
  if ( 0 <= x && x < strlen ( cadeia ) )
  {
    //testar se letra minuscula
    if ( cadeia [x] >= 'a' &&
         cadeia [x] <= 'z')
    {
      //fazer de novo com valor absoluto
      resposta = 1;
    }// end if
    resposta = resposta + contarMinuscula ( cadeia, x + 1 );
  }// end if

  //retornar resposta
  return ( resposta );
}// end contarMinuscuals ( )


/**
Method10.
*/
void method10 ( )
{
  // identificar
  IO_id ( "EXEMPLO0611 - Method10 - v0.0" );

  //contar minuscula em cadeias de caracteres
  IO_printf( "Minusculas (\"abc\", 0) = %d\n", contarMinuscula ( "abc", 0 ) );
  IO_printf( "Minusculas (\"aBc\", 0) = %d\n", contarMinuscula ( "aBc", 0 ) );
  IO_printf( "Minusculas (\"AbC\", 0) = %d\n", contarMinuscula ( "AbC", 0 ) );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method10 ( )


/**
Method11a - contador para numeros impares
*/
void method11a ( int x )
{
  // repetir enquanto valor maior que zero
  if ( x > 0 )
  {
    // passar para o proximo
    method11a ( x - 1 );

    // mostrar valor
    IO_printf ( "%s%d\n", "Valor = ", (x-2) );
  }
  else
  {
    // mostrar o ultimo
    IO_printf ( "%s\n", "Valor = 7" );
  }// end if else
}// end method11a


/**
Method11b - contador para numeros impares
*/
void method11b ( int x )
{
  // dados
  int x = 0;  //numero base
  int y;      //quantidade de repeticoes

  // repetir enquanto valor maior que zero
  for ( x=7; x<y; x+2)
  {
    // 
  }
}// end method11b


/**
Method11.
*/
void method11 ( )
{
  // identificar
  IO_id ( "EXEMPLO0603 - Method11" );

  // executar o metodo auxiliar
  method11b ( 7 );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
}// end method11



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
    IO_id ( "EXEMPLO0611 - Programa - v0.0" );

    // ler do teclado
    IO_println ( "Opcoes" );
    IO_println ( " 0 - parar" );
    IO_println ( " 1 - mostrar certa quantidade de valores" );
    IO_println ( " 2 - mostrar certa quantidade de valores recursivamente" );
    IO_println ( " 3 - mostrar certa quantidade de valores recursivamente" );
    IO_println ( " 4 - mostrar certa quantidade de valores recursivamente" );
    IO_println ( " 5 - mostrar certa quantidade de valores recursivamente" );
    IO_println ( " 6 - somar   certa quantidade de fracoes recursivamente" );
    IO_println ( " 7 - somar   certa quantidade de fracoes recursivamente" );
    IO_println ( " 8 - contar  digitos recursivamente" );
    IO_println ( " 9 - gerador de numero de Fibonacci" );
    IO_println ( "10 - contador  de letras minusculas" );
    IO_println ( "11 - mostrar imparares recursivamente" );
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

        case 11: method11 ( );
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
 1.0       0.1       (OK)          identificacao do progama || method01
 2.0       0.1       (OK)          method02a   || method02
 3.0       0.1       (OK)          method03a   || method03
 4.0       0.1       (OK)          method04a   || method04
 5.0       0.1       (OK)          method05a   || method05
 6.0       0.1       (OK)          method06a   || method06
 7.0       0.1       (OK)          method07a/b || method07
 8.0       0.1       (OK)          method08a   || method08
 9.0       0.1       (OK)          method09a   || method09
 10.0      0.1       (OK)          method10a   || method10
*/