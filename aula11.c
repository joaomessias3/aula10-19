#include<stdio.h>
#include<math.h>

int main (){
 // raiz quadrada    
// se usar int teremos problemas de casting
float numero1 = 9.0f; // letra f depois do numero pra indicar float 
double raiz = sqrt(numero1); // tipo double com float 

printf("A raiz quadrada de %.1f é : %.2f\n", numero1, raiz);


// potência ( pow ) = power = valor 10
// primeiro valor 
float x = 10.0f;
//segundo valro 
float y = 2.0f;
//resultado do calculo
float  resultado = pow (x ,y);
printf("O valor de x:%f elevado a y: %f é igual a = %f",x,y,resultado);


return 0;
}
