#include<stdio.h>
#include<conio.h>

void main() {
    char cars[3][3][50] = {
        {"ALTO","PICANTO","CIVIC"},
        {"PRADO","REVO","HONDA RS"},
        {"PORSCHE","DEFENDER","MUSTANG"},
    };

    int category,name;

    printf("The Category is: (0 : Low , 1 : Standard , 2 : High) \n");
    scanf("%d",&category);
    printf("The Name is: (0 : First , 1 : Second , 2 : Third) \n");
    scanf("%d",&name);

    switch (category) {
        case 0:
          printf("The Category is Low \n");
        break;
        case 1:
          printf("The Category is Standard \n");
        break;
        case 2:
          printf("The Category is High \n");
        break;
        default:
          printf("Wrong Category \n");
        break;
    }

    switch(name) {
        case 0:
          printf("The Name is First \n");
        break;
        case 1:
          printf("The Name is Second \n");
        break;
        case 2:
          printf("The Name is Third \n");
        break;
        default:
          printf("Car Not Available \n");
        break;
    }

    printf("The Car is: %s \n",cars[category][name]);
}