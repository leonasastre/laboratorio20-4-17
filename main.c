#include <stdio.h>
#include <stdlib.h>

struct S_Director
{

    char nombre[10];
    char fechNac[20];
    char paisOrigen[20];
    int id;
    int flagFree;
};
typedef struct S_Director Director;
struct S_Pelicula
{
char titulo[50];
int year;
char nacionalidad[50];
int idPelicula;
int idDirector;
int flagFree;

};
typedef struct S_Pelicula Pelicula;
void cargaDirector(Director directores[],int index,int id)
{
    printf("nombre director");
    scanf("%s",directores[index].nombre);
    printf("pais director");
    scanf("%s",directores[index].paisOrigen);
    printf("fcha nacimiento director");
    scanf("%s",directores[index].fechNac);
    directores[index].id=id;
}
int buscarLugarVacioEnDirectores(Director directores[],int len)
{


int i;
for(i=0;i<len;i++)
{
    if( directores[i].flagFree==1)
    {
        return i;
    }

}
return -1;
}
int main()
{




Director directores[500];
Pelicula peliculas[1000];
int contadorGeneradorIdDirector=0;
int contadorGeneradorIdPelicula=0;
int i;
for (i=0;i<500;i++)
{
 directores[i].flagFree=1;
}
for (i=0;i<1000;i++)
{
 peliculas[i].flagFree=1;
 contadorGeneradorIdDirector++;
 int indexVacioDeListaDirectores=buscarLugarVacioEnDirectores(directores,500);
 if(indexVacioDeListaDirectores>=0)
 {
     cargaDirector(directores,indexVacioDeListaDirectores,contadorGeneradorIdDirector);
 }
 return 0;
}
}

