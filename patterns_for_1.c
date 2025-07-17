//  Print the pattern using for loop, number of rows will be decied by user
//  *
//  **
//  ***
//  ****

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter n:");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}


//  Print the pattern using for loop, number of rows will be decied by user
// ****
// ***
// **
// *

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter n:");
    scanf("%d",&n);

    for(i=n; i>=1; i--){
        for(j=i; j>=1; j--){
            printf("*");
        }
        printf("\n");
    }
}

// Print the patter using for loop, number of rows will be decided by user
//    *
//   **
//  ***
// ****

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter number of rows:");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}