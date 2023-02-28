#include<stdio.h>
/*la somme des elements de tableau*/
int somme(int t[],int n){
    if (n==0)
    {
        return(0);
    }else{
        return(t[n-1]+somme(t,n-1));
    }
    
}
int main()
{
    int t[]={1 ,2 ,4 ,6 ,5};
    int n=5;
    int y;
    y=somme(t,n);
    printf("%d",y);
    return 0;
}
