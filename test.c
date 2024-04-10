#include <stdio.h>

int main() {
   int abacates;
   float valor;
    printf("Quantos abacates?: ");
    scanf("%d", &abacates);
    if (abacates <= 5){
        valor = abacates*1;
        
        printf("Valor: %.1f", valor);
        
        
    }else if(abacates >= 6 && abacates <= 10){
         valor = abacates*0.80;
        printf("Valor: %.1f", valor);
        
    }else if(abacates > 10){
         valor = abacates*0.60;
        printf("Valor: %.1f", valor);
       
}else{
    printf("Inválido");
}

    return 0;
}
