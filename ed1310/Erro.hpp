/**
 * @file Exemplo1210                 (CPP)
 * @author Vinicius Simoes Viana (1387659)
 * @version 1.0
 * @date 15-06-2022
 * @copyright Copyright (c) 2022
 */

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
   
   protected:

//--------------------------- metodos para acesso restrito
   /**
     Metodo para estabelecer novo codigo de erro
     @param codigo de erro a ser guardado
   */
   void setErro ( int codigo )
   {
      erro = codigo;
   }// end setErro ( )

   /**
     Definicoes publicas
   */
   public:

   /**
     Destrutor
   */
   ~Erro ( )
   {}

   /**
     Construtor padrao
   */
   Erro ( )
   {
      // atribuir valor inicial
      erro = 0;
   }// end construtor padrao

//------------------------------------ metodos para acesso
   /**
     Funcao para obter o codigo de erro.
     @return codigo de erro guardado
   */
   int getErro ( )
   {
      return ( erro );
   }// end getErro ( )


    /**
      * indicar a existencia de erro
      */
      bool hasErro ( )
      {
         return ( getErro() != 0 );
      }// end harErro ( )

}; // end classe Erro

#endif