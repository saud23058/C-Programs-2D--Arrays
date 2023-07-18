#include<stdio.h>
#define row 3
#define col 3
void input(int a[row][col]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
}
void transpose_nxn(int a[row][col]){
for(int i=0; i<col; i++){
    for(int j=i; j<row; j++){
    int temp=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=temp;
   
    }
   
}
// output
for(int i=0; i<col; i++){
    for(int j=0; j<row; j++){
       printf("%d ",a[i][j]);
    }
     printf("\n");
}
}int main()
{
    int a[row][col];
    printf("Enter The Elements  ");
    input(a);
    transpose_nxn(a);

} 
