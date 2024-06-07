#ifndef CALCULATOR_H
#define CALCULATOR_H

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int binary_to_decimal(const char *binary);
char* decimal_to_binary(int decimal);
int hex_to_decimal(const char *hex);
char* decimal_to_hex(int decimal);

#endif /* CALCULATOR_H */

