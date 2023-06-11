/*
Program displays the sizes for each of C's data types.
Output should be:
Size of C data types
Type               Bytes
char                 1
unsigned char        1
short                2
int                  4
unsigned             4
long                 4
unsigned long        4
long long            8
unsigned long long   8
float                4
double               8
long double          16
*/

#include<stdio.h>
int main() {
    char charType;
    unsigned char unsignedcharType; 
    short shortType;
    int intType;
    unsigned unsignedType;
    long longType;
    unsigned long unsignedlongType;
    long long longlongType;
    unsigned long long unsignedlonglongType; 
    float floatType;
    double doubleType;
    long double longdoubleType;

    // sizeof evaluates the size of a variable
    printf("Size of char: %zu bytes\n", sizeof(charType));
    printf("Size of unsigned char: %zu bytes\n", sizeof(unsignedcharType));
    printf("Size of short: %zu bytes\n", sizeof(shortType));
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of unsigned: %zu bytes\n", sizeof(unsignedType));
    printf("Size of long: %zu bytes\n", sizeof(longType));
    printf("Size of unsigned long: %zu bytes\n", sizeof(unsignedlongType));
    printf("Size of long long: %zu bytes\n", sizeof(longlongType));
    printf("Size of unsigned long long: %zu byte\n", sizeof(unsignedlonglongType));
    printf("Size of float: %zu byte\n", sizeof(floatType));
    printf("Size of double: %zu byte\n", sizeof(doubleType));
    printf("Size of long double: %zu byte\n", sizeof(longdoubleType));
    
    return 0;

}
