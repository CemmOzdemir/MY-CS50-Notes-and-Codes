#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct{
    string names;
    string numbers;
} 
person;

int main(void){
    
    person people[4];
    
    people[0].names="CEM";
    people[0].numbers ="251515586269";
    people[1].names="emre";
    people[1].numbers="988485986488";
    people[1].names="hakan";
    people[2].numbers="55465665266";
    people[3].names= "burak";
    people[3].numbers= "865665989985";
    for(int i =0; i<4;i++) {
        if(strcmp(people[i].names,"hakan")==0){
            printf("%s\n",people[i].numbers);
            return 0;
        }
    } 
    printf("NOT FOUND");
    return 1;
    
    
    /*string names[4]={"CEM","ERDEM","BUĞRA","FARUQUE"};
    string numbers[4]={"5374625505","51151555518","781118484848","64548488181"};
    Bu yapıları struct ile yapmamız bugging azaltacaktır.
    for(int i =0; i<4;i++) {
        if(strcmp(names[i],"FARUQUE")==0){
            printf("%s\n",numbers[i]);
            return 0;
        }
    } 
    printf("NOT FOUND");
    return 1;**/
}
