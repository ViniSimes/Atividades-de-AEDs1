/**
 * @file myarray           (CPP)
 * @author Vinicius Simoes (1387659)
 * @version 1.0
 * @date 11-06-2022
 * @copyright Copyright (c) 2022
 */

//-------------------------------definicoes globais

#ifndef _MYARRAY_HPP_
#define _MYARRAY_HPP_

// dependencias
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


template < typename T >
class Array
{
    private:   // area reservada
    T optional;
    int length;
    T *data;

    public:   // area aberta
    Array ( int n, T initial )
    {
        // definir valores
        optional = initial;
        length   = 0;
        data     = nullptr;

        // reservar area
        if ( n > 0 )
        {
            length = n;
            data   = new T [ length ];
        }// end if
    }// end constructor

    void free ( )
    {
        if ( data != nullptr )
        {
            delete ( data );
            data  = nullptr;
        }// end if
    }// end free ( )

    void set ( int position, T value )
    {
        if ( 0 <= position && position < length )
        {
            data [ position ] = value;
        }// end if
    }// end set ( )

    T get ( int position )
    {
        T value = optional;

        if ( 0 <= position && position < length )
        {
            value = data [ position ];
        }// end if

        return ( value );
    }// end get ( )

    void print ( )
    {
        cout << endl;
        for ( int x = 0; x < length; x++ )
        {
            cout << setw ( 3 ) << x << ":"
                 << setw ( 9 ) << data [x]
                 << endl;
        }// end for
        cout << endl;
    }// end print ( )

    void read ( )
    {
        cout << endl;
        for ( int x = 0; x < length; x++ )
        {
            cout << setw (3) << x << ":";
            cin >> data[3];
        }// end for
        cout << endl;
    }// end read ( )


    void fprint ( string fileName )
    {
        ofstream afile;           // output file

        afile.open ( fileName );
        afile << length << endl;
        for ( int x=0; x<length; x++ )
        {
            afile << data [x] << endl;
        }// end for
        afile.close ( );
    }// end fprint ( )


    void fread ( string fileName )
    {
        ifstream afile;
        int n = 0;
        afile.open ( fileName );
        afile >> n;
        if ( n <= 0 )
        {
            cout << "\nERRO: Invalid length.\n" << endl;
        }
        else
        {
            // guardar a quantidade de dados
            length = n;

            // reservar area
            data = new T [n];

            // ler dados
            for ( int x=0; x<length; x++ )
            {
                afile >> data[x];
            }// end for
        }// end if else
        afile.close ( );
    }// end fread ( )


    Array ( )
    {
        // definir valores inicias
        length = 0;

        // reservar area
        data = nullptr;
    }// end constructor


    Array ( int length, int other [] )
    {
        if ( length <= 0 )
        {
            cout << "\nERRO: Missing data.\n" << endl;
        }
        else
        {
            // criar copia
            this -> length = length;

            // reservar area
            data = new T [ this -> length ];

            // ler dados
            for ( int x=0; x<this->length; x++ )
            {
                data [x] = other [x];
            }// end for
        }// end if else
    }// end constructor ( )


    Array ( const Array& other )
    {
        if ( other.length <= 0 )
        {
            cout << "\nERRO: Missing data.\n" << endl;
        }
        else
        {
          // criar copia
          length = other.length;

          // reservar area
          data = new T [other.length];

          // ler dados
          for ( int x=0; x<length; x++ )
          {
            data [x] = other.data [x];
          }// end for
        }// end if else
    }// end constructor ( )


    Array& operator= ( const Array <T> other )
    {
        if ( other.length <= 0 )
        {
            cout << "\nERROR: Missing data.\n" << endl;
        }
        else
        {
            this->length = other.length;
            this->data = new T [ other.length ];

            for ( int x = 0; x < this->length; x=x+1 )
            {
                data [ x ] = other.data [ x ];
            }// end for
        }// end if else
        return ( *this );
    }// end operator= ( )


    bool operator== ( const Array <T> other )
    {
        bool result = false;
        int x = 0;

        if ( other.length == 0 || length != other.length )
        {
            cout << "\nERROR: Missing data.\n" << endl;
        }
        else
        {
            x = 0;
            result = true;
            while ( x < this->length && result )
            {
                result = result && (data [ x ] == other.data [ x ] );
                x = x + 1;
            }// end for
        }// end if
        return ( result );
    }// end operator== ( )


    Array& operator+ ( const Array <T> other )
    {
        static Array <T> result ( other );
        if ( other.length <= 0 )
        {
            cout << "\nERROR: Missing data.\n" << endl;
        }
        else
        {
            for ( int x = 0; x < this->length; x=x+1 )
            {
                result.data [ x ] = result.data [ x ] + this->data [ x ];
            }// end for
        }// end if
        return ( result );
    }// end operator+ ( )


    const int getLength ( )
    {
        return ( length );
    }// end getLength ( )


    T& operator[]( const int position )
    {
        static T value = optional;
        if ( position < 0 || length <= position )
        {
            cout << endl << "\nERROR: Invalid position.\n" << endl;
        }
        else
        {
            value = data [ position ];
        }// end if
        return ( value );
    }// end operator ( )


};

#endif