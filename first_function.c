#include <stdio.h>
#include <cs50.h>

float avarage(int length,int arro[]);

int main(void){
  
    
    
    int n = get_int("number of scores: ");
    
    int scores[n];
    
    for(int i =0 ; i<n ; i++){
        scores[i] = get_int("scores %i: ",i+1);
        
    }
    
    printf("avarage %.1f:\n ",avarage(n,scores));
    
}

float avarage(int length,int arro[]){ 
int sum =0;
for(int i =0  ; i < length ; i++){
    sum = sum + arro[i];
    // sum += arro[i]; bunu da yapabilirdik ama yapmadım.
    }
return (float)sum / (float)length ;
}
    
