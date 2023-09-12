#include<stdio.h>
#include <math.h>
struct BinaryToDecimalConverter {
    char* binary_str;
    int (*convert)(struct BinaryToDecimalConverter* self);
};
int convert(struct BinaryToDecimalConverter* self) {
    char* binary_str = self->binary_str;
    int dec_value = 0;
    int power_of_2 = 1; 
    int length = 0;
    while (binary_str[length] != '\0') {
        length++;
    }
    for (int i = length - 1; i >= 0; i--)
	{
        if (binary_str[i] == '1') {
            dec_value += power_of_2;
        } else if (binary_str[i] != '0') {
            printf("Invalid binary digit: %c\n", binary_str[i]);
            return -1; 
        }
        power_of_2 *= 2; 
    }
    return dec_value;
}
int main() {
    struct BinaryToDecimalConverter converter;
    converter.binary_str = "1010";
    converter.convert = convert;

    int decimal_output = converter.convert(&converter);
    if (decimal_output != -1) {
        printf("Binary: %s\n", converter.binary_str);
        printf("Decimal: %d\n", decimal_output);
    }
    return 0;
}

