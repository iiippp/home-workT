#include<stdio.h>
/*le produit des elements d'un tableau*/
int prod(int t[],int n){
    if (n==0)
    {
        return(1);
    }else{
        return(t[n-1]*prod(t,n-1));
    }
    
}
int main()
{
    int t[]={1 ,2 ,4 ,6 ,5};
    int n=5;
    int y;
    y=prod(t,n);
    printf("%d",y);
    return 0;
}
