#include<stdio.h>

int main(){
int m,n,p,q;
printf("enter The Row number of 1st Matrix    ");
scanf("%d",&m);
printf("\nenter The col number of 1st Matrix   ");
scanf("%d",&n);
int a1[m][n];
printf("\nEnter the Elements of 1 Matrix   ");
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        scanf("%d",&a1[i][j]);
    }
    printf("\n");
}
printf("\nenter The Row number of 2nd Matrix   ");
scanf("%d",&p);
printf("\nenter The col number of 2nd Matrix    ");
scanf("%d",&q);
int a2[p][q];
printf("\nEnter the Elements of 2 Matrix    ");
for(int i=0; i<p; i++){
    for(int j=0; j<q; j++){
        scanf("%d",&a2[i][j]);
    }
    printf("\n");
}

if(n!=p){
    printf("Matrices cannot be multiplied ");
}
// for multplication row of first matrix and col of a secon
else{
int res[m][q];
for(int i=0; i<m; i++)
{
    for(int j=0; j<q; j++){
        res[i][j]=0;
        for(int k=0; k<n; k++){
            res[i][j]+=a1[i][k]*a2[k][j];
        }
    }
}
// print
printf("The resultant Matrix : \n");
for(int i=0; i<m; i++)
{
    for(int j=0; j<q; j++){
       printf("%d ",res[i][j]);
    }
    printf("\n");
}
}
}