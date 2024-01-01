#include<stdio.h>
int main (){
    int n;
    printf("Enter number of rows for pattern:");
    scanf("%d",&n);
    for (int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            printf(" ");
            if(i==j){
                printf("*");
            }
        }printf("\n");
    } 
    return 0;
}