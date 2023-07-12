#include<stdio.h>
#define row 3
#define col 3

void input(int a[row][col]){
    for(int i=0; i<row ;i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
}

void output(int a[row][col]){
    for(int i=0; i<row ;i++){
        for(int j=0; j<col; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[row][col];
    input(a);
    output(a);

    return 0;
}
