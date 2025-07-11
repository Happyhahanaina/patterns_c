#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i = n; i>0; i--){
        for(int j = 1;j<=i;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// This program prints a right-angled triangle pattern of numbers in reverse order. 
// For example, if the user inputs 5, the output will be:
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1