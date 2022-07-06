/**
 * @file Exemplo1210                 (CPP)
 * @author Vinicius Simoes Viana (1387659)
 * @version 1.0
 * @date 15-06-2022
 * @copyright Copyright (c) 2022
 */

//------------------------------------- definicoes globais

#ifndef _CONTATO_H_
#define _CONTATO_H_

//------------------------------------------ dependencias

#include <iostream>
using std::cin ;         // para entrada
using std::cout;         // para saida
using std::endl;         // para mudar de linha

#include <iomanip>
using std::setw;         // para definir espacamento

#include <string>
using std::string;       // para cadeia de caracteres

#include <fstream>
using std::ofstream;     // para gravar arquivo
using std::ifstream;     // para ler arquivo

//----------------------------------- outras dependencias

void pause ( std::string text )
{
   std::string dummy ;
   std::cin.clear () ;
   std::cout << std::endl << text;
   std::cin.ignore ();
   std::getline (std::cin, dummy);
   std::cout << std::endl << std::endl;
} // end pause ( )

#include "Erro.hpp"


//----------------------------------- definicao de classe

/**
  Classe para tratar contatos, derivada de classe Erro
*/
class Contato : public Erro
{
   /**
     * atributos privados
     */
      private:
      string nome;
      string fone;
   
   /**
     * definicoes publicas
     */
      public:
      /**
        * Destrutor
        */
      ~Contato ( )
      {}

      /**
        * Construtor padrao
        */
      Contato ( )
      {
        setErro (0);

         // atribuir valores iniciais vazios
         nome = "";
         fone = "";
      }// end construtor padrao

    /**
      * Metodo para atribuir nome
      * @param nome a ser atribuido
      */
    void setNome ( std::string nome )
    {
      if ( nome.empty () )
        setErro (1);
      else
        this -> nome = nome;
    }// end setName ( )


    /**
      * Metodo para atribuir telefone
      * @param foneo a ser atribuido
      */
    void setFone ( std::string fone )
    {
      if ( fone.empty () )
        setErro (2);
      else
        this -> fone = fone;
    }// end setFone ( )


    /**
      * Metodo para obter nome
      * @param nome armazenado
      */
    std::string getNome ( )
    {
      return ( this->nome );
    }// end getNome


    /**
      * Metodo para obter fone
      * @param fone armazenado
      */
    std::string getFone ( )
    {
      return ( this->fone );
    }// end getFone


    /**
      * Funcao para pbter dados de uma pessoa
      * @return dados de uma pessoa
      */
       std::string toString ( )
       {
        return ( "{ " + getNome() + ", " + getFone()+ "} " );
       }// end toString( )


    /**
      * Construtor alternativo
      * @param nome_inicial a ser atribuido
      * @param fone_inicial a ser atribuido
      */
    Contato ( std::string nome_inicial, std::string fone_inicial )
    {
      setErro (0);

      // atribuir valores inicias
      setNome ( nome_inicial );
      setFone ( fone_inicial );
    }// end construtor alternativo


    /**
      * Construtor alternativo baseado em copia
      */
    Contato ( Contato const & another )
    {
      // atribuir valores iniciais por copia
      setErro (0);
      setNome ( another.nome );
      setFone ( another.fone );
    }// end construtor alternativo


}; // end classe Contato

using ref_Contato = Contato*;

#endif