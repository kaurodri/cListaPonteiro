#include <stdio.h>
#include <stdlib.h>

typedef struct Cell
{
    int data;
    struct Cell * ant;
} Cell;

typedef struct Lista
{
    struct Cell *ini;
    struct Cell *fim;
    int tamanho;
} Lista;



Lista *crialista( ){
    Lista *l1 = (Lista*)malloc( sizeof( Lista ) );

    if(l1 == NULL)
    {
        printf("Imp");
        exit( 1 );
    }

    l1->fim = NULL;
    l1->ini = NULL;
    l1->tamanho = 0;

    return l1;
}

Lista *crialista( int ele, int tam ){

    Lista *l1 = crialista( );

    for( int c = 0; c < tam; c++ )
    {
        insereLista( l1, *ele );
        ele++;
    }
}
