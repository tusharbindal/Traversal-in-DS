/* WAP to access each elements from an array using Traversal*/

#include<stdio.h>
int main(){
    int a[5], lb,ub,i;
    void traversal(int a[], int lb, int ub);
    printf("\n Enter any Elements : \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    lb = 0;
    ub = 0;
    traversal(a,lb,ub);
    return 0;
}

void traversal(int a[], int lb, int ub)
{
    int i,j;
    printf("\n Display Elements:");
    for (i = 0; i < ub; i++)
    {
        j = a[i];
        printf("\n %d", j);
    }
    
}