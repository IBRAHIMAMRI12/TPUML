#include <stdio.h>
#include <stdlib.h>
/*
void affichetab(int *tab,int n)
    {int i;
        for(i=0;i<n;i++)
    {
        printf("tab[%d]=%d \t",i,tab[i]);

    }
    }
    void affichematrice(int **matrice,int l,int c)
    {int j,i;
        for( j=0;j<l;j++)
    {
       for( i=0;i<c;i++)
    {
        printf("%d\t",&matrice[i][j]);

    }printf("\n");
    }
    }
int main()
{
    int tab[50];
    int n,i;

    printf("donner la dimmenssion de votre tableaux \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("tab[%d]=",i);
        scanf("%d",&tab[i]);
    }
    printf("l'affichage de l'element de votre tableaux \n");
    affichetab(tab,n);









    int l,c,D;
    printf("donner votre nbr de ligne \n");
    scanf("%d",&l);
    printf("donner votre nbr de colone \n");
    scanf("%d",&c);
    int matrice[l][c];
    printf("les element de la matrice est \n");
    int j;
    for( j=0;j<l;j++)
    {
       for( i=0;i<c;i++)
    {
        printf("element  : matrice[%d][%d]=",i,j);
        scanf("%d",&D);
        matrice[i][j]=D;
    }
    }
    printf("l'afichage de la matrice \n");

    /*for( j=0;j<l;j++)
    {
       for( i=0;i<c;i++)
    {
        printf("%d\t",matrice[i][j]);

    }printf("\n");
    }
affichematrice(*matrice,l,c);







}*/
int *alloue_vecteur(int dimmentions,int val)
{
    int i;
    int *vecteur=malloc(dimmentions*sizeof(int));
    for(i=0;i<dimmentions;i++)
    {
        vecteur[i]=val;
        return vecteur;
    }
}
void libere_vecteur(int *vecteur)
{
    free(vecteur);
}
int **alloue_matrice(int l,int c,int val)
{
    int i,j;
    int **matrice=malloc(l*sizeof(int *));
    for(int i=0;i<l;i++)
    {
        matrice[i]=malloc(c*sizeof(int));
    }
    for(int i=0;i<l;i++)
    {
        for(int j=0;i<c;i++)
        {
            matrice[i][j]=val;
            return matrice;
        }
    }
}
void libere_matrice(int **matrice,int l)
{
    int i;
    for(int i=0;i<l;i++)
    {
        free((int *)matrice[i]);
    }
}
int **alloue_matrice_zero(int l,int c)
{
    int i;
    int **matrice=calloc(l,sizeof(int *));
    for(i=0;i<l;i++)
    {
        matrice[i]=calloc(c,sizeof(int *));
        return matrice;
    }
}
int **genere_matrice_identite(int dimenssion)
{
    int i;
    int **identite=alloue_matrice_zero(dimenssion,dimenssion);//allocation dynamique de la memoires
    for(i=0;i<dimenssion;i++)
    {
        identite[i][j]=1;
        affiche_matrice(identite,dimention,dimention);
        return identite;
    }
}

int main()
{
int *vecteur,n;
printf("donner votre dimmenssion \n");
scanf("%d",&n);
alloue_vecteur(n,2);


}





















