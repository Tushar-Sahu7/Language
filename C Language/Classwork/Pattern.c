#include<stdio.h>
int main()
{
    // pattern 1
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    // 1 2 3 4 5 6
    int n;
    printf("Enter the number of element : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
        printf("%3d",j);
    }
        printf("\n");
    }
    // pattern 2
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // 5 4 3 2 1
    // 6 5 4 3 2 1

    printf("\n");
    for(int i=1; i<=n; i++){
        for(int j=i; j>=1; j--){
            printf("%3d",j);
        }
        printf("\n");
    }
    // pattern 3
    // 1
    // 1 1
    // 1 1 1
    // 1 1 1 1
    // 1 1 1 1 1
    // 1 1 1 1 1 1

    printf("\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%3d",1);
        }
        printf("\n");
    }
    // pattern 4
    // 1
    // 0 1
    // 0 1 0
    // 1 0 1 0
    // 1 0 1 0 1
    // 1 0 1 0 1 0

    printf("\n");
    int bin = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(bin == 1){
            printf("%3d",1);
            bin = 0;
            }
            else{
            printf("%3d",0);
            bin = 1;
            }
        }
        printf("\n");
    }
    // pattern 5
    // 1 2 3 4 5 6
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    printf("\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            printf("%3d", j);
            }
        printf("\n");
    }
    // pattern 6
    // 1 2 3 4 5 6
    // 2 3 4 5 6
    // 3 4 5 6
    // 4 5 6
    // 5 6
    // 6

    printf("\n");
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            printf("%3d",j);
        }
        printf("\n");
    }
    // pattern 7
    // A
    // B C
    // D E F
    // G H I J
    // K L M N O
    // P Q R S T U
    printf("\n");
    char c = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%3c",c);
            c+=1;
        }
        printf("\n");
    }


 return 0;
}