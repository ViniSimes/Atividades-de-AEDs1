/**
 * @file Exemplo1401                 (CPP)
 * @author Vinicius Simoes Viana (1387659)
 * @version 0.1
 * @date 23-06-2022
 * @copyright Copyright (c) 2022
 */

//---------------------------------------- dependencias

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <string>
using std::string;

#include <fstream>
using std::ofstream;
using std::ifstream;

//---------------------------------- outras dependencias

void pause ( std::string text )
{
  std::string dummy;
  std::cin.clear ();
  std::cout << std::endl << text;
  std::cin.ignore ();
  std::getline(std::cin, dummy );
  std::cout << std::endl << std::endl;
}// end pause ( )

//----------------------------------------------- classe

#include "Erro.hpp"
class MyString : public Erro
{
  public:
  /**
   * Funcao para obter mensagem
   * relativa ao codigo de erro.
   * @return mensagem sobre erro
   */
  std::string getErroMsg ()
  {
    return (NO_ERROR);
  }// end getErroMsg

}; // end class MyString

//----------------------------------- definicoes globais

using namespace std;

//---------------------------------------------- methods

/**
Method00 - Nao faz nada.
*/
void method00 ( )
{
  //
}// end method00

/**
Method01 - Testar definicoes da classe.
*/
void method01 ( )
{
  // definir dados
  MyString *s = new MyString ();

  // identificar
  cout << "\nEXEMPLO1401 - Method01\n" << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );

}// end method01 ( )



/**
Method02 -
*/
void method02 ( )
{
  // definir dados
  
  // identificar
  cout << "\nEXEMPLO1401 - Method02\n" << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );

}// end method2



/**
Method03 -
*/
void method03 ( )
{
  // definir dados
  
  // identificar
  cout << "\nEXEMPLO1401 - Method03\n" << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );

}// end method3



/**
Method04 -
*/
void method04 ( )
{
  // definir dados
  
  // identificar
  cout << "\nEXEMPLO1401 - Method04\n" << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );

}// end method4



/**
Method05 -
*/
void method05 ( )
{
  // definir dados
  
  // identificar
  cout << "\nEXEMPLO1401 - Method05\n" << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );

}// end method5



/**
Method06 -
*/
void method06 ( )
{
  // definir dados
  
  // identificar
  cout << "\nEXEMPLO1401 - Method06\n" << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );

}// end method6



/**
Method07 -
*/
void method07 ( )
{
  // definir dados
  
  // identificar
  cout << "\nEXEMPLO1401 - Method07\n" << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );

}// end method7



/**
Method08 -
*/
void method08 ( )
{
  // definir dados
  
  // identificar
  cout << "\nEXEMPLO1401 - Method08\n" << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );

}// end method8



/**
Method09 -
*/
void method09 ( )
{
  // definir dados
  
  // identificar
  cout << "\nEXEMPLO1401 - Method09\n" << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );

}// end method9



/**
Method10 -
*/
void method10 ( )
{
  // definir dados
  
  // identificar
  cout << "\nEXEMPLO1401 - Method10\n" << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );

}// end method10


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
    cout << "EXEMPLO1401 - Programa - v0.0\n           " << endl;

    // mostrar opcoes
    cout << "Opcoes     " << endl;
    cout << "0  - parar " << endl;
    cout << "1  - Testar definicoes" << endl;
    cout << "2  -       " << endl;
    cout << "3  -       " << endl;
    cout << "4  -       " << endl;
    cout << "5  -       " << endl;
    cout << "6  -       " << endl;
    cout << "7  -       " << endl;
    cout << "8  -       " << endl;
    cout << "9  -       " << endl;
    cout << "10 -       " << endl;

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
 1.0       0.1       (OK)        Erro.hpp || method01
 2.0       0.1       (OK)        || method02
 3.0       0.1       (OK)        || method03
 4.0       0.1       (OK)        || method04
 5.0       0.1       (OK)        || method05
 6.0       0.1       (OK)        || method06
 7.0       0.1       (OK)        || method07
 8.0       0.1       (OK)        || method08
 9.0       0.1       (OK)        || method09
 10.0      0.1       (OK)        || method10
*/