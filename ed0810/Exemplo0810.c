/**
 * @file Exemplo0810             (C)
 * @author Vinicius_Simoes (1387659)
 * @version 10.0
 * @date 10-05-2022
 */

//dependentes
#include "io.h"


//----------

/**
printIntArray - Mostrar arranjo com valores inteiros.
 @param n     - quantidade de valores
 @param array - grupo de valores inteiros
*/
void printIntArray ( int n, int array [] )
{
  // definir dado local
  int x = 0;

  // mostrar valores no arranjo
  for ( x=0; x<n; x=x+1 )
  {
    // mostrar valor
    IO_printf ( "%2d: %d\n", x, array [ x ] );
  } // end repetir

} // end printIntArray ( )


/**
printIntArray - Mostrar arranjo com valores inteiros.
 @param n     - quantidade de valores
 @param array - grupo de valores inteiros
*/
void readIntArray ( int n, int array [] )
{
  //definir dados locais
  int x = 0;
  int y = 0;
  chars text = IO_new_chars ( STR_SIZE );

  //ler e guardar valores em arranjo
  for ( x=0; x<n; x=x+1 )
  {
    //ler valor
    strcpy ( text, STR_EMPTY );
    y = IO_readint ( IO_concat ( 
                     IO_concat (text, IO_toString_d (x)), ":" ));
    
    //guardar valor
    array [x] = y;
  }// end for

}// end readIntArray ( )


/**
fprintIntArray - Grava arranjo com valores inteiros
 @param fileName - nome do arquivo
 @param n        - quantidade de valores
 @param array    - grupo de valores inteiros
*/
void fprintIntArray ( chars fileName, int n, int array [] )
{
  //definir dados locais
  FILE* arquivo = fopen ( fileName, "wt" );
  int x = 0;

  //gravar quantidade de dados
  IO_fprintf ( arquivo, "%d\n", n );

  //gravar valores no arranjo
  for ( x=0; x<n; x=x+1 )
  {
    //gravar valor
    IO_fprintf ( arquivo, "%d\n", array [x] );
  }// end for

  //fechar arquivo
  fclose ( arquivo );

}// end fprintIntArray ( )


/**
freadIntArraySize - Ler tamanho do arranjo com valores inteiros
 @param fileName - nome do arquivo
 @return         - quantidade de valores lidos
*/
int freadArraySize ( chars fileName )
{
  //definir dados locais
  int n = 0;
  FILE* arquivo = fopen ( fileName, "rt" );

  //ler a quantidade de dados
  IO_fscanf ( arquivo, "%d", &n );

  if ( n <= 0 )
  {
    IO_println ( "ERRO: Valor invalido" );
    n = 0;
  }// end if

  //retornar dado lido
  return ( n );

}// end freadArraySize


/**
freadIntArray - Ler arranjo com valores inteiros
 @param fileName - nome do arquivo
 @param n        - quantidade de valores
 @param array    - grupo de valores inteiros
*/
void freadIntArray ( chars fileName, int n, int array [] )
{
  //definir dados
  int x = 0;
  int y = 0;
  FILE* arquivo = fopen ( fileName, "rt" );

  //ler quantidade de dados
  IO_fscanf ( arquivo, "%d", &x );

  if ( n<= 0 || n>x )
  {
    IO_println ( "ERRO: Valor invalido" );
  }                                   
    else
    {
        //ler e guardar valores em arrajos
        x = 0;
        while ( !feof ( arquivo ) && x<n )
        {
            //ler valor
            IO_fscanf ( arquivo, "%d", &y );

            //guardar valor
            array [x] = y;

            //passar ao proximo
            x = x + 1;
        }// end while

    }//end if else

}// end freadIntArray ( )


/**
fcopyIntArray - Copiar arranjo com valores inteiros
 @param n     - nome do arquivo
 @param copy  - quantidade de valores
 @param array - grupo de valores inteiros
*/
void copyIntArray ( int n, int copy [], int array [] )
{
  //definir dados
  int x = 0;
  int y = 0;

  if ( n <= 0 )
  {
    IO_println ( "ERRO: Valor invalido" );
    n = 0;
  }
  else
   {
      //copiar valores em arranjo
      for ( x=0; x<n; x=x+1 )
      {
          //copiar valor
          copy [x] = array [x];
      }// end for
  }// end if else

}// end copyIntArray ( )


/**
 sumIntArray  - Somar valores em arranjo com inteiros
 @return      - soma dos valores
 @param n     - nome do arquivo
 @param array - grupo de valores inteiros
*/
int sumIntArray ( int n, int array [] )
{
  //definir dados
  int soma = 0;
  int x    = 0;

  //mostrar valores no arranjo
  for ( x=0; x<n; x=x+1 )
  {
    //somar valor
    soma  = soma + array [x];
  }// end for

  //retornar resposta
  return ( soma );

}// end sumIntArray ( )


/**
 isAllZeros    - Testar valores inteiros em arranjo
 @return      - true, se todos os dados forem iguais a zero
                false, caso contrario
 @param n     - quantidade de valores
 @param array - grupo de valores inteiros
*/
bool isAllZeros ( int n, int array [] )
{
  //definir dados
  bool result = true;
  int x       = 0;

  //mostrar valores no arranjo
  x = 0;
  while ( x<n && result )
  {
    //testar valor
    result = result && ( array [x] == 0 );

    //passar ao proximo
    x = x + 1;
  }// end while

  //retornar resposta
  return ( result );

}// end isAllZeros ( )


/**
 addIntArray   - Testar valores inteiros em arranjo
 @return       - ararnjo com a soma resultante
 @param n      - quantidade de valores
 @param k      - constante para multiplicaro segundo arranjo
 @param array1 - grupo de valores inteiros (1)
 @param array2 - grupo de valores inteiros (2)
 @param array3 - soma de grupo de valores inteiros
*/
void addIntArray ( int n, int array3 [],
                   int array1 [], int k, int array2 [] )
{
  //definir dados locais
  int x =0;

  //mostrar valores no arranjo
  for ( x=0; x<n; x=x+1 )
  {
    //somar valor
    array3 [x] = array1 [x] + k * array2 [x];
  }//end for

}// addIntArray ( )


/**
 isEqual   - Testar arranjos com inteiros sao iguais
 @return       - true, se todos os dados forem iguais;
                false, caso contrario
 @param n      - quantidade de valores
 @param array1 - grupo de valores inteiros (1)
 @param array2 - grupo de valores inteiros (2)
*/
bool isEqual ( int n, int array1 [], int array2 [] )
{
  //definir dados
  bool result = true;
  int x       = 0;

  //mostrar valores no arranjo
  x = 0;
  while ( x<n && result )
  {
    //testar valor
    result = result && ( array1 [x] == array2 [x] );

    //passar ao proximo
    x = x + 1;
  }// end while

  //retornar resposta
  return ( result );
  
}// end isEqual


/**
 searchArray   - Procurar valor em arranjo com inteiros
 @return       - true, se encontrar;
                false, caso contrario
 @param value  - valor a ser procurado
 @param n      - quantidade de valores
 @param array  - grupo de valores inteiros
*/
bool searchArray ( int value, int n, int array [] )
{
  //definir dados
  bool result = false;
  int x       = 0;

  //mostrar valores no arranjo
  x = 0;
  while ( x<n && ! result )
  {
    //testar valor
    result = ( value == array [x] );

    //passar ao proximo
    x = x + 1;
  }// end while

  //retornar resposta
  return ( result );
  
}// end searchArray ( )



//-----------


/**
Method00 - nao faz nada.
*/
void method00 ( )
{
// nao faz nada
} // end method00 ( )



/**
Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
  // definir dado
  int array [ ] = { 1, 2, 3, 4, 5 };

  // identificar
  IO_id ( "\n\nEXEMPLO0810 - Method01" );

  // executar o metodo auxiliar
  printIntArray ( 5, array );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar\n" );

} // fim method01 ( )



/**
Method02 - Ler arranjo com valores inteiros
*/
void method02 ( )
{
  //definir dados
  int n = 5;      //qunatidade de valores
  int array [n];

  //identificar
  IO_id ( "\n\nEXEMPLO0810 - Method02" );

  //ler dados
  readIntArray ( n, array );

  //mostrar dados
  IO_printf     ( "\n" );
  printIntArray ( n, array );

  //encerrar
  IO_pause ( "Aperte ENTER para continuar\n" );
} // end method02 ( )



/**
Method03 - Grava arranjo com valores inteiros
*/
void method03 ( )
{
  //definir dados
  int n =     5;
  int array [n];
  
  // identificar
  IO_id ( "EXEMPLO0810 - Method03" );

  //ler dados
  readIntArray ( n, array );

  //mostrar dados
  IO_printf ( "\n" );
  fprintIntArray ( "ARRAY1.TXT", n, array );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );

} // end method03 ( )



/**
Method04 - Ler arranjo com valores inteiros
*/
void method04 ( )
{
  //definir dados
  int n = 0;

  // identificar
  IO_id ( "\n\nEXEMPLO0810 - Method04" );

  //ler dados
  n = freadArraySize ( "ARRAY1.TXT" );

  if ( n <= 0 )
  {
    IO_print ( "\nERRO>: Valor invalido\n" );
  }
    else
    {
        //definir armazenar
        int array [n];

        //ler dador
        freadIntArray ( "ARRAY1.TXT", n, array );

        //mostrar dados
        IO_printf ( "\n" );
        printIntArray ( n, array );
    }// end if else

  //encerrar
  IO_pause ( "Aperte ENTER para continuar\n" );

} // end method04 ( )



/**
Method05 - Copiar arranjo com valores inteiros
*/
void method05 ( )
{
  //definir dados
  int n = 0;

  // identificar
  IO_id ( "EXEMPLO0810 - Method05" );

  //ler qunatidade de dados
  n = freadArraySize ( "ARRAY1.TXT" );
  if ( n <= 0 )
  {
    IO_printf ( "\nERRO: Valor invalido" );
  }
  else
  {
    //definir armazenamento
    int array [n];
    int other [n];

    //ler dados
    freadIntArray ( "ARRAY1.TXT", n, array );

    //copiar dados
    copyIntArray ( n, other, array );

    //mostrar dados
    IO_printf ( "\nOriginal\n" );
    printIntArray ( n, array );
    //motrar dados  
    IO_printf ( "\nCopia\n" );
    printIntArray ( n, other );
  }// end if else

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )



/**
Method06 - Somar valores em arranjo com inteiros
*/
void method06 ( )
{
  //definir dados
  int n = 0;

  // identificar
  IO_id ( "EXEMPLO0810 - Method06" );

  //ler a quantidade de dados
  n = freadArraySize ( "ARRAY1.TXT" );

  if ( n <= 0 )
  {
    IO_printf ( "\nERRO: Valor invalido\n" );
  }
  else
  {
    //defenir armazerna
    int array [n];

    //ler dados
    freadIntArray ( "ARRAY1.TXT", n, array );

    //mostrar a soma dos valores no arranjo
    IO_printf ( "\nSoma = %d\n", sumIntArray ( n, array ) );
  }// end if

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
  
} // end method06 ( )



/**
Method07 - Testar valores inteiros em arranjo
*/
void method07 ( )
{
  //definir dados
  int n = 5;
  int array1 [] = { 0,0,0,0,0 };
  int array2 [] = { 1,2,3,4,5 };
  int array3 [] = { 1,2,0,4,5 };

  // identificar
  IO_id ( "EXEMPLO0810 - Method07" );

  //testar dados
  IO_println    ( "\nArray1" );
  printIntArray ( n, array1 );
  IO_printf ( "isAllZeros (array1) = %d", isAllZeros ( n, array1 ) );

  IO_println    ( "\nArray2" );
  printIntArray ( n, array2 );
  IO_printf ( "isAllZeros (array2) = %d", isAllZeros ( n, array2 ) );

  IO_println    ( "\nArray3" );
  printIntArray ( n, array3 );
  IO_printf ( "isAllZeros (array3) = %d", isAllZeros ( n, array3 ) );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )



/**
Method08 - Somar arranjos com inteiros
*/
void method08 ( )
{
  //definir dados
  int n = 0;

  // identificar
  IO_id ( "EXEMPLO0810 - Method08" );

  //ler a quantidade de dados
  n = freadArraySize ( "ARRAY1.TXT" );

  if ( n <= 0 )
  {
    IO_printf ( "\nERRO: Valor invalido.\n" );
  }
  else
  {
    //definir armazenamento
    int array [n];
    int other [n];
    int sum   [n];

    //ler dados
    freadIntArray ( "ARRAY1.TXT", n, array );

    //copiar dados
    copyIntArray ( n, other, array );

    //mostrar dados
    IO_printf ( "\nOriginal\n" );
    printIntArray ( n, array );
    //
    IO_printf ( "\nCopia\n" );
    printIntArray ( n, other );

    //operar soma de arranjos
    addIntArray ( n, sum, array, (-2), other );

    //mostrar resultados
    IO_printf   ( "\nSoma\n" );
    printIntArray ( n, sum );
  }// end if else

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method08 ( )



/**
Method09 - Testar arranjos com inteiros sao iguais
*/
void method09 ( )
{
  //definir dados
  int n = 0;

  // identificar
  IO_id ( "EXEMPLO0810 - Method09" );

  //ler a quantidade de dados
  n = freadArraySize ( "ARRAY1.TXT" );

  if ( n <= 0 )
  {
    IO_printf ( "\nERRO: Valor invalido.\n" );
  }
  else
  {
    //definir aramazenamento
    int array [n];
    int other [n];

    //ler dados
    freadIntArray ( "ARRAY1.TXT", n, array );

    //copiar dados
    copyIntArray ( n, other, array );

     //mostrar dados
    IO_printf ( "\nOriginal\n" );
    printIntArray ( n, array );
    //motrar dados  
    IO_printf ( "\nCopia\n" );
    printIntArray ( n, other );

    //mostrar resultado da comparacao
    IO_printf ( "\nIguais = %d\n", isEqual ( n, array, other ) );

    //modificar um valor
    other  [0] = (-1) * other [0];

    //motrar dados  
    IO_printf ( "\nCopia alterada\n" );
    printIntArray ( n, other );

    //mostrar resultado da comparacao
    IO_printf ( "\nIguais = %d\n", isEqual ( n, array, other ) );
  }// end if else
  
  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )



/**
Method10 - Procurar valor em arranjo com inteiros
*/
void method10 ( )
{
  //definir dados
  int n     = 0;
  int value = 0;

  // identificar
  IO_id ( "EXEMPLO0810 - Method10" );

  //ler a quantidade de dados
  n = freadArraySize ( "ARRAY1.TXT" );

  if ( n <= 0 )
  {
    IO_printf ( "\nERRO: Valor invalido.\n" );
  }
  else
  {
    //definir armazenamento
    int array [n];

    //ler dados
    freadIntArray ( "ARRAY1.TXT", n, array );

    //mostrar dados
    IO_printf ( "\nOriginal\n" );
    printIntArray ( n, array );

    //mostrar resultados de procura
    value = array [0]; 
    IO_printf ( "\nProcurar por (%d) = %d\n",
                value, searchArray ( value, n, array ) );

    value = array [n / 2]; 
    IO_printf ( "\nProcurar por (%d) = %d\n",
                value, searchArray ( value, n, array ) );
    
    value = array [n - 1]; 
    IO_printf ( "\nProcurar por (%d) = %d\n",
    value, searchArray ( value, n, array ) );
    
    value = (-1); 
    IO_printf ( "\nProcurar por (%d) = %d\n",
                value, searchArray ( value, n, array ) );
  }// end if else

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
    IO_id ( "EXEMPLO0810 - Programa - v0.0" );

    // ler do teclado
    IO_println ( "Opcoes" );
    IO_println ( " 0 - parar" );
    IO_println ( " 1 - Mostrar certa quantidade de valores"     );
    IO_println ( " 2 - Ler arranjo com valores inteiros"        );
    IO_println ( " 3 - Grava arranjo com valores inteiros"      );
    IO_println ( " 4 - Ler arranjo com valores inteiros"        );
    IO_println ( " 5 - Copiar arranjo com valores inteiros"     );
    IO_println ( " 6 - Somar valores em arranjo com inteiros"   );
    IO_println ( " 7 - Testar valores inteiros em arranjo"      );
    IO_println ( " 8 - Somar arranjos com inteiros"             );
    IO_println ( " 9 - Testar arranjos com inteiros sao iguais" );
    IO_println ( "10 - Procurar valor em arranjo com inteiros"  );
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
                                   printIntArray  || Method01      ||
 2.0       0.1       (OK)          readIntArray   || Method02      ||
 3.0       0.1       (OK)          fprintIntArray || Method03      ||
 4.0       0.1       (OK)          freadArraySize || freadIntArray || Method04
 5.0       0.1       (OK)          fcopyIntArray  || Method05      ||
 6.0       0.1       (OK)          sumIntArray    || Method06      ||
 7.0       0.1       (OK)          isAllZeros     || Method07      ||
 8.0       0.1       (OK)          addIntArray    || Method08      ||
 9.0       0.1       (OK)          isEqual        || Method09
 10.0      0.1       (OK)          searchArray    || Method10      ||
*/