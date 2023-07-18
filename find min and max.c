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



void max(int a1[row][col]){
    int lar=a1[0][0];
	 for(int i=0; i<row ;i++){
        for(int j=0; j<col; j++){
      if(lar<a1[i][j]){
        lar=a1[i][j];
      }
      
        }
       
    }
    printf("%d is larg",lar);
}

int main(){
    int a1[row][col];
       printf("Enter the Elements Of first Matrix:");
    input(a1);
        max(a1);

    return 0;
}
