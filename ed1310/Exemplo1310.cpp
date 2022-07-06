/**
 * @file Exemplo1310                 (CPP)
 * @author Vinicius Simoes Viana (1387659)
 * @version 1.0
 * @date 15-06-2022
 * @copyright Copyright (c) 2022
 */

//----------------------------------- classes / pacotes

/**
#include <iostream>   // std::cin, std::cout, std::endl
#include <limits>     // std::numeric_limits
#include <string>     // para cadeias
*/
#include "Contato.hpp"

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
   Contato     pessoa1;
   ref_Contato pessoa2 = nullptr;
   ref_Contato pessoa3 = new Contato ( );

   // identificar
   cout << "\nEXEMPLO1310 - Method01\n" << endl;

   // encerrar
   pause ( "Apertar ENTER para continuar" );

}// end method01 ( )



/**
Method02 - Testar atribuicoes
*/
void method02 ( )
{
  // definir dados
  Contato     pessoa1;
  ref_Contato pessoa2 = nullptr;
  ref_Contato pessoa3 = new Contato ( );

  // identificar
  cout << "\nEXEMPLO1310 - Method02\n" << endl;
  
  // testar atribuicoes
  pessoa1.setNome ( "Pessoa_01" );
  pessoa1.setFone ( "111" );
  pessoa3->setNome ( "Pessoa_03" );
  pessoa3->setFone ( "333" );

  cout << "pessoa1 - { " << pessoa1.getNome  ( ) << ", " << pessoa1.getFone  ( ) << "}" << endl;
  cout << "pessoa3 - { " << pessoa3->getNome ( ) << ", " << pessoa3->getFone ( ) << "}" << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );

}// end method2



/**
Method03 - Testar recuperacao de dados
*/
void method03 ( )
{
  // definir dados
  Contato     pessoa1;
  ref_Contato pessoa2 = nullptr;
  ref_Contato pessoa3 = new Contato ( );

  // identificar
  cout << "\nEXEMPLO1310 - Method03\n" << endl;

  // testar atribuicoes
  pessoa1.setNome ( "Pessoa_01" );
  pessoa1.setFone ( "111" );
  pessoa3->setNome ( "Pessoa_03" );
  pessoa3->setFone ( "333" );

  cout << "pessoa1 - " << pessoa1.toString  () << endl;
  cout << "pessoa3 - " << pessoa3->toString () << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );
  
}// end method3



/**
Method04 - Testar contrutor alternativo
*/
void method04 ( )
{
  // definir dados
  Contato     pessoa1 ( "Pessoa01", "111" );
  ref_Contato pessoa2 = nullptr;
  ref_Contato pessoa3 = new Contato ( "Pessoa_3", "333" );

  // identificar
  cout << "\nEXEMPLO1310 - Method04\n" << endl;

  //testar atribuicoes
  cout << "pessoa1 - " << pessoa1.toString  () << endl;
  cout << "pessoa3 - " << pessoa3->toString () << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );
  
}// end method4



/**
Method05 - Testar construtor alternativo
*/
void method05 ( )
{
  // definir dados
  Contato     pessoa1 ( "Pessoa01", "111" );
  ref_Contato pessoa2 = nullptr;
  ref_Contato pessoa3 = new Contato ( "", "333" );
  
  // identificar
  cout << "\nEXEMPLO1310 - Method05\n" << endl;

  // testar atribuicoes
  cout << "pessoa1 - " << pessoa1.toString  () << "( " << pessoa1.getErro () << " )" << endl;
  cout << "pessoa3 - " << pessoa3->toString () << "( " << pessoa3->getErro() << " )" << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );
  
}// end method5



/**
Method06 - Testar construtor alternativo
*/
void method06 ( )
{
  // definir dados
  Contato     pessoa1 ( "Pessoa01", "111" );
  ref_Contato pessoa2 = nullptr;
  ref_Contato pessoa3 = new Contato ( "", "333" );

  // identificar
  cout << "\nEXEMPLO1310 - Method06\n" << endl;

  // testar atribuicoes
  if ( ! pessoa1.hasErro() )
    cout << "pessoa1 - " << pessoa1.toString() << endl;
  else
    cout << "pessoa1 tem erro (" << pessoa1.getErro() << ")" << endl; 
  
  if ( ! pessoa3->hasErro() )
    cout << "pessoa3 - " << pessoa3->toString() << endl;
  else
    cout << "pessoa3 tem erro (" << pessoa3->getErro() << ")" << endl; 

  // encerrar
  pause ( "Apertar ENTER para continuar" );
  
}// end method6



/**
Method07 - Testar atribuicoes e tratamento de erro
*/
void method07 ( )
{
  // definir dados
  Contato     pessoa1 ( "Pessoa01", "111" );
  ref_Contato pessoa2 = nullptr;
  ref_Contato pessoa3 = new Contato ( "", "333" );

  // identificar
  cout << "\nEXEMPLO1310 - Method07\n" << endl;

  // testar atribuicoes
  pessoa2 = &pessoa1;
  if ( ! pessoa2->hasErro() )
    cout << "pessoa1 - " << pessoa2->toString() << endl;
  else
    cout << "pessoa1 tem erro (" << pessoa2->getErro() << ")" << endl;

  pessoa2 = pessoa3;
  if ( ! pessoa2->hasErro() )
    cout << "pessoa3 - " << pessoa2->toString() << endl;
  else
    cout << "pessoa3 tem erro (" << pessoa2->getErro() << ")" << endl;

  // encerrar
  pause ( "Apertar ENTER para continuar" );
  
}// end method7



/**
Method08 - Testar atribuicoes e tratamento de erro
*/
void method08 ( )
{
  // definir dados
  Contato     pessoa1 ( "Pessoa01", "111" );
  ref_Contato pessoa2 = nullptr;
  ref_Contato pessoa3 = new Contato ( "", "333" );
  ref_Contato pessoa4 = nullptr;

  // identificar
  cout << "\nEXEMPLO1310 - Method08\n" << endl;

  // testar atribuicoes
  pessoa2 = new Contato ( pessoa1 );
  if ( pessoa2 )
    cout << "pessoa2 - " << pessoa2->toString() << endl;
  else
    cout << "pessoa2 tem erro (" << pessoa2->getErro() << ")" << endl;

  if ( pessoa3 )
  {
    pessoa2 = new Contato ( *pessoa3 );
    if ( pessoa2 )
      cout << "pessoa2 - " << pessoa2->toString() << endl;
    else
      cout << "pessoa2 tem erro (" << pessoa3->getErro() << ")" << endl;
  }// end if

  if ( pessoa4 )
  {
    pessoa2 = new Contato ( *pessoa4 );
    if ( pessoa2 )
      cout << "pessoa2 - " << pessoa2->toString() << endl;
    else
      cout << "pessoa2 tem erro (" << pessoa4->getErro() << ")" << endl;
  }
  

  // encerrar
  pause ( "Apertar ENTER para continuar" );
  
}// end method8



/**
Method09 - Testar arranjo de objetos (1)
*/
void method09 ( )
{
  // definir dados
  Contato pessoa [3];
  int x = 0;

  // identificar
  cout << "\nEXEMPLO1310 - Method09\n" << endl;

  // testar atribuicoes
  pessoa [0].setNome ( "Pessoa_1" );
  pessoa [0].setFone ( "111" );

  pessoa [1].setNome ( "Pessoa_2" );
  pessoa [1].setFone ( "222" );

  pessoa [2].setNome ( "Pessoa_3" );
  pessoa [2].setFone ( "333" );

  for ( x=0; x<3; x++ )
  {
    cout << x << ": " << pessoa[x].toString() << endl;
  }// end for

  // encerrar
  pause ( "Apertar ENTER para continuar" );
  
}// end method9



/**
Method10 - Testar arranjo de referencias para objetos (2)
*/
void method10 ( )
{
  // definir dados
  Contato *pessoa [3];
  int x = 0;

  // identificar
  cout << "\nEXEMPLO1310 - Method10\n" << endl;

  // testar atribuicoes
  pessoa [0] = new Contato ( "Pessoa_1", "111" );

  pessoa [1] = new Contato ( "Pessoa_2", "222" );

  pessoa [2] = new Contato ( "Pessoa_3", "333" );

  for ( x=0; x<3; x++ )
  {
    cout << x << ": " << pessoa[x] -> toString() << endl;
  }// end for

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
    cout << "EXEMPLO1301 - Programa - v0.0\n           " << endl;

    // mostrar opcoes
    cout << "Opcoes     " << endl;
    cout << "0  - parar " << endl;
    cout << "1  - Testar definicao de contatos  " << endl;
    cout << "2  - Testar atribuicaoes           " << endl;
    cout << "3  - Testar recuperacao de dados   " << endl;
    cout << "4  - Testar construtor alternativo " << endl;
    cout << "5  - Testar construtor alternativo " << endl;
    cout << "6  - Testar construtor alternativo " << endl;
    cout << "7  - Testar atribuicoes e tratamento de erro " << endl;
    cout << "8  - Testar atribuicoes e tratamento de erro " << endl;
    cout << "9  - Testar arranjo de objetos (1) " << endl;
    cout << "10 - Testar arranjo de referencias para objetos (2) " << endl;

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
 1.0       0.1       (OK)        Erro.hpp // Contato.hpp // Exemplo1301   || method01
 2.0       0.1       (OK)        setNome // setFone // getNome // getFone || method02
 3.0       0.1       (OK)        toString                                 || method03
 4.0       0.1       (OK)        Construtor alternativo                   || method04
 5.0       0.1       (OK)        reescrito => construtor padrao & 
                                 setNome & setFone & 
                                 Construtor alternativo                   || method05
 6.0       0.1       (OK)        hasErro                                  || method06
 7.0       0.1       (OK)        (só o method07)                          || method07
 8.0       0.1       (OK)        construtor alternativo baseado em copia  || method08
 9.0       0.1       (OK)        (só o method09)                          || method09
 10.0      0.1       (OK)        (só o method10)                          || method10
*/