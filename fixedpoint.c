#include <stdio.h>
#define NPOINT 8

typedef unsigned int uint;
void print_fixed_point(unsigned int number){
  printf("%f", (1.0*number)/(1<<NPOINT));
}

int main(){
  uint a = 0x500; // 5.00
  uint b = 0x600;
  print_fixed_point(a+b);
}

unsigned int add(unsigned int a, unsigned int b){
  return a + b;
}

unsigned int mult(uint a, uint b){
  //do it your self
}
