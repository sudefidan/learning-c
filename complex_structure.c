/*
a. Multiplication of a Complex object with a scalar
b. Division of a Complex object with a scalar
c. Two different functions; one for returning only the real and one for returning
imaginary part of the Complex object.
*/
#include <stdio.h>
#include <math.h>

struct Complex
{
	float real;
	float imag;
};

typedef struct Complex Complex;

Complex add(Complex n1,Complex n2);
void Print(Complex n);
float Abs(Complex n);
Complex multiply(Complex n);
Complex division(Complex n);
float Printreal(Complex n);
float Printimaginary(Complex n);

int main()
{
 Complex n1, n2, temp;
 printf("For 1st complex number\n");
 printf("Enter real and imaginary part respectively:");
 scanf("%f %f", &n1.real, &n1.imag);
 printf("Your complex number : \n");
 Print(n1);
 printf("-----------------------------------------\n");
 printf("For 2nd complex number \n");
 printf("Enter real and imaginary part respectively:");
 scanf("%f %f", &n2.real, &n2.imag);
 printf("Your complex number : \n");
 Print(n2);
 printf("-----------------------------------------\n");
 temp = add(n1, n2);
 printf("Sum of this 2 complex number = ");
 Print(temp);
 printf("-----------------------------------------\n");
 printf("Absolute value of the sum = %f\n", Abs(temp));
 printf("-----------------------------------------\n");
 // multiplication for 1st complex number
 printf("first complex number multiplication;\n");
 Complex result1;
 result1 = multiply(n1);
 printf("Your result = ");
 Print(result1);
 printf("-----------------------------------------\n");
 // multiplication for 2nd complex number
 printf("second complex number multiplication;\n");
 Complex result2;
 result2 = multiply(n2);
 printf("Your result = ");
 Print(result2);
 printf("-----------------------------------------\n");
 // division for 1st complex number
 printf("first complex number division;\n");
 Complex quo1;
 quo1 = division(n1);
 printf("Your result = ");
 Print(quo1);
 printf("-----------------------------------------\n");
 //division for 2nd complex number
 printf("second complex number division;\n");
 Complex quo2;
 quo2 = division(n2);
 printf("Your result = ");
 Print(quo2);
 printf("-----------------------------------------\n");
 //print parts for 1th complex number
 printf("The real part of your first complex number = %.1f\n", Printreal(n1));
 printf("The imaginary part of your first complex number = %.1f\n",Printimaginary(n1));
 printf("-----------------------------------------\n");
 //print parts for 2nd complex number
 printf("The real part of your second complex number = %.1f\n",Printreal(n2));
 printf("The imaginary part of your second complex number = %.1f\n",Printimaginary(n2));
 
 return 0;
}


Complex add(Complex n1, Complex n2)
{
	Complex temp;
 	temp.real = n1.real + n2.real;
 	temp.imag = n1.imag + n2.imag;
 
 	return temp;
}


void Print (Complex n)
{
	printf("%.1f + %.1fi\n", n.real, n.imag);
}


float Abs(Complex n)
{
	return sqrt( pow(n.real,2) + pow(n.imag,2) );
}


Complex multiply(Complex n)
{
	/*Because 1 complex number and scalar can not be multiplied,
	you obligate to multiply 2 complex number. So we will describe scalar as complex 
	number but ignore the imaginary part. In the same way, no need to save imaginary
	part of the scalar as we will not use.*/
	Complex scalar;
	Complex result;
	printf("By what scalar(number) do you want to multiply your complex number = ");
	scanf("%f", &scalar.real);
	
	// multiply each part by real part of scalar
	result.real = n.real * scalar.real;
	result.imag = n.imag * scalar.real;

	//return your result as complex number
	return result;
	
}

Complex division(Complex n)
{
	/*Because 1 complex number and scalar can not be divided,
	you obligate to divide 2 complex number. So we will describe scalar as complex 
	number but ignore the imaginary part. In the same way, no need to save imaginary
	part of the scalar as we will not use.*/
	Complex scalar;
	Complex result;
	printf("By what scalar(number) do you want to divide your complex number = ");
	scanf("%f", &scalar.real);
	
	// divide each part by real part of scalar
	result.real = n.real / scalar.real;
	result.imag = n.imag / scalar.real;
	
	//return your result as complex number
	return result;
	
}

float Printreal(Complex n)
{
	// only return real part of complex number
	return n.real;
}
float Printimaginary(Complex n)
{
	//only return imaginary part of complex number
	return n.imag;
}


