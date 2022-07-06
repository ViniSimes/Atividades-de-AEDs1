/**
 * @file ExercicosRE              (C)
 * @author Vinicius_Simoes  (1387659)
 * @version 0.1
 * @date 12-05-2022
 */

//dependentes
#include "io.h"

/**
exercicio00 - nao faz nada.
*/
void exercicio00 ( )
{
// nao faz nada
} // end exercicio00 ( )



/**
:MEIO: FEITO:
exercicio01 - Ler inteiros e dizer quais são seus divisores
*/

void exercicio01 ( )
{
  //definir dados
  int n = 0;     //valor lido
  int x = 0;     //quantidade de valores
  int y = 0;     //controle

  //pedir quantas repeticoes
  IO_print ( "\nDigite quantos valores deseja inserir: " );

  //armazenar o valor informado
  IO_scanf ( "%d", &x );

  //pedir quantas repeticoes
  IO_print ( "\nDigite o valor que deseja: " );

  //armazenar o valor informado
  IO_scanf ( "%d", &n );

  do
  {
    //calcular  metade
    n = n / 2;

    //mostrar resultado
    IO_printf ( "\nDivisor: %d", n );

    //diminuir x
    x = x - 1;
  } while ( x > 0 );
  
  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );  
} // end exercicio02 ( )



/**
:FEITO:
exercicio02 - Ler valores e mostrar se cada um e' primo ou nao
*/
void exercicio02 ( )
{
  //definir dados
  int n      = 0;     //valor lido
  int i      = 0;     //controle
  int result = 0;     //

  int x      = 0;     //quantidade de valores

  //pedir valor
  IO_printf ( "\nDigite um valor: " );
    //armazenar o valor dado
    IO_scanf ( "%d", &n );  

  //testar se é primo
  for ( i=2; i<=n/2; i++ )
  {
    if ( n%i == 0 )
    {
      result++;
      break;
    }
  }
    if ( result == 0 )
    {
      IO_printf ( "\nO valor %d e' primo", n );
    }
    else
    {
      IO_printf ( "\nO valor %d nao e' primo", n );
    }
  

  //espacamento
  IO_printf ( "\n\n" );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end exercicio02 ( )



/**
exercicio03.
*/
void exercicio03 ( )
{
  // definir dado
  chars caractere = IO_new_chars ( STR_SIZE );
  int tamanho   = 0;
  int posicao   = 0;
  char simbolo  = '_';

  // ler do teclado
  caractere = IO_readstring ( "Entrar com um caractere: " );

  // determinar a quantidade de simbolos na caractere
  tamanho = strlen ( caractere );

  // repetir para a quantidade de vezes informada
  for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
  {
    // isolar um simbolo por vez
    simbolo = caractere [ posicao ];

    if ( simbolo == '&', '|', '!')
    {
      IO_printf ( "\nO caractere %c e' um operador logico", simbolo );
      posicao = posicao + 1;
    }
    else 
    {
      IO_printf ( "\n %c nao e' operador logico", simbolo);
      posicao = posicao + 1;
    }

    if ( simbolo == '+', '-', '*', '/', '%' )
    {
      IO_printf ( "\nO caractere %c e' aritimetico", simbolo );
      posicao = posicao + 1;
    }
    else 
    {
      IO_printf ( "\n %c nao e' aritimetico", simbolo);
      posicao = posicao + 1;
    }

    if ( simbolo == '>', '<', '=' )
    {
      IO_printf ( "\nO caractere %c e' relacional", simbolo );
      posicao = posicao + 1;
    }
    else 
    {
      IO_printf ( "\n %c nao e' reçacional", simbolo);
      posicao = posicao + 1;
    }
  }

  printf ( "\n\n" );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end exercicio03 ( )



/**
exercicio04.
*/
void exercicio04 ( )
{
  // definir dado
  chars caractere = IO_new_chars ( STR_SIZE );
  int tamanho   = 0;
  int posicao   = 0;
  char simbolo  = '_';
  bool result = false;

  // ler do teclado
  caractere = IO_readstring ( "Entrar com um caractere: " );

  // determinar a quantidade de simbolos na caractere
  tamanho = strlen ( caractere );

  // repetir para a quantidade de vezes informada
  for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
  {
    // isolar um simbolo por vez
    simbolo = caractere [ posicao ];

    if ( 'a' <= simbolo && simbolo <= 'z' )
    {
      result = true;
      IO_printf ( "\nO caractere %c e' minusculo", simbolo );
      posicao++;
    }
    

    if ( 'A' <= simbolo && simbolo <= 'Z' )
    {
      result = true;
      IO_printf ( "\nO caractere %c e' minusculo", simbolo );
      posicao++;
    }

    if ( '0' <= simbolo && simbolo <= '9' )
    {
      result = true;
      IO_printf ( "\nO caractere %c e' minusculo", simbolo );
      posicao++;
    }
  }
    

  printf ( "\n\n" );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end exercicio04 ( )



/**
exercicio05 - Calcular media no intervalo definido e mostrar a maior delas
*/
void exercicio05 ( )
{
  //definir dados
  float valor1, valor2, valor3;
  float media1, media21, media22, media23, media3;
  bool result = false;

  //pedir e armazernar valor1
  IO_printf ( "\nEntrar com valores menores que -23.75: " );
  IO_scanf  ( "%lf", &valor1 );

  //pedir e armazernar valor2
  IO_printf ( "\nEntrar com valores entre -23.75 e 65.25: " );
  IO_scanf  ( "%lf", &valor2 );

  //pedir e armazernar valor3
  IO_printf ( "\nEntrar com valores maiores que 65.25: " );
  IO_scanf  ( "%lf", &valor3 );

  //calcular
  media1  = valor1 + (-23.75) / 2;
  media21 = valor2 + (-23.75) / 2;
  media22 = valor2 +   65.25  / 2;
  media23 = media21 + media22 / 2;
  media3  = valor3 +   65.25  / 2;

  //mostrar o maior
  if ( media1 < media23 < media3 )
  {
    result = true;
    IO_printf ( "\nMedia 1 e' a maior" );
  }
  //
  if ( media1 < media3 < media23 )
  {
    result = true;
    IO_printf ( "\nMedia 1 e' a maior" );
  }


  if ( media23 < media1 < media3 )
  {
    result = true;
    IO_printf ( "\nMedia 2 e' a maior" );
  }
  //
  if ( media23 < media3 < media1 )
  {
    result = true;
    IO_printf ( "\nMedia 2 e' a maior" );
  }


  if ( media3 < media1 < media23 )
  {
    result = true;
    IO_printf ( "\nMedia 3 e' a maior" );
  }
  //
  if ( media3 < media23 < media1 )
  {
    result = true;
    IO_printf ( "\nMedia 3 e' a maior" );
  }

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end exercicio05 ( )



/**
exercicio06 - Mostrar os cubos inversos dos impares no intervalo de a:b
*/
void exercicio06 ( )
{
  //definir dados
  int x = 0;
  int y = 0;
  int c = 0; //controle
  int intervalo;
  int i;

  //pedir e armazenar valores
  IO_printf ( "\nEntre com um valor: " );
  IO_scanf  ( "%d", &x );

  IO_printf ( "\nEntre com outro valor: " );
  IO_scanf  ( "%d", &y );

  //definir intervalo entre x e y
  for ( intervalo>x; intervalo<y; intervalo++ ) 
  {
    //inverso
    i = intervalo * 1 / pow( x, 3);
    IO_printf ( "%d \n", i );
  }// end for

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end exercicio06 ( )



/**
exercicio07 - Calcular porcentagem dos valores de fora e de dentro de um intervalo
*/
void exercicio07 ( )
{
  // definir dados
  double a = 0.0;
  double b = 0.0;
  double intervalo = 0.0;
  int c = 0; //controle

  //pedir e armazenar valores
  IO_printf ( "\nEntre com um valor: " );
  IO_scanf  ( "%lf", &a );

  IO_printf ( "\nEntre com outro valor: " );
  IO_scanf  ( "%lf", &b );

  //criar intervalo
  intervalo = a + b;

  //repeticao
  for ( c=intervalo; !c<=0; c++)
  {
    //
  }
  
  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end exercicio07 ( )



/**
exercicio08 - Mostrar ordem de tres valores fornecidos
*/
void exercicio08 ( )
{
  //definir dados
  double valor1 = 0.0;
  double valor2 = 0.0;
  double valor3 = 0.0;
  bool result = false;

  //pedir e armazenar valores
  IO_printf ( "\nEntre com um valor: " );
  IO_scanf  ( "%lf", &valor1 );

  IO_printf ( "\nEntre com outro valor: " );
  IO_scanf  ( "%lf", &valor2 );

  IO_printf ( "\nEntre com mais um outro valor: " );
  IO_scanf  ( "%lf", &valor3 );

  if ( valor1 < valor2 < valor3 )
  {
    result = true;
    IO_printf ( "\n%lf e' o maior, segui pelo %lf e por ultimo %lf", valor1, valor2, valor3 );
  }
  //
  if ( valor1 < valor3 < valor2 )
  {
    result = true;
    IO_printf ( "\n%lf e' o maior, segui pelo %lf e por ultimo %lf", valor1, valor3, valor2 );
  }

  if ( valor2 < valor1 < valor3 )
  {
    result = true;
    IO_printf ( "\n%lf e' o maior, segui pelo %lf e por ultimo %lf", valor2, valor1, valor3 );
  }
  //
  if ( valor2 < valor3 < valor1 )
  {
    result = true;
    IO_printf ( "\n%lf e' o maior, segui pelo %lf e por ultimo %lf", valor2, valor3, valor1 );
  }

  if ( valor3 < valor1 < valor2 )
  {
    result = true;
    IO_printf ( "\n%lf e' o maior, segui pelo %lf e por ultimo %lf", valor3, valor1, valor2 );
  }
  //
  if ( valor3 < valor2 < valor1 )
  {
    result = true;
    IO_printf ( "\n%lf e' o maior, segui pelo %lf e por ultimo %lf", valor3, valor2, valor1 );
  }

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end exercicio08 ( )



/**
exercicio09 - Mostrar ordem de tres digitos fornecidos
*/
void exercicio09 ( )
{
  //definir dados
  char valor1 = '0';
  char valor2 = '0';
  char valor3 = '0';
  bool result = false;

  //pedir e armazenar valores
  IO_printf ( "\nEntre com um valor: " );
  IO_scanf  ( "%s", &valor1 );

  IO_printf ( "\nEntre com outro valor: " );
  IO_scanf  ( "%s", &valor2 );

  IO_printf ( "\nEntre com mais um outro valor: " );
  IO_scanf  ( "%s", &valor3 );

  if ( valor1 < valor2 < valor3 )
  {
    result = true;
    IO_printf ( "\n%s e' o maior, segui pelo %s e por ultimo %s", valor1, valor2, valor3 );
  }
  //
  if ( valor1 < valor3 < valor2 )
  {
    result = true;
    IO_printf ( "\n%s e' o maior, segui pelo %s e por ultimo %s", valor1, valor3, valor2 );
  }

  if ( valor2 < valor1 < valor3 )
  {
    result = true;
    IO_printf ( "\n%s e' o maior, segui pelo %s e por ultimo %s", valor2, valor1, valor3 );
  }
  //
  if ( valor2 < valor3 < valor1 )
  {
    result = true;
    IO_printf ( "\n%s e' o maior, segui pelo %s e por ultimo %s", valor2, valor3, valor1 );
  }

  if ( valor3 < valor1 < valor2 )
  {
    result = true;
    IO_printf ( "\n%s e' o maior, segui pelo %s e por ultimo %s", valor3, valor1, valor2 );
  }
  //
  if ( valor3 < valor2 < valor1 )
  {
    result = true;
    IO_printf ( "\n%s e' o maior, segui pelo %s e por ultimo %s", valor3, valor2, valor1 );
  }

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end exercicio09 ( )



/**
exercicio10 - Mostrar se e' ordem alfabetica, crescente, drecrescente ou nenhuma dessas
*/
void exercicio10 ( )
{
  // identificar
  IO_id ( " exercicio10 - v0.0" );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end exercicio10 ( )



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
    IO_id ( " Programa - v0.0" );

    // ler do teclado
    IO_println ( "Opcoes" );
    IO_println ( " 0 - parar" );
    IO_println ( " 1 - Ler inteiros e dizer quais sao seus divisores"    );
    IO_println ( " 2 - Ler valores e mostrar se cada um e' primo ou nao" );
    IO_println ( " 3 - Ler e determinar a qual intervalo pertence (simbolos)" );
    IO_println ( " 4 - Ler e determinar a qual intervalo pertence (Letras/Digitos)" );
    IO_println ( " 5 - Calcular media no intervalo definido e mostrar a maior delas" );
    IO_println ( " 6 - Mostrar os cubos inversos dos impares no intervalo de a:b" );
    IO_println ( " 7 - Calcular porcentagem dos valores de fora e de dentro de um intervalo" );
    IO_println ( " 8 - Mostrar ordem de tres valores fornecidos" );
    IO_println ( " 9 - Mostrar ordem de tres digitos fornecidos" );
    IO_println ( "10 - " );
    IO_println ( "" );
    x = IO_readint ( "Entrar com uma opcao: " );
    
    // testar valor
      switch ( x )
      {
        case 0: exercicio00 ( );
        break;

        case 1: exercicio01 ( );
        break;

        case 2: exercicio02 ( );
        break;

        case 3: exercicio03 ( );
        break;

        case 4: exercicio04 ( );
        break;

        case 5: exercicio05 ( );
        break;

        case 6: exercicio06 ( );
        break;

        case 7: exercicio07 ( );
        break;

        case 8: exercicio08 ( );
        break;

        case 9: exercicio09 ( );
        break;

        case 10: exercicio10 ( );
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
Comentarios:
Não estou conseguindo fazer ele verificar se o IF é real ou não para mostrar no print, estão saindo todos eles juntos.
*/