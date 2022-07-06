/**
 * @file Guia_0115E.cpp
 * @author vinicius_simoes_viana (1387659)
 * @brief 
 * @version 1.5E
 * @date 18-03-2022
 * 
 * @copyright Copyright (c) 2022
 * 
 */
// dependencies
#include "karel.hpp"

//--------------------------- definicoes de metodos

/**
decorateWorld - Metodo para preparar o cenario.
@param fileName - nome do arquivo para guardar a descricao.
*/

void decorateWorld ( const char* fileName )
{
   // colocar paredes no mundo
      // colocar paredes no mundo / horizontais
      world->set ( 3, 2, HWALL );
      world->set ( 4, 2, HWALL );
      world->set ( 5, 2, HWALL );

      world->set ( 3, 6, HWALL );
      world->set ( 4, 6, HWALL );
      world->set ( 5, 6, HWALL );

      // colocar paredes no mundo / verticais
      world->set ( 2, 3, VWALL );
      world->set ( 2, 4, VWALL );
      world->set ( 2, 5, VWALL );
      world->set ( 2, 6, VWALL );

      world->set ( 5, 3, VWALL );
      world->set ( 5, 4, VWALL );
      world->set ( 5, 5, VWALL );

   // colocar um marcador no mundo
   world->set ( 2, 3, BEEPER );

   world->set ( 6, 3, BEEPER );
   world->set ( 6, 3, BEEPER );
   world->set ( 6, 3, BEEPER );

   world->set ( 3, 7, BEEPER );
   world->set ( 3, 7, BEEPER );
   // salvar a configuracao atual do mundo
   world->save( fileName );
} // decorateWorld ( )


/**
Classe para definir robo particular (MyRobot),
a partir do modelo generico (Robot)
*/

class MyRobot : public Robot
{
   public:
      /**
      turnRight - Procedimento para virar 'a direita.
      */
      void turnRight ( )
      {
         // testar se o robo esta' ativo
         if ( checkStatus ( ) )
         {
            // o agente que executar esse metodo
            // devera' virar tres vezes 'a esquerda
            turnLeft ( );
            turnLeft ( );
            turnLeft ( );
         } // end if
      } // end turnRight ( )


      /**
      moveN - Metodo para mover certa quantidade de passos.
      @param steps - passos a serem dados.
      */
      void moveN( int steps )
      {
         // definir dado local
         int step = 0;
         // repetir contando e testando ate' atingir a quantidade de passos
         for ( step = 1; step <= steps; step = step + 1 ) // outra forma de repetir
         {
            // dar um passo por vez
            move( );
         } // end if
      } // end moveN( )

      /**
      putBeepers - botar mais de um beeper por vez
      @param puts - bepeers a serem deixados
       */
      void putBeepers ( int puts )
      {
         // definir dado local
         int put = 0;
         // repetir contando e testando ate' atingir a quantidade de beepers
         for ( put = 1; put <= puts; put = put + 1 ) // outra forma de repetir
         {
            // deixar um beeper por vez
            putBeeper( );
         } // end if
      }


      /**
      moveN - Metodo para mover certa quantidade de passos.
      @param picks - passos a serem dados.
      nao consegui fazer funcionar esse
      void pickBeepers( int picks )
      {
         // definir dado local
         int pick = 0;
         // repetir contando e testando ate' atingir a quantidade de passos
         for ( pick = 1; pick <= picks; pick = pick + 1 ) // outra forma de repetir
         {
            // dar um passo por vez
            pickBeeper( );
         } // end if
      } // end pickBepeers( )
      */

      /**
      era doPartialTask - Metodo para descrever parte de uma tarefa.
      agr e doTask
      */
      void doTask( )
      {
         // especificar acoes dessa parte da tarefa
         moveN(5);
         turnLeft( );
         moveN(2);
         pickBeeper( );
         pickBeeper( );
         pickBeeper( );
         moveN(4);
         turnLeft( );
         moveN(3);
         pickBeeper( );
         pickBeeper( );
         move( );
         turnLeft( );
         moveN(4);
         pickBeeper( );

         move( );
         turnLeft( );
         moveN(4);
         turnLeft( );
         moveN(4);
         turnLeft( );
         moveN(2);
         turnLeft( );
         moveN(3);
         putBeepers(6);

         turnLeft( );
         turnLeft( );
         moveN(3);
         turnRight( );
         moveN(2);
         turnRight( );
         moveN(5);
         turnRight( );
         moveN(5);
         turnLeft( );
         turnLeft( );

      } //end doTask( )
         // end doPartialTask( )


      /**
      doTask - Relacao de acoes para o robo executar.
      */
      /*
      void doTask( )
      {
         // especificar acoes da tarefa
         doPartialTask( );
         doPartialTask( ); 
      //testar se ha' marcador antes..
         if ( nextToABeeper() )
         {
            //... tentar carrega-lo
            pickBeeper( );      //pegar bepper
         } //end if

         doPartialTask( );
      //testar se carrega bepper antes...
         if ( nbeepers() > 0 )
         {
            //... de tentar descarregar-lo
            putBeeper( );       //colocar bepper
         }//end if

         doPartialTask( );
         turnLeft( );

         // encerrar
         turnOff ( );
      } // end doTask( )
      */

}; // end class MyRobot

// --------------------------- acao principal
/**
Acao principal: executar a tarefa descrita acima.
*/

int main ( )
{
   // definir o contexto
   // criar o ambiente e decorar com objetos
   // OBS.: executar pelo menos uma vez,
   // antes de qualquer outra coisa
   // (depois de criado, podera' ser comentado)
   world->create ( "" ); // criar o mundo
   decorateWorld ( "Guia0115E.txt" );
   world->show ( );

   // preparar o ambiente para uso
   world->reset ( ); // limpar configuracoes
   world->read ( "Guia0115E.txt" );// ler configuracao atual para o ambiente
   world->show ( ); // mostrar a configuracao atual
   set_Speed ( 1 ); // definir velocidade padrao

      // criar robo
      MyRobot *robot = new MyRobot( );
         // posicionar robo no ambiente (situacao inicial):
         // posicao(x=1,y=1), voltado para direita, com zero marcadores, nome escolhido )
      robot->create ( 1, 1, EAST, 0, "Karel" );

            // executar tarefa
            robot->doTask ( );

            // encerrar operacoes no ambiente
         world->close ( );

   // encerrar programa
   getchar ( );
   return ( 0 );
} // end main ( )


/*
Versao Teste
0.1 0.1 (OK) identificacao de programa
0.2 0.1 (OK) teste da tarefa
0.3 0.1 (OK) teste da tarefa parcial
0.4 0.1 (OK) teste do apanhar marcador
0.5 0.1 (OK) teste do colocar marcador
0.6 0.1 (OK) teste da repeticao do movimento
0.7 0.1 (OK) teste com marcador na posicao (4,4)
    0.2 (OK) teste sem marcador na posicao (4,4)
0.8 0.1 (OK) teste com a quantidade de marcadores
0.9 0.1 (OK) teste com outra forma de repeticao
1.0 0.1 (OK) teste com outra forma de alternativa
1.1 0.1 (OK) teste de altateracao na ordem e coleta dos beepers
1.2 0.1 (OK) teste realocacao de beepers e coleta deles
1.3 0.1 (OK) teste depositar os beepers
1.4 0.1 (OK) teste fazer a rota completa coletando um beeper por vez
1.5 0.1 (OK) teste atividades extras
*/