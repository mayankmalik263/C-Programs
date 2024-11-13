#include <stdio.h>
#include <string.h>

union Data
{
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main()
{
    union Data data;

    data.intValue = 10;
    printf("Integer value: %d\n", data.intValue);

    data.floatValue = 3.14;
    printf("Float value: %.2f\n", data.floatValue);

    strcpy(data.stringValue, "Hello, World!");
    printf("String value: %s\n", data.stringValue);

    return 0;
}