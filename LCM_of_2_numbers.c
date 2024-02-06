// C program to find LCM of two numbers 
#include <stdio.h> 
int main() 
{ 
    int x , y , max; 
    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);
    if(x > y){
      max = x;
    }else{
      max = y;
    }
    while (1) { 
        if (max % x == 0 && max % y == 0) { 
          printf("The LCM of %d and %d is %d.", x, y,                 max); 
            break; 
        } 

        ++max; 
    } 

    return 0; 
}