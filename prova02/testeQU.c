//-------------------------------------- dependencias
#include <stdio.h>
#include <stdlib.h>
#include "io.h"

//--------------------------------- Questoes fechadas


int f05 ( char *s1, char *s2 )
{
    int result = 0;
    int x=0, y=0, z=0;
    for ( x=0; x<strlen(s1); x++ )
    { for ( y=1; y<strlen(s2); y++ )
      {if ( s1[x] == s2[y] ) { z++; y = strlen(s2); } }
    }
    result = ( z==strlen(s1) );
    return ( result );
}