#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./include/calculator.h"

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int binary_to_decimal(const char *binary) {
    int decimal = 0;
    while (*binary) {
        decimal = (decimal << 1) + (*binary++ - '0');
    }
    return decimal;
}

char* decimal_to_binary(int decimal) {
    static char binary[32 + 1];
    binary[32] = '\0';
    for (int i = 31; i >= 0; --i, decimal >>= 1) {
        binary[i] = (decimal & 1) + '0';
    }
    return binary;
}

int hex_to_decimal(const char *hex) {
    return (int)strtol(hex, NULL, 16);
}

char* decimal_to_hex(int decimal) {
    static char hex[8 + 1];
    snprintf(hex, sizeof(hex), "%X", decimal);
    return hex;
}

