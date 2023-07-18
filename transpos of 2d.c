#include<stdio.h>
#define row 2
#define col 3
void input(int a[row][col]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
}
void transpose(int a[row][col]){
for(int i=0; i<col; i++){
    for(int j=0; j<row; j++){
       printf("%d  ",a[j][i]);
    }
     printf("\n");
}
}int main()
{
    int a[row][col];
    printf("Enter The Elements  ");
    input(a);
    transpose(a);

} 
