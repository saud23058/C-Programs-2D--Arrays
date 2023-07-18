#include<stdio.h>
int main(){
int m,n;
printf("enter The Row number of Matrix    ");
scanf("%d",&m);
printf("\nenter The col number of  Matrix   ");
scanf("%d",&n);
int a1[m][n];
printf("\nEnter the Elements of 1 Matrix   ");
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        scanf("%d",&a1[i][j]);
    }
    printf("\n");
   
}
printf("Matrix in wave form\n");


    for(int i=0; i<m; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
        printf("%d ",a1[i][j]);
    }
        }
    else
    {
    for(int j=n-1; j>=0; j--){
        printf("%d ",a1[i][j]);
    }
   
   }
    printf("\n");
    }
  
}