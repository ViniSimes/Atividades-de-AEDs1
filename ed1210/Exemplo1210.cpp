/**
 * @file Exemplo1210                (CPP)
 * @author Vinicius Simoes Viana (1387659)
 * @version 1.0
 * @date 11-06-2022
 * @copyright Copyright (c) 2022
 */

// dependencias

#include <iostream>   // std::cin, std::cout, std::endl
#include <limits>     // std::numeric_limits
#include <string>     // para cadeias


//----------------------------------- definicoes globais

void pause ( std::string text )
{
  std::string dummy ;
  std::cin.clear ( );
  std::cout << std::endl << text;
  std::cin.ignore ( );
  std::getline ( std::cin, dummy );
  std::cout << std::endl << std::endl;
}// end pause


//----------------------------------- classes / pacotes

#include "mymatrix.hpp"

using namespace std;


//--------------------------------------------- methods

/**
 Method00 - Nao faz nada
*/
void method00 ( )
{
  //
}// end method00


/**
Method01 - Mostrar certa quantidade de valores.
*/
void method01 ( )
{
   // definir dados
   Matrix <int> int_matrix ( 2, 2, 0 );
   int_matrix.set ( 0, 0, 1 ); int_matrix.set ( 0, 1, 2 );
   int_matrix.set ( 1, 0, 3 ); int_matrix.set ( 1, 1, 4 );

   // identificar
   cout << "\nEXEMPLO1210 - Method01 - v0.0\n" << endl;

   // mostrar dados
   int_matrix.print ( );

   // encerrar
   pause ( "Apertar ENTER para continuar" );

}// end method01 ( )


/**
Method02 - Ler e mostrar valor de matrix
*/
void method02 ( )
{
  // definir dados
  Matrix <int> matrix ( 2, 2, 0 );

  // identificar
  cout << endl << "EXEMPLO1210- Method02" << endl;
  
  // ler dados
  matrix.read ( );

  // mostrar dados
  matrix.print ( );
  
  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method02 ( )



/**
Method03 - Gravar matrix em arquivo
*/
void method03 ( )
{
  // definir dados
  Matrix <int> matrix ( 2, 2, 0 );

  // identificar
  cout << endl << "EXEMPLO1210- Method03" << endl;
  
  // ler dados
  matrix.read ( );

  // mostrar dados
  matrix.print ( );

  // gravar dados
  matrix.fprint ( "MATRIX1.TXT" );

  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method03 ( )



/**
Method04 - Ler arquivo de matrix e mostra-la
*/
void method04 ( )
{
  // definir dados
  Matrix <int> matrix ( 1, 1, 0 );

  // identificar
  cout << endl << "EXEMPLO1210- Method04" << endl;

  // ler dados
  matrix.fread ( "MATRIX1.TXT" );

  // mostrar dados
  matrix.print ( );
  
  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method04 ( )



/**
Method05.
*/
void method05 ( )
{
  // definir dados
  Matrix <int> int_matrix1 ( 1, 1, 0 );
  Matrix <int> int_matrix2 ( 1, 1, 0 );

  // identificar
  cout << endl << "EXEMPLO1210- Method05" << endl;

  // ler dados
  int_matrix1.fread ( "MATRIX1.TXT" );

  // mostrar dados
  cout << "\nOriginal\n" << endl;
  int_matrix1.print ( );

  // copiar dados
  int_matrix2 = int_matrix1;

  //mostrar dados
  cout << "\nCopiar\n" << endl;

  int_matrix2.print ( );
  
  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method05 ( )



/**
Method06.
*/
void method06 ( )
{
  // definir dados
  Matrix <int> int_matrix ( 2, 2, 0 );

  int_matrix.set ( 0, 0, 0 );     int_matrix.set ( 0, 1, 0 );
  int_matrix.set ( 1, 0, 0 );     int_matrix.set ( 1, 1, 0 );

  // identificar
  cout << endl << "EXEMPLO1210- Method06" << endl;

  // mostrar dados
  int_matrix.print ( );

  // testar condicao
  cout << "Zeros = " << int_matrix.isZeros ( ) << endl;

  // ler dados
  int_matrix.fread ( "MATRIX1.TXT" );

  // mostrar dados
  int_matrix.print ( );

  // testar condicao
  cout << "Zeros = " << int_matrix.isZeros ( ) << endl;
  
  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method06 ( )



/**
Method07 - Verificar se matrixes sao diferentes
*/
void method07 ( )
{
  // defirniar dados
  Matrix <int> int_matrix1 ( 1, 1, 0 );
  Matrix <int> int_matrix2 ( 1, 1, 0 );

  // identificar
  cout << endl << "EXEMPLO1210- Method07" << endl;
  
  // ler dados
  int_matrix1.fread ( "MATRIX1.TXT" );

  // mostrar dados
  cout << "\nMatrix_1\n";
  int_matrix1.print ( );

  //copiar dados
  int_matrix2 = int_matrix1;

  // mostrar dados
  cout << "\nMatrix_2\n";
  int_matrix2.print ( );

  //testar condicao
  cout << "Diferentes = " << ( int_matrix1 != int_matrix2 ) << endl;

  // alterar dados
  int_matrix2.set ( 0, 0, (-1) );

  // mostrar dados
  cout << "\nMatrix_1\n";
  int_matrix1.print ( );

  // mostrar dados
  cout << "\nMatrix_2\n";
  int_matrix2.print ( );

  // testar condicao
  cout << "Diferente = " << (int_matrix1 != int_matrix2 ) << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method07 ( )



/**
Method08 - Subtrair dados em matrizes, posição por posição
*/
void method08 ( )
{
  // definir dados
  Matrix <int> int_matrix1 ( 1, 1, 0 );
  Matrix <int> int_matrix2 ( 1, 1, 0 );
  Matrix <int> int_matrix3 ( 1, 1, 0 );
  
  // identificar
  cout << endl << "EXEMPLO1210- Method08" << endl;
  
  // ler dados
  int_matrix1.fread ( "MATRIX1.TXT" );

  // mostrar dados
  cout << "\nMatrix_1\n";
  int_matrix1.print ( );

  // copiar dados
  int_matrix2 = int_matrix1;

  // mostrar dados
  cout << "\nMatrix_2\n";
  int_matrix2.print ( );

  // operar dados
  int_matrix3 = int_matrix1 - int_matrix2;

  // mostrar dados
  cout << "\nMatrix_3\n";
  int_matrix3.print ( );

  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method08 ( )



/**
Method09 - Calcular o produto de matrizes
*/
void method09 ( )
{
  // definir dados
  Matrix <int> int_matrix1 ( 2, 2, 0 );

  int_matrix1.set ( 0, 0, 1 );
  int_matrix1.set ( 0, 1, 0 );
  int_matrix1.set ( 1, 0, 0 );
  int_matrix1.set ( 1, 1, 1 );

  Matrix <int> int_matrix2 ( 1, 1, 0 );
  Matrix <int> int_matrix3 ( 1, 1, 0 );

  // identificar
  cout << endl << "EXEMPLO1210- Method09" << endl;
  
  // ler dados
  int_matrix2.fread ( "MATRIX1.TXT" );

  // mostrar dados
  cout << "\nMatrix_1\n";
  int_matrix1.print ( );

  // mostrar dados
  cout << "\nMatrix_2\n";
  int_matrix2.print ( );

  // operar dados
  int_matrix3 = int_matrix1 * int_matrix2;

  // mostrar dados
  cout << "\nMatrix_3\n";
  int_matrix3.print ( );

  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method09 ( )



/**
Method10 - Acessos externos aos valores em matriz
*/
void method10 ( )
{
  // definir dados
  Matrix <int> int_matrix ( 3, 3, 0 );
  int x = 0;
  int y = 0;

  // identificar
  cout << endl << "EXEMPLO1210- Method10" << endl;

  // ler dados
  int_matrix.fread ( "MATRIX1.TXT" );

  // mostrar dados
  cout << "\nMatrix\n";
  int_matrix.print ( );

  // operar dados
  for ( int x=0; x<int_matrix.getRows ( ); x++ )
  {
    for ( int y=0; y<int_matrix.getColumns ( ); y++ )
    {
      int_matrix.set ( x, y, int_matrix.get ( x, y) * (-1) );
    }// end for
  }// end for

  // mostrar dados
  cout << "\nMatrix\n";
  int_matrix.print ( );
  
  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method10 ( )



//-------------------------------------- acao principal

/**
 Funcao principal
 @return codigo de encerramento
*/
int main ( int argc, char** argv )
{
  // definir dado
  int x = 0;

  // repetir ate' desejar para
  do
  {
    // identificar
    cout << "EXEMPLO1202 - Programa - v0.0\n           " << endl;

    // mostrar opcoes
    cout << "Opcoes                                    " << endl;
    cout << "0  - parar                                " << endl;
    cout << "1  - Mostrar matrix                       " << endl;
    cout << "2  - Ler e mostrar matrix inteira         " << endl;
    cout << "3  - Gravar matrix em arquivo             " << endl;
    cout << "4  - Ler arquivo de matrix e mostra-la    " << endl;
    cout << "5  - Copiar arquivo                       " << endl;
    cout << "6  - Verificar se so' ha' zeros na matrix " << endl;
    cout << "7  - Verificar se matrixes sao diferentes " << endl;
    cout << "8  - Subtrair dados em matrizes, posição por posição " << endl;
    cout << "9  - Calcular o produto de matrizes                  " << endl;
    cout << "10 - Acessos externos aos valores em matriz          " << endl;

    // ler do teclado
    cout << endl << "Entrar com uma opcao: ";
    cin >> x;

    // escolher ocao
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
      cout << endl << "ERRO: Valor invalido." << endl;
    }// end switch
  }
  while ( x != 0 );

  // encerrar
  pause ( "Apertar ENTER para terminar" );
  return ( 0 );

}// end main ( )


/*
Teste    Versao    Resultado      Atualizacao
 1.0       0.1       (OK)        mymatrix.hpp (lib)     || method01
 2.0       0.1       (OK)        read                   || method02
 3.0       0.1       (OK)        fprint                 || method03
 4.0       0.1       (OK)        fread                  || method04
 5.0       0.1       (OK)        operator=              || method05
 6.0       0.1       (OK)        isZeros                || method06
 7.0       0.1       (OK)        operator!=             || method07
 8.0       0.1       (OK)        operator-              || method08
 9.0       0.1       (OK)        operator*              || method09
 10.0      0.1       (OK)        getRows || getColumns  || method10
*/