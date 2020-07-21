#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string names[5]={"Zülal","begüm","leyla","sinan"};
    for(int i=0; i<4; i++ ){
        if(strcmp(names[i],"Zülal") ==0)
        {
            printf("found \n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}
