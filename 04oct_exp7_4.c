#include <stdio.h>
#include <string.h>

struct Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    struct Address my_address;

    // Initialize the struct members
    strcpy(my_address.name, "Mayank");
    strcpy(my_address.home_address, "216 Main Street");
    strcpy(my_address.hostel_address, "Bidholi Boys Hostel");
    strcpy(my_address.city, "Dehradun");
    strcpy(my_address.state, "Uttrakhand");
    strcpy(my_address.zip, "248007");

    // Display the present address
    printf("Present Address - \n");
    printf("Name: %s\n", my_address.name);
    printf("Home Address: %s\n", my_address.home_address);
    printf("City: %s\n", my_address.city);
    printf("State: %s\n", my_address.state);
    printf("Zip: %s\n", my_address.zip);

    return 0;
}