#include<stdio.h>
#define row 3
#define col 3

void input(int a1[row][col]){
    for(int i=0; i<row ;i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a1[i][j]);
        }
        printf("\n");
    }
}



void sum_2d(int a1[row][col],int a2[row][col],int sum[row][col]){
	 for(int i=0; i<row ;i++){
        for(int j=0; j<col; j++){
       sum[i][j]=a1[i][j]+a2[i][j];
        printf("(%d,%d)",i,j);
        }
        printf("\n");
    }
}

int main(){
    int a1[row][col];
    int a2[row][col];
    int sum[row][col];
    printf("Enter the Elements Of first Matrix:");
    input(a1);
    printf("Enter the Elements Of Second Matrix:");
    input(a2);
    printf("Sum of Two matixs\n");
    sum_2d(a1,a2,sum);

    return 0;
}
