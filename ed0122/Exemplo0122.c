/**
 * @file Exemplo0122             (C)
 * @author Vinicius_Simoes (1387659)
 * @version 2.2
 * @date 07-05-2022
 */

//dependentes
#include "io.h"   //para definicoes propias 

/**
Method00 - Encerrar
*/
void method00 ( )
{
  //nao fazer nada
}// end method00



/**
Method01- Calcular 1/4 da area do quadrado
*/
void method01 ( )
{
  //definir dados
  int x      = 0;  //num inicial
  int area   = 0;  //armezenar area
  int quarto = 0;  //armezenar um quarto da area 

  //pedir num
  printf ( "\nDigito o numero: " );
  scanf ( "%d", &x );

  //calcular area
  area = x * x;
  printf ( "\nAREA = %d\n", area );

  //calcular 1/4 da area
  quarto = area / 4;
  printf ( "\nUm quarto da area = %d \n", quarto );

  printf ( "\n\n" );
}// end method01



/**
Method02- área e o perímetro de um quadrado com o triplo do tamanho do lado
*/
void method02 ( )
{
  //definir dados
  int x         = 0;
  int valor     = 0;
  int area      = 0;
  int perimetro = 0;

  //pedir numero
  printf ( "\nDigite o numero desejado: " );
  scanf  ( "%d", &x );

  valor = x * 3;

  //calcular area
  area = valor * valor;
  printf ( "\nArea = %d\n", area );

  //calcular perimetro
  perimetro = valor + valor + valor + valor;
  printf ( "\nPerimetro = %d\n", perimetro );

}// end method02 



/**
Method03- mostrar um terço da área do retangulo
*/
void method03 ( )
{
  //definir dados
  int base   = 0;
  int altura = 0;
  int area   = 0;
  int terco  = 0;

  //pedir numeros
  printf ( "\nDigite a base do retangulo: " );
  scanf  ( "%d", &base   );

  printf ( "\nDigite a altura do retangulo: " );
  scanf  ( "%d", &altura );

  //calcular area
  area = base * altura;
  printf ( "\nArea = %d\n", area );

  //calcular 1/3 da area
  terco = area / 3;
  printf ( "\nUm terco da area do retangulo: %d", terco );
  printf ( "\n\n" );
}// end method03



/**
Method04- área e o perímetro de um retangulo com o dobro do tamanho do lado
*/
void method04 ( )
{
  //definir dados
  int base       = 0;
  int altura     = 0;
  int base2      = 0;
  int altura2    = 0;
  int area       = 0;
  int perimetro  = 0;

  //pedir numeros
  printf ( "\nDigite a base do retangulo: " );
  scanf  ( "%d", &base   );

  printf ( "\nDigite a altura do retangulo: " );
  scanf  ( "%d", &altura );

  base2   = base   * 2;
  altura2 = altura * 2;

  //calcular area
  area = base2 * altura2;
  printf ( "\nArea = %d\n", area );

  //calcular perimetro
  perimetro = 2 * ( base2 + altura2);
  printf ( "\nPerimetro = %d\n", perimetro );

  printf ( "\n\n" );

}// end method04 



/**
Method05 - área de um triângulo com um quinto da altura do mesmo
*/
void method05 ( )
{
  //definir dados
  double base   = 1.0;
  double altura = 1.0;
  double area   = 1.0;
  double quinto = 1.0;

  //pedir dados
  printf ( "\nDigite a base do triangulo: " );
  scanf  ( "%lf", &base   );

  printf ( "\nDigite a altura do triangulo: " );
  scanf  ( "%lf", &altura );

  //transformar altura no quinto dela
  quinto = altura / 5;

  //calcular area
  area = base * quinto;
  printf ( "\nArea: %lf\n", area );

  printf ( "\n\n" );

}// end method05



/**
Method06 - (triângulo equilátero) a altura, área e o perímetro do triângulo com a metade do lado
*/
void method06 ( )
{
  //definir dados
  double L2    = 1.0;   //metade do lado
  double L     = 1.0;   //lado
  double LRaiz = 1.0;   //raiz do lado

  double h = 1.0;       //alttura
  double A = 1.0;       //area 
  double P = 1.0;       //perimetro

  //pedir dados
  printf ( "\nDigite a metade do lado do triangulo: " );
  scanf  ( "%lf", &L2   );

  //transformar a meia altura em uma completa 
  L = L2 * 2;

  //calcular altura
  h = (L2 * sqrt(3)) / 2;
  printf ( "\nAltura: %lf", h);

  //calcular area
  A = L * h / 2;
  printf ( "\nArea: %lf\n", A );

  //calcular perimetro
  P = L * 3;
  printf ( "\nPerimetro: %lf\n", P );

  printf ( "\n\n" );

}// end method06


/**
Method07 - mostrar o volume do sólido com um sexto da medida do lado
*/
void method07 ( )
{
  //definir dados
  double a  = 1.0;     //lados&base
  double a6 = 1.0;

  double V  = 1.0;     //volume

  //pedir "a", o lado
  printf ( "\nDigite o valor do lado: ");
  scanf ( "%lf", &a );

  //calcular 1/6 de a
  a6 = a / 6;

  //calcular volume
  V = a6 * a6 * a6;
  printf ( "\nVolume = %lf\n", V );

  printf ( "\n\n" );

}// end method07



/**
Method08 - volume do sólido com seis vezes dos valores
*/
void method08 ( )
{
  //definir dados
  double comprimento = 1.0;
  double largura     = 1.0;
  double altura      = 1.0;

  double comprimento6 = 1.0;
  double largura6     = 1.0;
  double altura6      = 1.0;

  double V = 1.0;           //volume

  //pedir dados
  printf ( "\nDigite o comprimento: ");
  scanf ( "%lf", &comprimento );

  printf ( "\nDigite o largura: ");
  scanf ( "%lf", &largura );

  printf ( "\nDigite o altura: ");
  scanf ( "%lf", &altura );

  //multiplicar 6x os dados inserido
  comprimento6 = comprimento * 6;
  largura6     = largura     * 6;
  altura6      = altura      * 6;

  //calcular volume
  V = comprimento6 * largura6 * altura6;
  printf ( "\nO volume total e': %lf", V );

  printf ( "\n\n" );

}// end method08



/**
Method09 - Mostrar a área de um círculo com metade do raio
*/
void method09 ( )
{
  //definir dados
  double r     = 1.0;
  double area = 1.0;

  //pedir raio
  printf ( "\nDigite o valor do  raio: " );
  scanf ( "%lf", &r );

  //calcular area
  area = (M_PI) * pow( r, 2 ); 
  printf ( "\nArea equivale 'a = %lf", area );

  printf ( "\n\n" );

}// end method09



/**
Method10 - mostrar o volume de uma esfera com três oitavos do raio
*/
void method10 ( )
{
  //definir dados
  double r     = 1.0;
  double area  = 1.0;

  double V     = 1.0;    //volume
  double V2    = 1.0;

  //pedir raio
  printf ( "\nDigite o valor do  raio: " );
  scanf ( "%lf", &r );

  //calcular volume
  V = 4 * (M_PI) * pow( r, 3 ) / 3;
  V2 = V * 3/8; 

  printf ( "\nVolume equivale 'a = %lf", V2 );

  printf ( "\n\n" );

}// end method10



/**
Method11 - raio do dobro da area informada
*/
void method11 ( )
{
  //definir dados
  double Ac  = 1.0;    //area da circuferencia
  double Ac2 = 1.0;    // " dobro
  double r = 1.0;     //raio


  //pedir dados
  printf ( "\nDigite a area da circuferencia: " );
  scanf ( "%lf", &Ac );

  //calcular e mostrar o dobro da area informada
  Ac2 = Ac * 2;
  printf ( "\nO dobro dessa area e': %lf", Ac2 );

  //calcular o raio com a area em dobro
  r = Ac2 / 2*(M_PI);

  printf ( "\nO raio sera' de %lf", r );

  printf ( "\n\n" );

}// end method11



/**
Method12 - o raio da metade do volume da esfera e a área de sua superfície
*/
void method12 ( )
{
  //definir dados
  double Ve  = 1.0;   //Volume da uma esfera
  double Ve2 = 1.0;   //metade do volume
  double A   = 1.0;   //area
  double r   = 1.0;   //raio
  double r2  = 1.0;   //metade do raio

  //pedir volume da esfera
  printf ( "\nDigite o volume da esfera: " );
  scanf ( "%lf", &Ve );

  //calcular e mostrar o raio do volume
  r = pow(((Ve/(M_PI)*(3/4))), 1/3);
  r2 = r / 2;

  printf ( "\nA metade do raio e': %lf", r2 );

  //calcular e mostrar a area da superficie  
  A = 4 * ( M_PI ) * pow( r , 2 );

  printf ( "\nA area superficie da esfera e': %lf", A );

  printf ( "\n\n" );
}// end method12


int main ( )
{
  // definir dado
  int x = 0;

  // repetir até desejar parar
  do
  {
    // identificar
    IO_id ( "ATIVIDADES" );

    // ler do teclado
    IO_println ( "Opcoes" );
    IO_println ( " 0 - parar" );
    IO_println ( " 1 - 1/4 da area do quadrado" );
    IO_println ( " 2 - Triplo da Area&Perimetro do quadrado" );
    IO_println ( " 3 - Um terco da area do retangulo" );
    IO_println ( " 4 - Area e o perimetro de um retangulo com o dobro do tamanho dos lados" );
    IO_println ( " 5 - Area do triangulo (b * (h/5))" );
    IO_println ( " 6 - A altura, area e o perimetro do triangulo com a metade do lado" );
    IO_println ( " 7 - Volume do solido com um sexto da medida do lado" );
    IO_println ( " 8 - Volume do solido com seis vezes dos valores" );
    IO_println ( " 9 - Area de um circulo com metade do raio" );
    IO_println ( "10 - Volume de uma esfera com tres oitavos do raio" );

    IO_println ( "11 - raio do dobro da area informada" );
    IO_println ( "12 - o raio da metade do volume da esfera e a area de sua superficie" );
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

        case 11: method11 ( );
        break;

        case 12: method12 ( );
        break;

        default:
        IO_pause ( "ERRO: Valor invalido." );
      } // end switch
  }
  while ( x != 0 );

  // encerrar
  IO_pause ( "Apertar ENTER para encerrar" );
  return ( 0 );

}// end main( )


//comentarios
/*
v1.1  0.1  (OK)    mostrar um quarto da área do mesmo
v1.2  0.1  (OK)    mostrar a área e o perímetro de um quadrado com o triplo do tamanho do lado
v1.3  0.1  (OK)    mostrar um terço da área do retangulo
v1.4  0.1  (OK)    mostrar a área e o perímetro de um retângulo com o dobro do tamanho dos lados
v1.5  0.1  (OK)    mostrar a área de um triângulo com um quinto da altura do mesmo.
v1.6  0.1  (OK)    mostrar a altura, área e o perímetro do triângulo equilátero com a metade do lado
v1.7  0.1  (OK)    mostrar o volume do sólido com um sexto da medida do lado
v1.8  0.1  (OK)    mostrar o volume do sólido com seis vezes dos valores
v1.9  0.1  (OK)    mostrar área de um círculo com metade do raio
v2.0  0.1  (OK)    mostrar volume de uma esfera com três oitavos do raio
v2.1  0.1  (OK)    mostrar raio do dobro da area informada
v2.2  0.1  (OK)    mostrar raio da metade do volume da esfera e a área de sua superfície
*/