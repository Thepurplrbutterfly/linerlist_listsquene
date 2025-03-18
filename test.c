#include <stdio.h>
#include "listsquene.h"
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    sqelink S = squene_create();
    if(S==NULL)
    {
        printf("the memory assigning failed!\n");
        return -1;
    }
    squene_en(S,2);
    squene_en(S,3);
    squene_en(S,7);
    squene_en(S,8);
    squene_en(S,9);
    squene_en(S,12);
    squene_en(S,2);
    squene_en(S,3);
    squene_en(S,7);
    squene_en(S,8);
    squene_en(S,9);
    squene_en(S,12);
    squene_free(S);
    return 0;
}
