/*****************************************
 ***********CPassGenLibrary***************
 ************passgenlib.c*****************
 *******Copyright(c) Alex Mawla 2012.*****
 *********All Rights Reserved.************
 *****************************************/

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include "passgenlib.h"

void init_rand()
{
    srand(((unsigned)time(NULL)));
}

void passgen(char* password, int length)
{
    char pass[length], ch;
    int ll, ul, lu, uu, ls, us, i, n, o, q, r;
    ll=(int)'a';
    ul=(int)'z';
    lu=(int)'A';
    uu=(int)'Z';
    ls=(int)'!';
    us=(int)')';

    for (i=0; i<length; i++)
    { 
        n=ll + rand() % ul;
        o=lu + rand() % uu;
        q=ls + rand() % us;
        for (r=0; r<3; r++)
        {
            if (r==0)
                ch=(char)n;
            if (r==1)
                ch=(char)o;
            else
                ch=(char)q;
        }
        pass[i]=ch;
    }
    for (i=0; i<length; i++)
    {
        password[i]=pass[i];
    }
}


