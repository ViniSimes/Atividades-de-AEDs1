/**
 * @file Questao1
 * @author Vinicius_Simoes (1387659)
 * @version 0.1
 * @date 02/05/2022
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "io.h"

/**
Method00 - encerrar
*/
void method00 ( )
{
 //
} // end method00 ( )


/**
 QUESTAO 1  //RESPOSTA: C
*/
void questao01 ( )
{
   //definir dados
   bool b = false;
   char c = '0';
   double d = 0.0;
   int x = '0';
   b = ( x <= 5 ) && ( d <= 1/2 );
   c = ( char )(((int) '0' + 1 ) - 48 );
   d = 7/8 + ( int ) ( double ) 3/4; 
   x = ( int ) ( M_PI*1.0)/3;

   //mostrar resultados
   printf ( "\n b = %d\n", b);
   printf ( "\n b = %d\n", c);
   printf ( "\n b = %d\n", d);
   printf ( "\n b = %d\n", x);

   //encerrar
   IO_pause ( "\nAperte ENTER para continuar\n" );
}// end Questao01



/**
QUESTAO 2   //RESPOSTA: B
*/
void questao02 ( )
{
   //definir dados
   int x = 0, y = 0, n = 5;
   y = n * (n+1)/2+1;

   //executar
   for ( x = 1; x <= n; x =x + 1 )
   {
      y = y - x;
      
      //mostrar
      printf ( "%d", y ); 
   }

   //encerrar
   IO_pause ( "\nAperte ENTER para continuar\n" );
}// end Questao02


/**
QUESTAO 3   //RESPOSTA: D
*/
void questao03 ( )
{
   //defininr dados
   int x = 0;

   //executar 1
   for ( int x = 1; x <= 5; x = x + 1 )
   {
      //mostrar valor
      printf ( "\nx = %d", 2 * x - 1 );
   }

   //espaco
   printf ( "\n" );

   for ( int x = 1; x <= 5 * 3; x = x + 3)
   {
      printf ( "\nx = %d", x - x/3 );
   }

   printf ( "\n" );

   //encerrar
   IO_pause ( "\nAperte ENTER para continuar\n" );
}// end Questao03


/**
QUESTAO 4   //RESPOSTA: A
*/
void questao04 ( )
{
   //definir dados
   int a = 10, b = 20, c = 30;
   int maior = 0;

   //executar
   if      ( c > b > a || c > a > b ) { maior = c; }

   else if ( b > c > a || b > a > c ) { maior = b; }

   else if ( a > b > c || a > c > b ) { maior = a; }

   //mostrar
   printf ( "\nMaior = %d", maior );

   //espaco
   printf ( "\n" );
   printf ( "\n" );

   //encerrar
   IO_pause ( "\nAperte ENTER para continuar\n" );
}// end Questao04


/**
QUESTAO 5   //RESPOSTA: ERRO
*/
void questao05 ( )
{
   //definir dados
   int x = 0;
   int y = 0;

   //pedir x
   printf ( "\nDigite o valor X: " );
   scanf ( "%d", &x );

   //pedir y
   printf ( "\nDigite o valor Y: " );
   scanf ( "%d", &y );

   //executar
   for ( x = 1; x <= 5; x = x + 1 )
   {
      for ( y = (x+1)/3; y > 0; y = y + 1 )
      {
         printf ( " " );
      }
      for ( y = 1; y <= x/2+1; y = y + 1 )
      {
         printf ( "%d", y);
      }
   }

   //encerrar
   IO_pause ( "\nAperte ENTER para continuar\n" );
}// end Questao05


/**
QUESTAO 6   //RESPOSTA: NÃO ACABEI
*/
void questao06 ( )
{
   //definir dados
   char placa3letras  = '0';
   char placa1digito  = '0';
   char placa1letra   = '0';
   char placa2digitos = '0';
   int y = 0;     //resposta sim
   int n = 0;     //resposta nao

   //pedir placa
   printf ( "\nDigite as tres primeiras letras da placa: \n" );
   //ler placa
   scanf ( "%s", &placa3letras );

   //pedir placa
   printf ( "\nDigite o primeiro digito da placa: \n" );
   //ler placa
   scanf ( "%s", &placa1digito );

   //pedir placa
   printf ( "\nDigite a quarta da placa: \n" );
   //ler placa
   scanf ( "%s", &placa1letra );

   //pedir placa
   printf ( "\nDigite os dois ultimos digitos da placa: \n" );
   //ler placa
   scanf ( "%s", &placa2digitos );


   //mostrar resultado
   printf ( "\nVoce digitou: %s%s%s%s\n", placa3letras, placa1digito, placa1letra, placa2digitos );

   //encerrar
    IO_pause ( "\nAperte ENTER para continuar\n" );  
}// end Questao06


/**
QUESTAO 7   //FEITO: 
Definir uma função para testar se um valor é um num ArmStrong ex: 153 = 1^3 + 5^3 + 3^3
*/
void questao07 ( )
{
   //definir dados
   int x = 0;  //controle
   int superior = 999;
   int inferior = 1;
   bool result = false;

   //pedir numr
   printf ( "\nDigite o numero: " );

   //armezenar numero
   scanf ( "%d", &x );

   //testar numero
   if ( inferior <= x && x <= superior )
   {
      result = true;
      printf ( "\nE' Armstrong!" );
   }
      else
      {
         result = false;
         printf ( "\nValor invalido ou nao e' Armstrong" );
      }// end if else
      
   //encerrar
   IO_pause ( "\nAperte ENTER para continuar\n" );  
}// end Questao07



/**
QUESTAO 8   //NAOSOUBE: 
definir uma funcao para somar as (n) primeiras fracoes da sequencia 1/1+13-1/2+1/5+1/7-1/4+...
*/
void questao08 ( )
{
   //teste
   printf ( "\nQuestao08 ");
   //encerrar
   IO_pause ( "\nAperte ENTER para continuar\n" );  
}// end Questao08


/**
QUESTAO 9   //FEITO:
ler varias placas ate encontrar "0000000" e contar quantas atendem ao padrao Mercosul
*/
void questao09 ( )
{
   //definir dados
   chars linha = IO_new_chars ( STR_SIZE );

   //pedir placa
   printf ( "\nInsira a placa com 7 digitos: " );

   //ler ate' achar 0000000
   IO_println ( "Ler linhas (parar qunado entrar com \"0000000\"):n" );
   do
   {
      //ler do teclado
      strcpy ( linha, IO_readln ( "" ) );
   }
   while ( strcmp ( "0000000", linha ) != 0 );

   //encerrar
   IO_pause ( "\nAperte ENTER para continuar\n" );

}// end Questao09


/**
QUESTAO 10 //FEITO://
*/
void questao10 ( )
{
   //definir dados
   int x = 0;
   int contador = 0;

   printf ( "\nisArmstrong: \n" );

   //contador
   for ( contador = 1; contador <= 999; contador ++ )
   {
      printf ( "%d \n", contador );
   }// end for

   //encerrar
   IO_pause ( "\nAperte ENTER para continuar\n" );  
}// end Questao10


/**
QUESTAO 11   //NAOSOUBE: 
*/
void questao11 ( )
{
   //definir dados


   //teste
   printf ( "\nQuestao11");
   //encerrar
   IO_pause ( "\nAperte ENTER para continuar\n" );  
}// end Questao11


/**
 Principal
*/

int main ( )
{
  // definir dado
  int x = 0;

  // repetir até desejar parar
  do
  {
    // identificar
    IO_id ( "PROVA" );

    // ler do teclado
    IO_println ( "Opcoes" );
    IO_println ( " 0 - parar" );
    IO_println ( " 1 - Questao 01" );
    IO_println ( " 2 - Questao 02" );
    IO_println ( " 3 - Questao 03" );
    IO_println ( " 4 - Questao 04" );
    IO_println ( " 5 - Questao 05" );
    IO_println ( " 6 - Questao 06" );
    IO_println ( " 7 - Questao 07" );
    IO_println ( " 8 - Questao 08" );
    IO_println ( " 9 - Questao 09" );
    IO_println ( "10 - Questao 10" );
    IO_println ( "11 - Questao 11" );
    IO_println ( "" );
    x = IO_readint ( "Entrar com uma opcao: " );
    // testar valor
      switch ( x )
      {
        case 0: method00 ( );
        break;

        case 1: questao01 ( );
        break;

        case 2: questao02 ( );
        break;

        case 3: questao03 ( );
        break;

        case 4: questao04 ( );
        break;

        case 5: questao05 ( );
        break;

        case 6: questao06 ( );
        break;

        case 7: questao07 ( );
        break;

        case 8: questao08 ( );
        break;

        case 9: questao09 ( );
        break;

        case 10: questao10 ( );
        break;

        case 11: questao11 ( );
        break;

        default:
        IO_pause ( "ERRO: Valor invalido." );
      } // end switch
  }
  while ( x != 0 );

  // encerrar
  IO_pause ( "Apertar ENTER para encerrar" );
  return ( 0 );

}// end main( )