#include<stdio.h>
int main (){
    int n;
    printf("Enter the number of rows :");
    scanf("%d",&n);

    int space=n-1;
    int star =1;
for(int i=1;i<=n;i++){
     for (int j=1;j<=space;j++){
        printf(" ");

     }
     for(int k=1;k<=star;k++){
        printf("*");
     }
     if(space>i)  
    {  
      space=space-1;  
      star=star+2;  
    }  
    if(space<i)  
    {  
      space=space+1;  
      star=star-2;  
    }  
    printf("\n");
}
return 0;

}