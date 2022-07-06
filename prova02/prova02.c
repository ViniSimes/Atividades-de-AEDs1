/**
 * @file prova02.c                     (C)    
 * @author Vinicius Simoes Viana (1387659)
 * @version 0.1
 */

//-------------------------------------- dependencias
#include <stdio.h>
#include <stdlib.h>
#include "io.h"

//--------------------------------- Questoes fechadas

// parar
void method00 ( void )
{
    // fazer nada
}// end method00

// Questao 01 - [A] - 0 1 2 3 4 6 8 3 5 7 9
void method01 ( void )
{
    // definir dados
    int array [] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int x=0, y=0, z=0;

    // acoes
    for ( x=3; x<7; x++ )
    {
        z = array [x];
        for ( y=x; y<10; y++ )
        { array [y] = array [y+1]; }
        array [y-1] = z;
    }// end for

    for ( x=0; x<10; x++ )
    { printf ( "%d ", array[x] ); }

    printf ( "\n" );

    // encerrar
    IO_pause ( "Apertar ENTER para continuar" );

}// end method01




// Questao 02 - [C] - { {8,1,2},{1,4,5},{2,5,8} }
void method02 ( )
{
    // definir dados
    int array [][3] = { {0,1,2},{3,4,5},{6,7,8} };
    int x=0, y=0, z=0;

    // acoes
    for ( x=0; x<3; x++ )
    {
        z = array [2-x][2-x];
        for ( y=2; y>=0; y=y-1 )
        { array [y][x] = array [x][y];
          if ( x == y ){ array [x][y] = z; } }    }
    
    for ( x=0; x<3; x++ )
    { for ( y=0; y<3; y++ )
      { printf ( "%d\t", array [x][y] ); }
      printf ("\n"); }

    // encerrar
    IO_pause ( "Apertar ENTER para continuar" );

}// end method02



// Questao 03 - [A] - "bcd"
void method03 ( )
{   
    char* substring ( int start, int end, char *source )
    {
        char *destiny = NULL;
        int x =0, y=0;
        destiny = malloc ( strlen(source)*sizeof(char) );
        destiny[y] = '\0';

        for ( x=start; x<end; x++ )
        { 
            destiny[y] = source[x];
            y++;
        }        
        return ( destiny ); 
    }
    
    char *minha_string = "abcde";
    printf ("%s = substring", substring( 1, 4, minha_string ));

}// end method03




// Questao 04 - [A] - f04 (3, "01|O")
void method04 ( )
{
    int f04 ( int x, char *s )
    {
        int result = 0;
        if ( 0<= x && x<strlen(s) )
        { 
            result = (s[x]=='0' || s[x]=='1') && f04(x+1, s);
        }
        else
        {
            result = 1;
        }

        printf ( "%d\n\n", result );
        
        return ( result );
    }

    f04(3, "01|O" );
    
}// end method04




// Questao 05 - [B] - f05 ("aroma", "amora")
void method05 ( )
{
    int f05 ( char *s1, char *s2 )
    {
        int result = 0;
        int x=0, y=0, z=0;
        for ( x=0; x<strlen(s1); x++ )
        { 
            for ( y=1; y<strlen(s2); y++ )
            {
                if ( s1[x] == s2[y] )
                { 
                    z++; y = strlen(s2);
                }
            }
        }
        result = ( z==strlen(s1) );
        return ( result );
    }

    f05 ("aroma", "aroma" );

}// end method05




// Questao 06 - [C] - 4E2C0A
struct s_ac { int a; char c; };
void method06 ( )
{
    // definir dados
    struct s_ac s [5];
    int x=0, y=0;

    // acoes
    for ( x=0; x<5; x++ )
    {
        s[x].a=x; s[x].c=(char)('A'+x);
    }
    while ( x>0 )
    {
        y = 5;
        while ( y>0 )
        {
            if ( x-1==s[y-1].a )
            {
                printf ( "%d%c", s[y-1].a, s[y-1].c );
                y = 0;
            }
            y = y - 2;
        }
        x = x - 1;
    }
    

    // encerrar
    IO_pause ( "Apertar ENTER para continuar" );

}// end method06




// Questao 07 - []
void method07 ( )
{
    int f07 ( char *s )
    {
        // definir dados
        int achar = 0;
        int x=0, y=0, z=0;

        for ( x=0; x<strlen(s); x++ )
        {   if ( s[x] == '-' )
            {   if ( 0<=x && x<strlen(s) &&
                ((s[x-1] == s[x+1] && s[x+1]=='r') ||
                (s[x-1]=='i' )) )
                achar = 1;
            }
        }
    }
    return ( achar );
    
    f07( "super-homem" );

}// end method07




// Questao 08 - []
void method08 ( )
{
    // definir dados

    // encerrar
    IO_pause ( "Apertar ENTER para continuar" );

}// end method08




// Questao 09 - []
void method09 ( )
{
    // definir dados

    // encerrar
    IO_pause ( "Apertar ENTER para continuar" );

}// end method09




// Questao 10 - []
void method10 ( )
{
    // definir dados

    // encerrar
    IO_pause ( "Apertar ENTER para continuar" );

}// end method10



//---------------------------------- Funcao principal

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
    IO_id ( "\nProva02\n" );

    // ler do teclado
    IO_println ( "Opcoes" );
    IO_println ( " 0 - parar" );
    IO_println ( " 1 - Questao01" );
    IO_println ( " 2 - Questao02" );
    IO_println ( " 3 - Questao03" );
    IO_println ( " 4 - Questao04" );
    IO_println ( " 5 - Questao05" );
    IO_println ( " 6 - Questao06" );
    IO_println ( " 7 - Questao07" );
    IO_println ( " 8 - Questao08" );
    IO_println ( " 9 - Questao09" );
    IO_println ( "10 - Questao10" );
    IO_println ( "" );
    x = IO_readint ( "Entrar com uma opcao: " );
    
    // testar valor
      switch ( x )
      {
        case 0:  method00();  break;

        case 1:  method01();  break;

        case 2:  method02();  break;

        case 3:  method03();  break;

        case 4:  method04();  break;

        case 5:  method05();  break;

        case 6:  method06();  break;

        case 7:  method07();  break;

        case 8:  method08();  break;

        case 9:  method09();  break;

        case 10: method10();  break;

        default:
        IO_pause ( "ERRO: Valor invalido." );
      } // end switch
  }
  while ( x != 0 );

  // encerrar
  IO_pause ( "Apertar ENTER para terminar" );
  return ( 0 );

}// end main( )

