

#include<stdio.h>
#define row 3
#define col 3

void input(int a[row][col]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
}

void rotated(int a[row][col]){
    // Transpose the matrix
    int temp;
    for(int i=0; i<row; i++){
        for(int j=i+1; j<col; j++){
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    // Reverse each row
    for(int i=0; i<row; i++){
        int start = 0;
        int end = col - 1;
        while(start < end){
            temp = a[i][start];
            a[i][start] = a[i][end];
            a[i][end] = temp;
            start++;
            end--;
        }
    }

    // Print the rotated matrix
    printf("Rotated:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[row][col];
    printf("Enter the Elements:\n");
    input(a);
    printf("Transpose and Rotate 90 degrees:\n");
    rotated(a);

    return 0;
}
