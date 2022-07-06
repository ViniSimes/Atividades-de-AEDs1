/**
 * @file recup02.c               (C)
 * @author Vinícius Simões (1387659)
 * @version 0.1
 * @date 14-06-2022
 */

//------------------------------- dependencias

#include "array.h"
#include "matrix.h"

//------------------------------------ methods

/**
  Questao 01 - determinar se os valores
no arranjo salvos em "DADOS1.TXT" estão em 
ordem decrescente se não estiverem, colocá-los 
em ordem decrescente e salvar"DECRESCENTE.TXT"
*/
void method01 ( )
{
  // definir dados
  int arranjo [10];

  // acoes
  lerArranjo(arranjo, 10, "DADOS1.TXT");
  if(!decrescente(arranjo, 10))
  {
      ordenar(arranjo, 10);
  }

  // gravar arranjo
  gravarArranjo(arranjo, 10, "DECRESCENTE.TXT");

  // retornar
  return (arranjo);
}// end method01



/**
  Questao 02 - receber o arranjo como parâmetro
e inverter a ordem de seus elementos ler do arquivo
DECRESCENTE.TXT; 
gravar em "INVERTIDOS.TXT" e neste
por a quantidade de dados elementos na primeira linha;
*/
void method02 ( )
{
    //
}// end method02



/**
 Questão 03 - receber um arranjo e um valor inteiro como
parâmetros, e achar o menor valor que não ultrapasse o
segundo parâmetro; 
ler "DADOS1.TXT"; 
receber e mostrar o segundo menor valor;
DICA: Usar o primeiro valor do arranjo como referência inicial
*/
void method03 ( )
{
    //
}// end method03



/**
 Questão 04 -
*/
void method04 ( )
{
    //
}// end method04



/**
 Questão 05 -
*/
void method05 ( )
{
    //
}// end method05



/**
 Questão 06 -
*/
void method06 ( )
{
  // definir dados
  int n;

  // abrir arquivo
  FILE* arquivo = fopen("MATRIZ1.TXT", "rt");
  fscanf(arquivo, "%d", &n);
  fclose(arquivo);
  int ** matriz;

  // acoes
  matriz = (int **) malloc (n * sizeof(int *));
  for(int i=0; i<n; i++)
  {
      matriz[i] = (int *) malloc(n * sizeof(int));
  }
  tridiagonal(matriz, n);

  // mostrar resultado
  mostrar(matriz, n);

  // salvar em outro aruivo
  gravar(matriz, n, "MATRIZ2.TXT");

  // retornar
  return 0;
}// end method06



/**
 Questão 07 -
*/
void method07 ( )
{
    //
}// end method07



/**
 Questão 08 -
*/
void method08 ( )
{
    //
}// end method08



/**
 Questão 09 -
*/
void method09 ( )
{
    //
}// end method09



/**
 Questão 10 -
*/
void method10 ( )
{
    //
}// end method10



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
    IO_println ( " 1 - " );
    IO_println ( " 2 - " );
    IO_println ( " 3 - " );
    IO_println ( " 4 - " );
    IO_println ( " 5 - " );
    IO_println ( " 6 - " );
    IO_println ( " 7 - " );
    IO_println ( " 8 - " );
    IO_println ( " 9 - " );
    IO_println ( "10 - " );
    IO_println ( "" );
    x = IO_readint ( "Entrar com uma opcao: " );
    
    // testar valor
      switch ( x )
      {
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