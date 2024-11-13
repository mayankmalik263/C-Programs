#include <stdio.h>

union Address {
    char name[100];
    char home_address[100];
    char hostel_address[100];
    char city[100];
    char state[100];
    char zip[20];
};

int main() {
    union Address myAddress;

    printf("Enter your name: ");
    scanf("%99[^\n]", myAddress.name);
    getchar();
    printf("You entered Name: %s\n", myAddress.name);

    printf("Enter your home address: ");
    scanf("%99[^\n]", myAddress.home_address);
    getchar();
    printf("You entered Home Address: %s\n", myAddress.home_address);

    printf("Enter your hostel address: ");
    scanf("%99[^\n]", myAddress.hostel_address);
    getchar();
    printf("You entered Hostel Address: %s\n", myAddress.hostel_address);

    printf("Enter your city: ");
    scanf("%99[^\n]", myAddress.city);
    getchar();
    printf("You entered City: %s\n", myAddress.city);

    printf("Enter your state: ");
    scanf("%99[^\n]", myAddress.state);
    getchar();
    printf("You entered State: %s\n", myAddress.state);

    printf("Enter your zip code: ");
    scanf("%19s", myAddress.zip);
    printf("You entered Zip: %s\n", myAddress.zip);

    printf("\nFinal Values (Only last entered value is valid):\n");
    printf("Name: %s\n", myAddress.name);
    printf("Home Address: %s\n", myAddress.home_address);
    printf("Hostel Address: %s\n", myAddress.hostel_address);
    printf("City: %s\n", myAddress.city);
    printf("State: %s\n", myAddress.state);
    printf("Zip: %s\n", myAddress.zip);

    return 0;
}