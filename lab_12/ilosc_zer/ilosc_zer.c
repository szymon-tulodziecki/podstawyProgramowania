#include <stdio.h>

int policzZera(double n){

    if(n >= 0.1) return 0;
    else {
        return policzZera(n*10) + 1;
    }
        
}
//---------------------------------------------------------
int main(){

    double x;

    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%lf", &x);

    if((x > 0) && (x < 1)){
        printf("Ilosc zer: %i\n", policzZera(x));
    }
    else{
        printf("Liczba nie spelnia warunku\n");
    }

    return 0;
}