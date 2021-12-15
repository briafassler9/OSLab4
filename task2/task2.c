#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
typedef int (*Operation) (int a, int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  Operation operations[4];
  char operation[10];
  int a, b, i, result;

  operation[0] = &add;
  operation[1] = &subtract;
  operation[2] = &multiply;
  operation[3] = &divide;
  
  while (1){
    printf("Operand 'a' : %d | Operand 'b' : %d \n Specify the operation to perform \n(0:add | 1:subtract | 2:multiply | 3:divide | 4:exit): ",a,b);
    scant("%s", operation);
    i = atoi(operation);
    
    while (i > 4) {
      printf("Operand 'a' : %d | Operand 'b' : %d \n Specify the operation to perform \n(0:add | 1:subtract | 2:multiply | 3:divide | 4:exit): ",a,b);
      scant("%s", operation);
      i = atoi(operation);
    }
    
    if (i == 4){
      break;
    }
    
    result = (*operations[i])(a,b);
    printf("x = %d\n", result);
  }
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a-b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a*b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a/b; }