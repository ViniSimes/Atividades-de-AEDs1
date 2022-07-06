/**
 * @file Exemplo0210.c
 * @author Vinicius_Simoes (1387659)
 * @version 1.0
 * @date 11/04/2022
 * 
 * @copyright Copyright (c) 2022
 * 
 */

//dependencias
#include "io.h"           //definicoes propias
#include <math.h>


/**
  Method00 - nao faz nada
*/
void method00 ( )
{
   //nao faz nada
}// end method00


/**
  Method01 - mostrar mensagem com texto constante
*/
void method01 ( )
{
   IO_println( "Valor igual a um" );
} // end method01


/**
Method02 - mostrar mensagem com texto constante e valor variavel
  @param x - valor a ser exibido
*/
void method02 ( int x )
{
   IO_println( IO_concat("Valor igual a (", 
                          IO_concat ( IO_toString_d(x), ")\n")));
} // end method02


/**
Method03 - mostrar mensagem com texto constante e valor variavel
  @param text1 - texto a ser exibido
  @param x     - valor a ser exibido
*/
void method03 ( char* text1, int x )
{
   IO_println(IO_concat(
              IO_concat(text1, "("),
              IO_concat( IO_toString_d( x ), ")\n")));
} // end method03



/**
Method04 - testar se valor e' impar
*/
void method04 ( )
{
   //definir dados
   int x      = 0;
   int result = 0;

   //pedir e armazenar valor
   printf ( "\nDigito o valor: " );
   scanf ( "%d", &x );

   //calcular
   result = x % 2;

   //varificar se e' impar
   if ( result == 0 )
   {
      printf ( "\nO numero e' par");
   }
   else
   {
      printf ( "\nO numero e' impar");
   }
   //mostrar resultado
   printf ( "Valor %d", result );

}// end method04

/**
   Funcao principal
   @return     - codigo de encerramento
   @param argc - quantidade de parametros na linha de comandos
   @param argv - arranjo com grupo de parametros na linha de comandos
*/

int main ( )
{
  //definir dado
  int x = 0;      //variavel inicial
  
   //repetir ate desejar parar
   do
   {
      //identificar
      IO_id( "EXEMPLO0210 - Programa - v0.0" );

      //ler teclado
      IO_println ( "Opcoes" );
      IO_println ( " 0 - parar" );
      IO_println ( " 1 - Mostrar mensagem com texto constante"                   );
      IO_println ( " 2 - Mostrar mensagem com texto constante e valor variavel"  );
      IO_println ( " 3 - Mostrar mensagem com texto e valor variavel"            );
      IO_println ( " 4 - Verificar se valor e' impar" );
      IO_println ( " 5 - " );
      IO_println ( " 6 - " );
      IO_println ( " 7 - " );
      IO_println ( " 8 - " );
      IO_println ( " 9 - " );
      IO_println ( "10 - " );
      IO_println ( "" );
      x = IO_readint ( "Entrar com uma opcao: " );

      //testar valor
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
            
            default:
               IO_printf ( "\nERRO: Valor invalido.\n" );
         }// end switch
   }
   while ( x != 0 );

   //encerrar
      IO_pause("Apertar ENTER para terminar");
      return ( 0 );
}//end main

/*
Versao    Teste
_0.1_______0.1_____( OK )  identificacao de programa
_0.2_______0.1_____( OK )  substituicao if por else
_0.3_______0.1_____( OK )  valor maior e valor menor
_0.4_______0.1_____( OK )  valor int para double
_0.5_______0.1_____( OK )  valor double para char
_0.6_______0.1_____( OK )  conjunto de duas funcoes
_0.7_______0.1_____( OK )  !(funcao de letras)
_0.8_______0.1_____( OK )  switch char
_0.9_______0.1_____( OK )  switch inteiros
_1.0_______0.1_____( OK )  methods
*/