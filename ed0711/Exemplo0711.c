/**
 * @file Exemplo0710             (C)
 * @author Vinicius_Simoes (1387659)
 * @version 1.0
 * @date 06-05-2022
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
writelnts - Gravar em arquivos texto certa qunatidade de valores
  @param fileName - nome do arquivo
  @param x - quantidade de valores
*/
void writelnts ( chars fileName, int x )
{
  //defnir dados
  FILE* arquivo = fopen ( fileName, "wt" );
  int y = 0;

  //repetir para qunatidade de dados
  for ( y = 1; y <= x; y = y + 1 )
  {
    //gravar valor
    fprintf ( arquivo, "%d\n", y );
  }// end for

  //fechar arquivo
  fclose ( arquivo );
  
} // end writelnts ( )



/**
Method01 - Mostrar certa quantidade de valores
*/

void method01 ( )
{
  // identificar
  IO_id ( "EXEMPLO0710 - Method01 - v0.0" );

  //executar o metodo auxiliar
  writelnts ( "DADOS1.TXT", 10 );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );  
} // end method02 ( )



/**
readlnts - Ler de arquivos texto certa qunatidade de valores
  @param fileName - nome do arquivo
  @param x - quantidade de valores
*/
void readlnts ( chars fileName )
{
  //definir dados
  FILE* arquivo = fopen ( fileName, "rt" );
  int x = 0;

  //tentar ler o primeiro
  fscanf ( arquivo, "%d", &x );

  //repetir enquanto houver dados
  while ( !feof ( arquivo ) )
  {
      //mostrar valor
      printf ( "%d\n", x );

      //tentar ler o proximo
      fscanf ( arquivo, "%d", &x );
  }// end while

  //fechar arquivo
  fclose ( arquivo );

}// end readlnts


/**
Method02.
*/
void method02 ( )
{
  // identificar
  IO_id ( "EXEMPLO0710 - Method02 - v0.0" );

  //executar o metodo auxiliar
  readlnts ( "DADOS1.TXT" );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method02 ( )



/**
writeDoubles - Gravar em arquivos texto certa quantidade de valores
  @param fileName - nome do arquivo
  @param x - quantidade de valores
*/
void writeDoubles ( chars fileName, int x )
{
  //definir dados
  FILE* arquivo = fopen ( fileName, "wt" );
  int y = 0;

  //gravar quantidade de valores
  IO_fprintf ( arquivo, "%d\n", x );

  //repetir para a quantidade de dados
  for ( y = 1; y <= x; y = y + 1 )
  {
      //gravar valor
      IO_fprintf ( arquivo, "%lf\n", (0.1*y) );
  }// end for

  //fechar arquivo 
  fclose ( arquivo );

}// end writeDoubles ( )


/**
Method03.
*/
void method03 ( )
{
  // identificar
  IO_id ( "EXEMPLO0710 - Method03 - v0.0" );

  //executar o  metodo auxiliar
  writeDoubles ( "DADOS2.TXT", 10 );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method03 ( )



/**
readlnts - Ler de arquivos texto certa qunatidade de valores
  @param fileName - nome do arquivo
  @param x - quantidade de valores
*/
void readDoubles ( chars fileName )
{
  //definir dados
  FILE* arquivo = fopen ( fileName, "rt" );
  int x    =   0;
  int y    =   1;
  double z = 0.0;

  //tentar ler o primeiro
  fscanf ( arquivo, "%d", &x );

  //repetir enquanto houver dados
  while ( !feof ( arquivo ) && y <= x )
  {
      //tentar ler
      fscanf ( arquivo, "%lf", &z );

      //mostrar valor
      printf ( "%2d: %lf\n", y, z );

      //passar para o proximo
      y = y + 1;
  }// end while

  //fechar arquivo
  fclose ( arquivo );

}// end readDouble ( )


/**
Method04.
*/
void method04 ( )
{
  // identificar
  IO_id ( "EXEMPLO0710 - Method04 - v0.0" );

  //executar o metodo auxiliar
  readDoubles ( "DADOS2.TXT" );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method04 ( )



/**
writelnts - Gravar em arquivos texto certa qunatidade de valores
  @param fileName - nome do arquivo
  @param x - quantidade de valores
*/
void writeText ( chars fileName )
{
  //defenir dados
  FILE* arquivo = fopen  ( fileName, "wt" );
  chars   linha = IO_new_chars ( STR_SIZE ); 

  //repetir ate' desejar parar
  IO_println ( "Gravar linhas (para terminar, entrar com \"PARAR\"):\n" );
  do
  {
      //ler do teclado
      strcpy ( linha, IO_readln ( "" ) );

      //gravar valor
      IO_fprintf ( arquivo, "%s\n", linha );
  }
  while ( strcmp ( "PARAR", linha ) != 0 );

  //fechar arquivo
  fclose ( arquivo );
  
}// end writeText ( )


/**
Method05.
*/
void method05 ( )
{
  // identificar
  IO_id ( "EXEMPLO0710 - Method05 - v0.0" );

  //executar o metodo
  writeText ( "DADOS3.TXT" );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method05 ( )



/**
 readText - Ler de arquivos texto certa qunatidade de valores
 @param x - quantidade de valores
*/
void readText ( chars fileName )
{
  //definir dados
  FILE* arquivo = fopen  ( fileName, "rt" );
  chars linha   = IO_new_chars ( STR_SIZE );

  //tentar ler o primeiro
  strcpy ( linha, IO_freadln ( arquivo ) );

  //repetir enquanto houver dados
  while ( !feof ( arquivo) &&
          strcmp ( "PARAR", linha) != 0 )
  {
    //mostrar valor
    printf ( "%s\n", linha );

    //tentar ler o proximo
    strcpy ( linha, IO_freadln ( arquivo ) );
  }// end while

  //fechar arquivo
  fclose ( arquivo );
  
}// end readText ( )


/**
Method06.
*/
void method06 ( )
{
  // identificar
  IO_id ( "EXEMPLO0710 - Method06 - v0.0" );

  //executar metodo
  readText ( "DADOS3.TXT" );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method06 ( )



/**
copyText - Copiar arquivo texto
  @param fileOut - nome do arquivo de saida         ( destino )
  @param fileln  - quantidade de valores de entrada ( origem  )
*/
void copyText ( chars fileOut, chars fileln )
{
  //definir dados
  FILE* saida   = fopen ( fileOut, "wt" );
  FILE* entrada = fopen ( fileln,  "rt" );
  chars linha   = IO_new_chars ( STR_SIZE );
  int contador = 0;

  //ler origem
  strcpy ( linha, IO_freadln ( entrada ) );

  //repetir
  while ( !feof ( entrada ) )
  {
    //contar linha lida
    contador = contador + 1;

    //gravar no destino, sem ultima linha
    if ( strcmp ( "PARAR", linha ) != 0 )
    {
      IO_fprintln ( saida, linha );
    }// end if

    //ler origem
    strcpy ( linha, IO_freadln ( entrada ) );
  }// end while

  //informar total de linhas copiadas
  IO_printf ( "Lines read = %d\n", contador );

  //fechar arquivos
  fclose (  saida  );
  fclose ( entrada );
}// end copyText ( )

/**
Method07.
*/
void method07 ( )
{
  // identificar
  IO_id ( "EXEMPLO0710 - Method07 - v0.0" );

  //executar o metodo
  copyText ( "DADOS4.TXT", "DADOS3.TXT");
  
  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method07 ( )



/**
appendText - Gravar em arquivo texto certa quantidade de valores
  @param fileName - nome do arquivo
  @param x        - quantidade de valores
*/
void appendText ( chars fileName )
{
  //definir dados
  FILE* arquivo = fopen ( fileName, "at"  );
  chars linha   = IO_new_chars ( STR_SIZE );

  //repetir ate' desejar parar
  IO_println ( "Gravar linhas ( para terminar, entrar com \"PARAR\"):\n" );
  
  do
  {
    //ler do teclado
    strcpy ( linha, IO_readln ( "" ) );

    //gravar valor
    IO_fprintln ( arquivo, linha );
  }
  while (strcmp ( "PARAR", linha ) != 0 );
  
  //fechar arquivo
  fclose ( arquivo );
}// end appendText ( )



/**
Method08.
*/
void method08 ( )
{
  // identificar
  IO_id ( "EXEMPLO0710 - Method08 - v0.0" );

  //executar metodo
  appendText ( "DADOS4.TXT" );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method08 ( )



/**
 readWord - Ler palavras de arquivo
 @param fileName - nome do arquivo
*/
void readWords ( chars fileName )
{
  //definir dados
  FILE* arquivo = fopen ( fileName, "rt" );
  chars linha = IO_new_chars  ( STR_SIZE );

  //tentar ler primeira 
  strcpy ( linha, IO_fread ( arquivo ) );

  //repetir enquanto houver dados
  while ( ! feof ( arquivo ) && strcmp ( "PARAR", linha ) != 0 )
  {
    //mostrar valor
    printf ( "%s\n", linha );

    //tentar ler o proximo
    strcpy ( linha, IO_fread ( arquivo ) );
  }

  //fechar arquivo
  fclose ( arquivo );
}// end readWords ( )


/**
Method09.
*/
void method09 ( )
{
  // identificar
  IO_id ( "EXEMPLO0710 - Method09 - v0.0" );

  //executar metodo
  readWords ( "DADOS4.TXT" );
  
  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method09 ( )



/**
 searchWord - Procurar palavras de arquivo
 @return true, se encontrar; false, caso contrario
 @param fileName - nome do arquivo
 @param word - palavra a procurar
*/
bool searchWord ( chars fileName, chars word )
{
  //definir dados
  FILE* arquivo = fopen  ( fileName, "rt" );
  chars linha   = IO_new_chars ( STR_SIZE );

  //tentar ler a primeira
  strcpy ( linha, IO_fread ( arquivo ) );

  //repetir enquanto houver dados
  while ( ! feof ( arquivo ) && strcmp ( word, linha ) != 0 )
  {
    //tentar ler o proximo
    strcpy ( linha, IO_fread ( arquivo ) );
  }// end while

  //fechar arquivo
  fclose ( arquivo );

  //retornar resultado
  return ( strcmp ( word, linha ) == 0 );
}// end searchWord


/**
Method10.
*/
void method10 ( )
{
  // identificar
  IO_id ( "EXEMPLO0710 - Method10 - v0.0" );

  //procurar palavra
  IO_printf ( "Procurar (\"%s\") = %d\n", "pqr", searchWord ( "DADOS4.TXT", "pqr" ) );
  IO_printf ( "Procurar (\"%s\") = %d\n", "pqs", searchWord ( "DADOS4.TXT", "pqs" ) );

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
    IO_id ( "EXEMPLO0710 - Programa - v0.0" );

    // ler do teclado
    IO_println ( "Opcoes" );
    IO_println ( " 0 - parar" );
    IO_println ( " 1 - Gravar em arquivos texto certa qunatidade de valores" );
    IO_println ( " 2 - Ler    de arquivos texto certa qunatidade de valores" );
    IO_println ( " 3 - Gravar em arquivos texto certa qunatidade de valores" );
    IO_println ( " 4 - Ler    de arquivos texto certa qunatidade de valores" );
    IO_println ( " 5 - Gravar em arquivos texto certa qunatidade de valores" );
    IO_println ( " 6 - Ler    de arquivos texto certa qunatidade de valores" );
    IO_println ( " 7 - Copiar arquivo texto"        );
    IO_println ( " 8 - Gravar em arquivo  texto certa quantidade de valores" );
    IO_println ( " 9 - Ler palavras de arquivo"     );
    IO_println ( "10 - Procurar palavra em arquivo" );
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
 1.0       0.1       (OK)          identificacao do progama || method01
 2.0       0.1       (OK)          methodLer    || method02 
 3.0       0.1       (OK)          methodGravar || method03
 4.0       0.1       (OK)          methodLer    || method04
 5.0       0.1       (OK)          writeText    || method05
 6.0       0.1       (OK)          readText     || method06
 7.0       0.1       (OK)          copyText     || method07
 8.0       0.1       (OK)          appendText   || method08
 9.0       0.1       (OK)          readWords    || method09
 9.0       0.1       (OK)          searchWord   || method10
*/