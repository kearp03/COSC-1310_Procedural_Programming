#include <stdio.h>

typedef struct complex {
    float real;
    float imaginary;
} complex;
	
void input_complex(complex*);
void disp_complex(complex);
complex complex_sum(complex, complex);
complex complex_product(complex, complex);

int main(void){
    complex num1, num2;
    printf("Enter the first complex number:\n");
    input_complex(&num1);
    printf("\n");
    printf("Enter the second complex number:\n");
    input_complex(&num2);
    
    complex sum = complex_sum(num1, num2);
    printf("Sum: ");
    disp_complex(sum);

    complex product = complex_product(num1, num2);
    printf("Produc: ");
    disp_complex(product);
    return 0;
}

void input_complex(complex *c_num){
    printf("Real value: ");
    scanf("%f", &(c_num->real));
    printf("Imaginary value: ");
    scanf("%f", &(c_num->imaginary));
    return;
}

void disp_complex(complex c_num){
    printf("%.2f + %.2fi\n", c_num.real, c_num.imaginary);
    return;
}

complex complex_sum(complex c_num1, complex c_num2){
    complex sum;
    sum.real = c_num1.real + c_num2.real;
    sum.imaginary = c_num1.imaginary + c_num2.imaginary;
    return sum;
}

complex complex_product(complex c_num1, complex c_num2){
    complex product;
    product.real = c_num1.real*c_num2.real - c_num1.imaginary*c_num2.imaginary;
    product.imaginary = c_num1.real*c_num2.imaginary + c_num2.real*c_num1.imaginary;
    return product;
}