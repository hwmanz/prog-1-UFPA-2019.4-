#include <stdio.h>

int main(void) {
  
  int cont;

  for (cont = 1; cont <= 100; cont++){
    if (cont % 2 == 0){
      printf("%d\n", cont);

    }
  }
  return 0;
}
