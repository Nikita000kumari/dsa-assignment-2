#include <stdio.h>  
  
int main()  
{  
    int n; 
    int p=0; 
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=i;j++)  
        {  
            p= p+1;
            printf("%d ",p);  
        }  
        
        printf("\n");  
    }  
    return 0;  
}  