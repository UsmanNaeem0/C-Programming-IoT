#include<stdio.h>
#include<conio.h>

void main() {
    int patientStatus;

    printf("Jinnah Hospital \n");
    printf("Enter the patient status (0 : The patient is dead , 1 : The patient is alive) \n");
    scanf("%d",&patientStatus);

    switch(patientStatus) {
        case 0:
          printf("Sorry, the patient is Dead \n");
        break;
        case 1:
          printf("The patient is Alive \n");
        break;
        default:
          printf("Unknown Status \n");
        break;
    }
}