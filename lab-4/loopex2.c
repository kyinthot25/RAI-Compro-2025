#include<stdio.h>

int main(){
    int num;
    int result;
    printf("Enter a number");
    scanf("%d", &num);

    while (num!=0)
    {
        result = num + num;
        break;
        
    };
    printf("Your result%d", result );
    return 0;
    

}