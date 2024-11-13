#include <stdio.h>
#include <string.h>

struct Patient {
    char name[50];
    int age;
    char bloodGroup[5];
};

int main() {
    struct Patient patients[100]; // Array to hold patient details
    int n, i;

    // Input the number of patients
    printf("Enter the number of patients (max 100): ");
    scanf("%d", &n);

    // Input details for each patient
    for (i = 0; i < n; i++) {
        printf("Enter details for patient %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", patients[i].name);
        printf("Age: ");
        scanf("%d", &patients[i].age);
        printf("Blood Group: ");
        scanf("%s", patients[i].bloodGroup);
    }

    // To find the patient with the maximum age for each blood group
    struct Patient oldestPatient;
    int found;

    printf("\nPatient(s) with the highest age in each blood group:\n");
    for (i = 0; i < n; i++) {
        found = 0;
        // Check if this blood group has already been processed
        for (int j = 0; j < i; j++) {
            if (strcmp(patients[i].bloodGroup, patients[j].bloodGroup) == 0) {
                found = 1;
                break;
            }
        }
        // If it's a new blood group, find the oldest patient
        if (!found) {
            oldestPatient = patients[i]; // Initialize with the current patient
            for (int k = i + 1; k < n; k++) {
                if (strcmp(patients[k].bloodGroup, oldestPatient.bloodGroup) == 0) {
                    if (patients[k].age > oldestPatient.age) {
                        oldestPatient = patients[k]; // Update if older
                    }
                }
            }
            // Print the oldest patient for this blood group
            printf("Blood Group: %s, Name: %s, Age: %d\n", 
                   oldestPatient.bloodGroup, 
                   oldestPatient.name, 
                   oldestPatient.age);
        }
    }

    return 0;
}
//---------------------------------------------------------------------------------------
// #include <stdio.h>
// #include <string.h>

// struct Patient {
//     char name[50];
//     int age;
//     char bloodGroup[5];
// };

// int main() {
//     struct Patient patients[100]; // Array to hold patient details
//     int n, i;

//     // Input the number of patients
//     printf("Enter the number of patients (max 100): ");
//     scanf("%d", &n);

//     // Input details for each patient
//     for (i = 0; i < n; i++) {
//         printf("Enter details for patient %d:\n", i + 1);
//         printf("Name: ");
//         scanf("%s", patients[i].name);
//         printf("Age: ");
//         scanf("%d", &patients[i].age);
//         printf("Blood Group: ");
//         scanf("%s", patients[i].bloodGroup);
//     }

//     // To find the patient with the maximum age for each blood group
//     struct Patient oldestPatient;
//     int found;

//     printf("\nPatient(s) with the highest age in each blood group:\n");
//     for (i = 0; i < n; i++) {
//         found = 0;
//         // Check if this blood group has already been processed
//         for (int j = 0; j < i; j++) {
//             if (strcmp(patients[i].bloodGroup, patients[j].bloodGroup) == 0) {
//                 found = 1;
//                 break;
//             }
//         }
//         // If it's a new blood group, find the oldest patient
//         if (!found) {
//             oldestPatient = patients[i]; // Initialize with the current patient
//             for (int k = i + 1; k < n; k++) {
//                 if (strcmp(patients[k].bloodGroup, oldestPatient.bloodGroup) == 0) {
//                     if (patients[k].age > oldestPatient.age) {
//                         oldestPatient = patients[k]; // Update if older
//                     }
//                 }
//             }
//             // Print the oldest patient for this blood group
//             printf("Blood Group: %s, Name: %s, Age: %d\n", 
//                    oldestPatient.bloodGroup, 
//                    oldestPatient.name, 
//                    oldestPatient.age);
//         }
//     }

//     return 0;
// }