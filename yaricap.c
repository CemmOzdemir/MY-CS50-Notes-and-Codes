#include <stdio.h>
#include <cs50.h>


float alanHesapla(float m,float c);

int main(){

    float const PI =3.14;
    float rem = get_float("Lütfen yarıçap giriniz:");
    printf("çemberin alanı %.1f \n",alanHesapla(rem,PI));
}

float alanHesapla(float m,float c){
   c =3.14;
   return m*m*c;

 }
