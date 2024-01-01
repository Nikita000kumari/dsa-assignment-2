#include<stdio.h>
void display (char c, int n){
    for (int i=0 ; i<n ; i++){
        printf("%c ",c);

    }
}
int main (){
    int n;
    printf("Enter the numbers of lines :");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        display('*',i);
        display(' ',(2*n)-(2*i));
        display('*',i);
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        display('*',i);
        display(' ',(2*n)-(2*i));
        display('*',i);
        printf("\n");
    }
    
}