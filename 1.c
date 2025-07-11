#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int m;
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    
    for(int i =1; i<=n;i++){
        for(int j = 1;j<=m ;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

// This will make the rectangle of mumbers 
// for example 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4