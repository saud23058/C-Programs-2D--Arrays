#include<stdio.h>
int main(){
int row,col;
printf("enter The Row number of Matrix    ");
scanf("%d",&row);
printf("\nenter The col number of  Matrix   ");
scanf("%d",&col);
int a1[row][col];
printf("\nEnter the Elements of 1 Matrix   ");
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        scanf("%d",&a1[i][j]);
    }
    printf("\n");
   
}
printf("Matrix in wave form\n");
//  we will keep the col same
for(int j=0; j<col; j++){
    if(j%2==0){
        for(int i=0; i<row ; i++){
            printf("%d ",a1[i][j]);
        }
    }
    else{
        for(int i=row-1; i>=0; i--){
            printf("%d ",a1[i][j]); 
        }
    }
    printf("\n");
}
  
}