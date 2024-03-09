#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {
    // char: Typically a single byte, can store characters or small integers.
    char aChar = 'Z';
    unsigned char anUnsignedChar = UCHAR_MAX; // Max value for an unsigned char
    printf("Char: %c, Unsigned Char: %u\n", aChar, anUnsignedChar);

    // short: A short integer, larger than char but smaller than int.
    short aShort = SHRT_MIN; // SHRT_MIN
    unsigned short anUnsignedShort = USHRT_MAX;
    printf("Short: %d, Unsigned Short: %u\n", aShort, anUnsignedShort);

    // int: The standard integer type, usually reflects the natural size of integers used by the system.
    int anInt = INT_MIN;
    unsigned int anUnsignedInt = UINT_MAX;
    printf("Int: %d, Unsigned Int: %u\n", anInt, anUnsignedInt);

    // long: An integer type that is at least as large as int, can be larger.
    long aLong = LONG_MIN;
    unsigned long anUnsignedLong = ULONG_MAX;
    printf("Long: %ld, Unsigned Long: %lu\n", aLong, anUnsignedLong);

    // long long: An integer type that is at least 64 bits, larger than long.
    long long aLongLong = LLONG_MIN; 
    unsigned long long anUnsignedLongLong = ULLONG_MAX;
    printf("Long Long: %lld, Unsigned Long Long: %llu\n", aLongLong, anUnsignedLongLong);

    // float: Single precision floating-point, typically 32 bits.
    float aFloat = FLT_MAX; // Maximum value of float
    printf("Float: %f\n", aFloat);

    // double: Double precision floating-point, typically 64 bits.
    double aDouble = DBL_MAX; // Maximum value of double
    printf("Double: %lf\n", aDouble);

    // long double: Extended precision floating-point, typically 80, 96, or 128 bits depending on the platform.
    long double aLongDouble = LDBL_MAX; // Maximum value of long double
    printf("Long Double: %Lf\n", aLongDouble);

    // Print minimum and maximum values of each type
    printf("\n--- Min and Max Values ---\n");
    printf("Char Min: %d, Char Max: %d\n", CHAR_MIN, CHAR_MAX);
    printf("Short Min: %d, Short Max: %d\n", SHRT_MIN, SHRT_MAX);
    printf("Int Min: %d, Int Max: %d\n", INT_MIN, INT_MAX);
    printf("Long Min: %ld, Long Max: %ld\n", LONG_MIN, LONG_MAX);
    printf("Long Long Min: %lld, Long Long Max: %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Float Min: %e, Float Max: %e\n", FLT_MIN, FLT_MAX); // %e for scientific notation
    printf("Double Min: %e, Double Max: %e\n", DBL_MIN, DBL_MAX);
    printf("Long Double Min: %Le, Long Double Max: %Le\n", LDBL_MIN, LDBL_MAX);

    return EXIT_SUCCESS;
}
