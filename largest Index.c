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



void max(int a1[row][col]) {
    int lar = a1[0][0];
    int max_i = 0, max_j = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (lar < a1[i][j]) {
                lar = a1[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    printf("%d is the largest element\n", lar);
    printf("(%d, %d) is the index of the largest element\n", max_i, max_j);
}


int main(){
    int a1[row][col];
       printf("Enter the Elements Of first Matrix:");
    input(a1);
        max(a1);

    return 0;
}
