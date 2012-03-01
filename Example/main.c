/*****************************************
 ***********CPassGenLibrary***************
 ***************main.c********************
 *******Copyright(c) Alex Mawla 2012.*****
 *********All Rights Reserved.************
 *****************************************/



#include <stdio.h>
#include "passgenlib.h"


struct database 
{
    char firstname[25];
    char lastname[25];
    int age, birthday, birthyear;
    char birthmonth[3];
    char password[25];
};

int main (int argc, const char * argv[])
{
    init_rand();
    struct database employee[3]; 
    int i,c, num, length=25;
    for (i=0; i<3; i++)
    {
        passgen(employee[i].password, length);
    }
    num=1;
   for (i=0; i<3; i++)
    {
        printf ("Employee %d's password: ", num);
        num++;
        for (c=0; c<length; c++)
        {
            printf("%c", employee[i].password[c]);
        }
        printf ("\n\n");
    }
    return 0;
}

