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
void transpose(int a[row][col],int a2[row][col]){
    int same=1;
for( int i=0; i<col; i++){
    for( int j=0; j<row; j++){
       a2[i][j]=a[j][i];
    }
     printf("\n");
}
for(int  i=0; i<col; i++){
    for( int j=0; j<row; j++){
       printf("%d ",a2[i][j]);
    
    }
     printf("\n");
}
// ouput
for(int  i=0; i<col; i++){
    for( int j=0; j<row; j++){
       if (a[i][j]!=a2[i][j]){
        same=0;
       }
    
    }
   
}
if(same){
    printf("same");
}
else{
    printf("Not same");
}
}
int main()
{
    int a[row][col];
    int a2[row][col];
    printf("Enter The Elements  ");
    input(a);
    transpose(a,a2);

} 