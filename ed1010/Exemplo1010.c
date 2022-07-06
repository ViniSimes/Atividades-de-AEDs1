/**
 * @file Exemplo1010             (C)
 * @author Vinicius_Simoes (1387659)
 * @version 1.0
 * @date 03-06-2022
 */

//dependencias
#include "io.h"


//---------- definicoes globais

/**
 Definicao de tipo de arranjo com 
 inteiros baseado em estruturas
*/
typedef
 struct s_int_Array
 {
   int  length; 
   ints data; 
   int  ix;
 }
 int_Array;



/**
 Definicao de referencias para arranjos
 com inteiros baseados em estrutura
*/
typedef int_Array* ref_int_Array;


/**
new_int_Array - Reservar espaco para arranjo com inteiros
 @return referencia para arranjo com inteiros
 @param n - quantidade de datos
*/
ref_int_Array new_int_Array ( int n )
{
  // reserva de espaco
  ref_int_Array tmpArray = (ref_int_Array) malloc (sizeof(int_Array));
  
  // estabelecer valores padroes
  if ( tmpArray == NULL )
  {
    IO_printf ( "\nERRO: Falta espaco.\n" );
  }
  else
  {
    tmpArray->length =    0;
    tmpArray->data   = NULL;
    tmpArray->ix     =   -1;

    if ( n>0 )
    {
      // guardar a quantidade de dados
      tmpArray->length = n;

      // reservar espaco para os dados
      tmpArray->data = (ints) malloc (n * sizeof(int));

      // definir indicador do primeiro elemento
      tmpArray->ix = 0;
    } // end if
  } // end if

  // retornar referencia para espaco reservado
  return ( tmpArray );

} // end new_int_Array ( )


/**
 free_int_Array - Dispersar espacopara arranjo com inteiros
 @param tmpArray - referencia para grupo de valores inteiros
*/
void free_int_Array ( ref_int_Array tmpArray )
{
  // testar se ha' dados, antes de reciclar o espaco
  if ( tmpArray != NULL )
  {
    if ( tmpArray -> data != NULL )
    {
      free ( tmpArray -> data );
    }//end if
    free ( tmpArray );
  }// end if

}// end free_int_Array ( )



/**
 Definicao de tipo arranjo biddimensional com inteiros baseado em estrutura
*/
typedef
 struct s_int_Matrix
 {
   int rows;
   int columns;
   ints* data;
   int ix, iy;
 }
 int_Matrix;


/**
 Definicao de referencia para arranjo biddimensional com inteiros baseado em estrutura
*/
typedef int_Matrix* ref_int_Matrix;


/**
 new_int_Matrix* ref_int_Matrix - Reservar espaco para arranjo bidimensional com inteiros
 @return referencia para arranjo com inteiros
 @param rows    - quantidade de dados
 @param columns - quantidade de dados
*/
ref_int_Matrix new_int_Matrix ( int rows, int columns )
{
  // reserva de espaco
  ref_int_Matrix tmpMatrix = ( ref_int_Matrix ) malloc ( sizeof(int_Matrix));

  // estabelecer valores padroes
  if ( tmpMatrix != NULL )
  {
    tmpMatrix -> rows    = 0;
    tmpMatrix -> columns = 0;
    tmpMatrix -> data    = NULL;

    //reservar espaco
    if ( rows>0 && columns>0 )
    {
      tmpMatrix -> rows    = rows;
      tmpMatrix -> columns = columns;
      tmpMatrix -> data    = malloc ( rows * sizeof(ints));
      if ( tmpMatrix->data )
      {
        for ( tmpMatrix -> ix = 0;
              tmpMatrix -> ix < tmpMatrix -> rows;
              tmpMatrix -> ix = tmpMatrix -> ix+1 )
        {
          tmpMatrix -> data [ tmpMatrix -> ix ] = (ints) malloc (columns * sizeof(int));
        }// end for        
      }// end if
    }// end if
    tmpMatrix -> ix = 0;
    tmpMatrix -> iy = 0;
  }// end if

  // retornar dados
  return ( tmpMatrix );
}// end new_int_Matrix ( )


/**
 free_int_Matrix  - Dispensar espaco para arranjo com inteiros
 @param tmpMatrix - referencia para grupo de valores inteiros
*/
void free_int_Matrix ( ref_int_Matrix matrix )
{
  // testar se ha' dados
  if ( matrix != NULL )
  {
    if ( matrix -> data != NULL )
    {
      for ( matrix -> ix = 0;
            matrix -> ix < matrix -> rows;
            matrix -> ix = matrix -> ix+1)
      {
        free ( matrix -> data [ matrix -> ix ]);
      }// end for
      free ( matrix -> data );
    }// end if
    free ( matrix );
  }// end if
}// end free_int_Matrix ( )


//-----------



/**
Method00 - nao faz nada.
*/
void method00 ( )
{
// nao faz nada
} // end method00 ( )


/**
 printIntArray - Mostrar arranjo com valores inteiros
 @param array  - grupo de valores inteiors
*/
void printIntArray ( int_Array array )
{
  // mostrar valores no arranjo
  if ( array.data )
  {
    for ( array.ix=0; array.ix<array.length; array.ix++ )
    {
      // mostrar valor
      printf ( "%2d: %d\n", array.ix, array.data [ array.ix ] );
    }// end for
  }// end if
}// end printIntArray ( )


/**
Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
  // definir dado
  int_Array array;

  // montar arranjo em estrutura
  array. length = 5;
  array. data = (ints) malloc (array.length * sizeof(int));

  // testar a existência de dados
  if ( array.data )
  {
    array. data [ 0 ] = 1;
    array. data [ 1 ] = 2;
    array. data [ 2 ] = 3;
    array. data [ 3 ] = 4;
    array. data [ 4 ] = 5;
  } // end if

  // identificar
  IO_id ( "EXEMPLO1010 - Method01" );

  // executar o metodo auxiliar
  printIntArray ( array );

  // reciclar o espaco
  if ( array.data )
  {
    free ( array.data );
  } // end if

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );

} // end method01 ( )



/**
 IO_readintArray - Ler arranjo com valores inteiros
 @return arranjo com valores
*/
int_Array IO_readintArray ( )
{
  // definir dados locais
  chars text = IO_new_chars ( STR_SIZE );
  static int_Array array;

  // ler quantidade de dados
  do
  {
    array.length = IO_readint ( "\nlength = " );
  }
  while ( array.length <= 0 );

  // reservar espaco para armazenar
  array.data = IO_new_ints ( array.length );

  // testar se ha' espaco
  if ( array.data == NULL )
  {
    array.length = 0; //nao ha' espaco
  }
  else
  {
    // ler e guardar valores em arranjo
    for ( array.ix=0; array.ix<array.length; array.ix++ )
    {
      // ler valor
      strcpy ( text, STR_EMPTY );
      array.data [ array.ix ]
      = IO_readint ( IO_concat (
                     IO_concat ( text, IO_toString_d ( array.ix )), ": "));
    }// end for
  }// end if else

  //retornar arranjo
  return ( array );

}// end IO_readintArray ( )


/**
Method02.
*/
void method02 ( )
{
  // definir dados
  int_Array array;

  // identificar
  IO_id ( "EXEMPLO1010 - Method02" );

  // ler dados
  array = IO_readintArray ( );

  // testar a existencia de dados
  if ( array.data )
  {
    // mostrar dados
    IO_printf ( "\n" );
    printIntArray ( array );

    // reciclar o espaco
    free ( array.data );
  }// end if

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );

} // end method02 ( )




/**
 fprintIntArray  - Gravar arranjo com valor interos.
 @param fileName - nome do arquivo
 @param array    - grupo de valores inteiros
*/
void fprintIntArray ( chars fileName, int_Array array )
{
  // definir dados locais
  FILE* arquivo = fopen ( fileName, "wt" );

  // gravar quantidade de dados
  fprintf ( arquivo, "%d\n", array.length );

  // gravar valores no arquivo, se existirem
  if ( array.data )
  {
    for ( array.ix=0; array.ix<array.length; array.ix++ )
    {
      // gravar valor
      fprintf ( arquivo, "%d\n", array.data [array.ix] );
    }// end for
  }// end if

  // fechar arquivo
  fclose ( arquivo );

}// end fprintIntArray ( )


/**
Method03.
*/
void method03 ( )
{
  // definir dados
  int_Array array;

  // identificar
  IO_id ( "EXEMPLO1010 - Method03" );

  // ler dados
  array = IO_readintArray ( );

  // testar a existencia de dados
  if ( array.data )
  {
    // mostrar e gravar dados
    IO_printf ( "\n" );
    printIntArray ( array );
    fprintIntArray ( "ARRAY1.TXT", array );

    // reciclar o espaco
    free ( array.data );
  }// end if

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );

} // end method03 ( )



/**
 freadArraySize   - Ler tamanho do arranjo com valores inteiros
 @return quantidade de valores lidos
 @param fileName  - nome do arquivo
 @param array     - grupo de valores inteiros
*/
int_Array fIO_readintArray ( chars fileName )
{
  // definir dados
  int x = 0;
  int y = 0;
  FILE* arquivo = fopen ( fileName, "rt" );
  static int_Array array;

  // testar a existencia
  if ( arquivo )
  {
    // ler a quantidade de dados
    fscanf ( arquivo, "%d", &array.length );

    // testar se ha' dados
    if ( array.length <= 0 )
    {
      IO_printf ( "\nERRO: Valor invalido.\n" );
      array.length = 0;
    }
    else
    {
      // reservar espaco
      array.data = IO_new_ints ( array.length );

      // testar a existencia
      if ( array.data )
      {
        // ler e guardar valores em arranjo
        array.ix = 0;
        while ( !feof ( arquivo) &&
                array.ix < array.length )
        {
          // ler valor
          fscanf ( arquivo, "%d", &(array.data [array.ix] ) );

          // passar ao proximo
          array.ix = array.ix + 1;
        }// end while
      }// end if
    }// end if else
  }// end if

  // retornar dados
  return ( array );
}// end fIO_readintArray ( )


/**
Method04.
*/
void method04 ( )
{
  // definr dados
  int_Array array; 
  
  // identificar
  IO_id ( "EXEMPLO1010 - Method04" );

  // ler dados
  array = fIO_readintArray ( "ARRAY1.TXT" );

  // testar a existencia de dados
  if ( array.data )
  {
    // mostrar dados
    IO_printf ( "\n" );
    printIntArray ( array );

    // reciclar o espaco
    free ( array.data );
  }// end if

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method04 ( )




/**
 copyIntArray - Copiar arranjocom valores inteiros
 @return referencia para copia do arranjo
 @param fileName - nome do arquivo
 @param array - grupo de valores inteiros
*/
ref_int_Array copyIntArray ( int_Array array )
{
  // definir dados
  int x = 0;
  int y = 0;
  ref_int_Array copy;

  if ( array.length <= 0 )
  {
    IO_printf ( "\nERRO: Valor invalido.\n" );
    array.length = 0;
  }
  else
  {
    // reservar area
    copy = new_int_Array ( array.length );

    // testar se ha' descritor
    if ( copy )
    {
      copy -> length = array.length;
      copy -> data   = IO_new_ints ( copy -> length );

      //testar se ha' espaco e dados
      if ( copy -> data == NULL || array.data == NULL )
      {
        printf ( "\nERRO: Falta espaco ou dados." );
      }
      else
      {
        //ler e copiar valores
        for ( array.ix=0; array.ix<array.length; array.ix++ )
        {
          //copiar valor
          copy -> data [ array.ix ] = array.data [ array.ix ];
        }// end for
      }// end if else
    }// end if
  }// end if else

  //retornar dados lidos
  return ( copy );

}// end copyIntArray ( )


/**
Method05 - Copiar arranjocom valores inteiros
*/
void method05 ( )
{
  // definir dados
  int_Array     array;     // arranjo sem tamanho definido
  ref_int_Array other;     // referencia para arranjo sem tamanho definido

  // identificar
  IO_id ( "EXEMPLO1010 - Method05" );

  // ler dados
  array = fIO_readintArray ( "ARRAY1.TXT" );

  // copiar dados
  other = copyIntArray ( array );

  // testar a existencia de dados
  if ( array.data )
  {
    // mostrar dados
    IO_printf     ( "\nOriginal\n" );
    printIntArray ( array );

    //mostrar dados
    IO_printf     ( "\nCopia\n" );
    printIntArray ( *other );

    //reciclar os espacos
    free ( array.data );
    free ( other -> data );
    free ( other );
  }// end if

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );

} // end method05 ( )


/**
 printIntMatrix - Mostrar matrix com valores inteiros
 @param array   - grupo de valores inteiros
*/
void printIntMatrix ( ref_int_Matrix matrix )
{
  //testar a existencia
  if ( matrix != NULL && matrix -> data != NULL )
  {
    // mostrar valores na matriz
    for ( matrix->ix=0; matrix->ix<matrix->rows; matrix->ix=matrix->ix+1 )
    {
      for ( matrix->iy=0; matrix->iy<matrix->rows; matrix->iy=matrix->iy+1 )
      {
        //mostrar valor
        printf ( "%3d\t", matrix->data [ matrix->ix ][ matrix->iy ]);
      }// end for
      printf ( "\n" );
    }// enf for
  }// end if
}// end printIntArray ( )


/**
Method06 - Mostrar matrix com valores inteiros
*/
void method06 ( )
{
  // definir dado
  ref_int_Matrix matrix = new_int_Matrix ( 3, 3 );

  if ( matrix != NULL && matrix -> data != NULL )
  {
    matrix->data [0][0] = 1;  matrix->data [0][1] = 2;  matrix->data [0][2] = 3;
    matrix->data [1][0] = 4;  matrix->data [1][1] = 5;  matrix->data [1][2] = 6;
    matrix->data [2][0] = 7;  matrix->data [2][1] = 8;  matrix->data [2][2] = 9;
  }// end if

  // identificar
  IO_id ( "EXEMPLO1010 - Method06" );

  // executar o metodo auxiliar
  printIntMatrix ( matrix );

  // reciclar espaco
  free_int_Matrix ( matrix );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );

} // end method06 ( )



/**
 IO_readintMatrix - Ler arranjo bidimensional com valores inteiros
 @return referencia para o grupo de valores inteiros
*/
ref_int_Matrix IO_readintMatrix ( )
{
  // definir dados
  int rows    = 0;
  int columns = 0;
  chars text  = IO_new_chars ( STR_SIZE );

  // ler a quantidade de dados
  do
  { rows = IO_readint ( "\nrows = " ); }
  while ( rows <= 0 );
  do
  { columns = IO_readint ( "\ncolumns = " ); }
  while ( columns <= 0 );

  // reservar espaco para armazenar valores
  ref_int_Matrix matrix = new_int_Matrix ( rows, columns );

  // testar se ha' espaco
  if ( matrix != NULL )
  {
    if ( matrix -> data == NULL )
    {
      // nao ha' espaco
      matrix->rows    = 0;
      matrix->columns = 0;
      matrix->ix      = 0;
      matrix->iy      = 0;
    }
    else
    {
      // ler e guardar valores na matriz
      for ( matrix->ix=0; matrix->ix<matrix->rows; matrix->ix=matrix->ix+1 )
      {
        for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 )
        {
          // ler e guardar valor
          strcpy ( text, STR_EMPTY );
          matrix->data [matrix->ix][matrix->iy]
          = IO_readint ( IO_concat (
                         IO_concat ( IO_concat ( text, IO_toString_d ( matrix->ix)), ", " ),
                         IO_concat ( IO_concat ( text, IO_toString_d ( matrix->iy)), ": " ) ));
        }// end for
        printf ( "\n" );
      }// end for
    }// end if else
  }// end if

  // retornar dados
  return ( matrix );

}// end IO_readintMatrix ( )


/**
Method07 - Ler arranjo bidimensional com valores inteiros
*/
void method07 ( )
{
  // definir dados
  ref_int_Matrix matrix = NULL;

  // identificar
  IO_id ( "EXEMPLO1010 - Method07" );

  // ler dados
  matrix = IO_readintMatrix ( );

  // mostrar dados
  IO_printf ( "\n" );
  printIntMatrix ( matrix );

  // reciclar espaco
  free_int_Matrix ( matrix );
  
  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );

} // end method07 ( )




/**
 fprintIntMatrix - Gravar arranjo bidimensional com valores inteiros
 @param fileName - nome do arquivo
 @param matrix   - grupo de valores inteiros
*/
void fprintIntMatrix ( chars fileName, ref_int_Matrix matrix )
{
  //definir dados
  FILE* arquivo = fopen ( fileName, "wt" );

  // testar se ha' dados
  if ( matrix == NULL )
  {
    printf ( "\nERRO: Nao ha' dados" );
  }
  else
  {
    // gravar quantidade de dados
    fprintf ( arquivo, "%d\n", matrix->rows    );
    fprintf ( arquivo, "%d\n", matrix->columns );

    if ( matrix->data != NULL )
    {
      // gravar valores no arquivo
      for ( matrix->ix=0; matrix->ix<matrix->rows; matrix->ix=matrix->ix+1 )
      {
        for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 )
        {
          // gravar valor
          fprintf ( arquivo, "%d\n", matrix->data [matrix->ix][matrix->iy] ); 
        }// end for
      }// end for
    }// end if

    // fechar arquivo
    fclose ( arquivo );
  }// end if

}// end fprintIntMatrix


/**
Method08 - Gravar arranjo bidimensional com valores inteiros
*/
void method08 ( )
{
  // definir dados
  ref_int_Matrix matrix = NULL;

  // identificar
  IO_id ( "EXEMPLO1010 - Method08" );

  // ler dados
  matrix = IO_readintMatrix ( );

  // gravar dados
  fprintIntMatrix ( "MATRIX1.TXT", matrix );

  // reciclar espaco
  free_int_Matrix ( matrix );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );

} // end method08 ( )




/**
  freadintMatrix - Ler arranjo bidimensional com valores inteiros
  @return referencia para o grupo de valores inteiros
  @param fileName - nome do arquivo
*/
ref_int_Matrix freadintMatrix ( chars fileName )
{
  // definir dados locais
  ref_int_Matrix matrix = NULL;
  int rows = 0;
  int columns = 0;
  FILE* arquivo = fopen ( fileName, "rt" );

  // ler a quantidade de dados
  fscanf ( arquivo, "%d", &rows );
  fscanf ( arquivo, "%d", &columns );
  if ( rows <= 0 || columns <= 0 )
  {
    IO_printf ( "\nERRO: Valor invalido.\n" );
  }
  else
  {
    // reservar espaco para armazenar
    matrix = new_int_Matrix ( rows, columns );

    // testar se ha' espaco
    if ( matrix != NULL && matrix->data == NULL )
    {
      // nao ha' espaco
      matrix->rows = 0;
      matrix->columns = 0;
      matrix->ix = 0;
      matrix->iy = 0;
    }
    else
    {
      // testar a existência
      if ( matrix != NULL )
      {
      // ler e guardar valores na matriz
      matrix->ix = 0;
      while ( ! feof ( arquivo ) && matrix->ix < matrix->rows )
      {
        matrix->iy = 0;
        while ( ! feof ( arquivo ) && matrix->iy < matrix->columns )
        {
          // guardar valor
          fscanf ( arquivo, "%d", &(matrix->data [ matrix->ix ][ matrix->iy ]) );
          
          // passar ao proximo
          matrix->iy = matrix->iy+1;

        } // end repetir

        // passar ao proximo
        matrix->ix = matrix->ix+1;        
      } // end repetir
      matrix->ix = 0;
      matrix->iy = 0;
      } // end se
    } // end se
  } // end se

  // retornar matriz lida
  return ( matrix );

} // end freadintMatrix ( )


/**
Method09.
*/
void method09 ( )
{
  // identificar
  IO_id ( "EXEMPLO1010 - Method09" );

  // ler dados
  ref_int_Matrix matrix = freadintMatrix ( "MATRIX1.TXT" );

  // mostrar dados
  IO_printf ( "\n" );
  printIntMatrix ( matrix );

  // reciclar espaco
  free_int_Matrix ( matrix );
  
  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );

} // end method09 ( )




/**
  copyIntMatrix - Copiar matriz com valores inteiros
  @return referencia para o grupo de valores inteiros
*/
ref_int_Matrix copyIntMatrix ( ref_int_Matrix matrix )
{
  // definir dados locais
  ref_int_Matrix copy = NULL;

  if ( matrix == NULL || matrix->data == NULL )
  {
    IO_printf ( "\nERRO: Faltam dados.\n" );
  }
  else
  {
    if ( matrix->rows <= 0 || matrix->columns <= 0 )
    {
      IO_printf ( "\nERRO: Valor invalido.\n" );
    }
    else
    {
      // reservar espaco
      copy = new_int_Matrix ( matrix->rows, matrix->columns );
      
      // testar se ha' espaco e dados
      if ( copy == NULL || copy->data == NULL )
      {
        printf ( "\nERRO: Falta espaco." );
      }
      else
      {
        // copiar valores
        for ( copy->ix = 0; copy->ix < copy->rows; copy->ix = copy->ix + 1 )
        {
          for ( copy->iy = 0; copy->iy < copy->columns; copy->iy = copy->iy + 1 )
          {
            // copiar valor
            copy->data [ copy->ix ][ copy->iy ]
            = matrix->data [ copy->ix ][ copy->iy ];
          } // end repetir
        } // end repetir
      } // end se
    } // end se
  } // end se

  // retornar copia
  return ( copy );

} // copyIntMatrix ( )


/**
Method10 - Copiar matriz com valores inteiros
*/
void method10 ( )
{
  // definir dados
  ref_int_Matrix matrix = NULL;
  ref_int_Matrix other  = NULL;

  // identificar
  IO_id ( "EXEMPLO1010 - Method10" );

  // ler dados
  matrix = freadintMatrix ( "MATRIX1.TXT" );

  // copiar dados
  other = copyIntMatrix ( matrix );

  // mostrar dados
  IO_printf ( "\nOriginal\n" );
  printIntMatrix ( matrix );

  // mostrar dados
  IO_printf ( "\nCopia\n" );
  printIntMatrix ( other );

  // reciclar espaco
  free_int_Matrix ( matrix );
  free_int_Matrix ( other  );

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
    IO_id ( "EXEMPLO1010 - Programa - v0.0" );

    // ler do teclado
    IO_println ( "Opcoes" );
    IO_println ( " 0 - parar" );
    IO_println ( " 1 - Mostrar certa quantidade de valores" );
    IO_println ( " 2 - Ler arranjo com valores inteiros"    );
    IO_println ( " 3 - Gravar arranjo com valores inteiros" );
    IO_println ( " 4 - Ler tamanho do arranjo com valores inteiros"       );
    IO_println ( " 5 - Copiar arranjocom valores inteiros"  );
    IO_println ( " 6 - Mostrar matrix com valores inteiros" );
    IO_println ( " 7 - Ler arranjo bidimensional com valores inteiros"    );
    IO_println ( " 8 - Gravar arranjo bidimensional com valores inteiros" );
    IO_println ( " 9 - Ler arranjo bidimensional com valores inteiros"    );
    IO_println ( "10 - Copiar matriz com valores inteiros"  );
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
 1.0       0.1       (OK)         typedef struct s_intArray || typedef int_Array* ref_int_Array
                                  new_int_Array             || free_int_Array || printIntArray  ||
                                  method01
 2.0       0.1       (OK)         IO_readintArray           || method02
 3.0       0.1       (OK)         IO_fprintIntArray         || method03                                 
 4.0       0.1       (OK)         fIO_readintArray          || method04
 5.0       0.1       (OK)         copyIntArray              || method05
 6.0       0.1       (OK)         typedef int_Matrix        || ref_intMAtrix  || new_int_Matrix || free_int_Matrix
                                  printIntMatrix            || method06
 7.0       0.1       (OK)         IO_readintMatrix          || method07
 8.0       0.1       (OK)         fprintIntMatrix           || method08
 9.0       0.1       (OK)         freadintMatrix            || method09
 10.0      0.1       (OK)         copyIntMatrix             || method10
*/