/**
 * @file Exemplo1110           (CPP)
 * @author Vinicius Simoes (1387659)
 * @version 1.0
 * @date 11-06-2022
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

#include "myarray.hpp"

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
 Method01 - Mostrar certa quantidade de valores
*/
void method01 ( )
{
  // definir dados
  Array <int> int_array ( 5,0 );

  int_array.set ( 0,1 );
  int_array.set ( 1,2 );
  int_array.set ( 2,3 );
  int_array.set ( 3,4 );
  int_array.set ( 4,5 );

  // identificar
  cout << "\nEXEMPLO1110 - Method01\n" << endl;

  // mostrar dados
  int_array.print ( );

  // reciclar espaco
  int_array.free ( );

  // encerrar
  pause ( "Apertar ENTER para continuar" );
  
}// end method01



/**
Method02 - Ler e mostrar certa quantidade de valores
*/
void method02 ( )
{
  // definir dados
  Array <int> int_array ( 5,0 );

  // identificar
  cout << endl << "EXEMPLO1110 - Method02" << endl;
  
  // ler dados
  int_array.read ( );

  // mostrar dados
  int_array.print( );

  // reciclar espaco
  int_array.free ( );

  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method02 ( )



/**
Method03 - Gravar resultado em arquivo
*/
void method03 ( )
{
  // definir dados
  Array <int> int_array (5,0);

  // identificar
  cout << endl << "EXEMPLO1110 - Method03" << endl;
  
  // ler dados
  int_array.read ( );

  // mostrar dados
  int_array.fprint ( "INT_ARRAY1.TXT" );

  // reciclar espaco
  int_array.free ( );

  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method03 ( )



/**
Method04 - Ler arquivo e guardar dados em arranjo
*/
void method04 ( )
{
  // definir dados
  Array <int> int_array ( 5,0 );

  // identificar
  cout << endl << "EXEMPLO1110 - Method04" << endl;

  // ler dados
  int_array.fread ( "INT_ARRAY1.TXT" );

  // mostrar dados
  int_array.print ( );

  // reciclar espaco
  int_array.free ( );
  
  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method04 ( )



/**
Method05 - Objeto com dados copiados de um arranjo
*/
void method05 ( )
{
  // definir dados
  int other [] = { 1, 2, 3, 4, 5 };
  Array <int> int_array ( 5, other );

  // identificar
  cout << endl << "EXEMPLO1110 - Method05" << endl;

  // mostrar dados
  cout << "\nCopia\n" << endl;
  int_array.print ( );

  // reciclar espaco
  int_array.free ( );
  
  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method05 ( )



/**
Method06 - Criar um objeto a partir de outro existente
*/
void method06 ( )
{
  // definir dados
  Array <int> int_array1 ( 1, 0 );

  // identificar
  cout << endl << "EXEMPLO1110 - Method06" << endl;

  // ler dados
  int_array1.fread ( "INT_ARRAY1.TXT" );

  // mostrar dados
  cout << "\nOriginal\n" << endl;
  int_array1.print ( );

  // criar copia
  Array <int> int_array2 ( int_array1 );

  // mostrar dados
  cout << "\nCopia\n" << endl;
  int_array2.print ( );

  // reciclar espaco
  int_array1.free ( );
  int_array2.free ( );
  
  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method06 ( )



/**
Method07 - Operador para copiar arranjo para outro
*/
void method07 ( )
{
  // definir dados
  Array <int> int_array1 ( 1, 0 );
  Array <int> int_array2 ( 1, 0 );

  // identificar
  cout << endl << "EXEMPLO1110 - Method07" << endl;
  
  // ler dados
  int_array1.fread ( "INT_ARRAY1.TXT" );

  // mostrar dados
  cout << "\nOriginal\n" << endl;
  int_array1.print ( );

  // copiar dados
  int_array2 = int_array1;

  // mostrar dados
  cout << "\nCopia\n" << endl;
  int_array2.print ( );

  // reciclar espaco
  int_array1.free ( );
  int_array2.free ( );

  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method07 ( )



/**
Method08 - Testar a igualdade de dois arranjos
*/
void method08 ( )
{
  // definir dados
  int other [] = { 1, 2, 3 };
  Array <int> int_array1 ( 3, other );
  Array <int> int_array2 ( 3, other );
  int x;

  // identificar
  cout << endl << "EXEMPLO1110 - Method08" << endl;

  // mostrar dados
  cout << endl;
  cout << "Array_1";
  int_array1.print ( );

  // mostrar dados
  cout << "Array_2";
  int_array2.print ( );

  // mostrar comparacao
  cout << "Igualdade = " << (int_array1==int_array2) << endl;

  // alterar dado
  int_array2.set ( 0, (-1) );

  // mostrar dados
  cout << endl;
  cout << "Array_1" << endl;
  int_array1.print ( );

  // mostrar dados
  cout << "Array_2" << endl;
  int_array2.print ( );

  // mostrar comparacao
  cout << "Igualdade = " << (int_array1==int_array2) << endl;

  // reciclar espaco
  int_array1.free ( );
  int_array2.free ( );
  
  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method08 ( )



/**
Method09 - Somar valores em dois arranjos
*/
void method09 ( )
{
  // definir dados
  Array <int> int_array1 ( 1, 0 );
  Array <int> int_array2 ( 1, 0 );
  Array <int> int_array3 ( 1, 0 );

  // identificar
  cout << endl << "EXEMPLO1110 - Method09" << endl;
  
  // ler dados
  int_array1.fread ( "INT_ARRAY1.TXT" );

  // copiar dados
  int_array2 = int_array1;

  // somar dados
  int_array3 = int_array2 + int_array1;

  // mostrar dados
  cout << endl;
  cout << "Original" << endl;
  int_array1.print ( );
  
  // mostrar dados
  cout << "Copia" << endl;
  int_array2.print ( );
  
  // mostrar dados
  cout << "Soma" << endl;
  int_array3.print ( );
  
  // reciclar espaco
  int_array1.free ( );
  int_array2.free ( );
  int_array3.free ( );

  // encerrar
  pause ( "Apertar ENTER para continuar" );

} // end method09 ( )



/**
Method10 - Acessos externos aos valores no arranjo
*/
void method10 ( )
{
  // definir dados
  int other [ ] = { 1, 2, 3, 4, 5 };
  Array <int> int_array ( 5, other );
  int x;

  // identificar
  cout << endl << "EXEMPLO1110 - Method10" << endl;

  // mostrar dados
  cout << "\nAcesso externo" << endl;
  for ( x=0; x<int_array.getLength( ); x=x+1 )
  {
    cout << endl << setw( 3 ) << x << " : " << int_array [ x ];
  }// fim repetir

  cout << endl << "\nFora dos limites:";
  cout << endl << "[-1]: " << int_array.get(-1) << endl;
  cout << endl << "["      << int_array.getLength( ) << "]: "
                           << int_array [ int_array.getLength( ) ] << endl;
  
  // reciclar espaco
  int_array.free ( );
  
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
    cout << "EXEMPLO1110 - Programa - v0.0\n    " << endl;

    // mostrar opcoes
    cout << "Opcoes                                           " << endl;
    cout << "0  - parar                                       " << endl;
    cout << "1  - mostrar dados inteiros em arranjo           " << endl;
    cout << "2  - Ler e mostrar certa quantidade de valores   " << endl;
    cout << "3  - Gravar resultado em arquivo                 " << endl;
    cout << "4  - Ler arquivo e guardar dados em arranjo      " << endl;
    cout << "5  - Objeto com dados copiados de um arranjo     " << endl;
    cout << "6  - Criar um objeto a partir de outro existente " << endl;
    cout << "7  - Operador para copiar arranjo para outro     " << endl;
    cout << "8  - Testar a igualdade de dois arranjos         " << endl;
    cout << "9  - Somar valores em dois arranjos              " << endl;
    cout << "10 - Acessos externos aos valores no arranjo     " << endl;

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





/**----------------------------------------- comentarios
Versao       Resultado           Funcoes 
  1.0          (OK)              biblioteca     ||  base programa     ||
  2.0          (OK)              read           ||  method02          ||
  3.0          (OK)              fprint         ||  method03          ||          
  4.0          (OK)              fread          ||  method04          ||
  5.0          (OK)              constructor    ||  constructor( )    ||  method05
  6.0          (OK)              constructor( ) ||  method06          ||
  7.0          (OK)              operator=      ||  method07          ||
  8.0          (OK)              operator==     ||  method08          ||
  9.0          (OK)              operator+      ||  method09          ||
  10.0         (OK)              getLength      ||  operator( )       ||  method10
*/ 

