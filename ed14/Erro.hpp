/**
 * @file Exemplo1401                 (CPP)
 * @author Vinicius Simoes Viana (1387659)
 * @version 0.1
 * @date 23-06-2022
 * @copyright Copyright (c) 2022
 */

//------------------------------------------- dependencias

#include <string>

//------------------------------------- definicoes globais

#ifndef _ERRO_H_
#define _ERRO_H_

class Erro
{
   /*
      *tratamento de erro.
      Codigos de erro:
      0. Nao ha' erro
   */

   /**
      * atributos privados.
   */

   private:
      int erro;
   
         // protected:

//--------------------------- metodos para acesso restrito
         /**
          Metodo para estabelecer novo codigo de erro
         @param codigo de erro a ser guardado
         
         void setErro ( int codigo )
         {
            erro = codigo;
         }// end setErro ( )
         */

   /**
     Definicoes publicas
   */
   public:

   /**
     Destrutor
   */
   ~Erro ( );

   /**
     Construtor padrao
   */
   Erro ( )
   {   };   // end construtor padrao

   /**
    * Conatante da classe 
    */
   static const std::string NO_ERROR;

//------------------------------------ metodos para acesso
   /**
     Funcao para obter o codigo de erro.
     @return codigo de erro guardado
   */
   int getErro ( )
   {
      return ( 0 );
   }// end getErro ( )


   /**
   * Testar se ha' erro.
   * @return true, se houver;
   * false, caso contrario
   */
   bool hasErro ( );


   /**
    * Funcao para obter mensagem
    * relativa ao codigo de erro.
    * @return mensagem sobre o erro
    */
   virtual std::string getErroMsg ()
   {
      return ( "" );
   }// end getErroMsg( )


   /**
    * definicoes com acesso restrito. 
    */
   protected:

//--------------------------- metodos para acesso restrito
   /**
    * Metodo para estabelecer novo codigo de erro
    * @param codigo a ser guardado
    */
   void setErro ( int codigo );

}; // end classe Erro

const std::string Erro::NO_ERROR = "[ERRO] Nao ha' erro."; 
   // definir o valor da constante

#endif