#include <stdio.h>

main(){
    int a, b, c;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("Enter Third Number: ");
    scanf("%d", &c);

    if ((a == b) && (a == c) && (b == c)){
      printf("All are Same");  
    }else if ((a == b) || (a == c) || (b == c)){
       printf("Both are Same"); 
    }else{
        if (a < b){
            if (a < c){
                printf("%d is minimum value.", a);
            }else{
                printf("%d is minimum value.", c);
            }    
        }else{
            if (b < c){
                printf("%d is minimum value.", b);
            }else{
                printf("%d is minimum value.", c);
            }   
        }    
    }  
}