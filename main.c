#include <stdio.h>
#include <stdlib.h>

void carga(int[]);
void invertir(int[],int[]);
void mostrar(int[],int[]);

int main()
{
    int vector[10]={0};
    int vector2[10]={0};

    carga(vector);
    invertir(vector,vector2);
    mostrar(vector,vector2);

    return 0;
}
void carga(int vector[])
{
    int x;

    for(x=0;x<10;x++)
    {
        printf("Ingrese numero %d: ",x+1);
        scanf("%d",&vector[x]);
        fflush(stdin);
    }
};
void invertir(int v[],int v2[])
{
  int x;

  for(x=0;x<10;x++)
  {
      v2[9-x]=v[x];
  }
};
void mostrar(int vectornormal[],int vectorinvertido[])
{
    int x;
            printf("\nVector          Vector invertido\n");
        for(x=0;x<10;x++)
        {
            printf("%d                %d \n",vectornormal[x],vectorinvertido[x]);
        }
};
