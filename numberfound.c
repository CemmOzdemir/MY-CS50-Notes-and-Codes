#include <stdio.h>
#include <cs50.h>

int main(void){
    int numbers[6] = {5,88,47,78,8};
    for(int i =0; i<6; i++){
        if (numbers[i] == 89 ){
            printf("found\n");
        }
      
    }
    printf("not found\n");
}
