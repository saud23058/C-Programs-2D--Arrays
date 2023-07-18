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
void sumrow(int a[row][col]){
    int i,j;
    int sum=0;
    int maxsum=0;
    for(i=0; i<row; i++){
       sum=0;
          
        for(j=0; j<col; j++){
       sum+=a[i][j];
        }
    
    
     if(maxsum<sum){
        maxsum=sum;
    }
     printf("\nSum of Row  %d  is = %d", i+1, sum);
    }
  
    printf("\nMax Sum of Row  %d  is = %d", i, maxsum);
}
int main()
{
    int a[row][col];
    printf("Enter The Elements  ");
    input(a);
    sumrow(a);

}