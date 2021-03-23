#include <stdio.h>

int main(void) {
  
  int m, n, tmp, c;

  /*c é o fator de multiplicação usado para encontrar o subnumero*/


  scanf("%d", &m);
  scanf("%d", &n);


  c = 1;
  tmp = n;

  while(tmp > 0) {

    c =  c * 10;
    tmp = tmp / 10;

  }

  //printf("qtde digitos: %d", c);
  
  
  while(m >= c/10 && m % c != n) {
    
    //printf("num: %d\n", num);
    //printf("Um subnumero e: %d\n", num % 100);

    
    m = m / 10;
    
  }
  
  if(m % c == n)
    printf("Encontrei\n");
  else 
    printf("Nao Encontrei\n");

  return 0;
}