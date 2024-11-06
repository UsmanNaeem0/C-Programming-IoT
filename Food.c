#include<stdio.h>
#include<conio.h>

void main() {
    char Food[3][3][100] = {
        {"KORMA","BIRYANI","NIHARI"},
        {"PASTA","PIZZA","STEAK"},
        {"NOODLES","FRIED RICE","CHOWMEIN"},
    };

    int category,rank;

    printf("Enter the Category (0 : Desi , 1 : Western , 2 : Chinese) \n");
    scanf("%d",&category);
    printf("Enter the Rank (0 : First , 1 : Second , 2 : Third) \n");
    scanf("%d",&rank);

    switch(category) {
        case 0:
          printf("The Category is Desi \n");
        break;
        case 1:
          printf("The Category is Western \n");
        break;
        case 2:
          printf("The Category is Chinese \n");
        break;
        default:
          printf("Wrong Category \n");
        break;
    }

    switch(rank) {
        case 0:
          printf("The Rank is First \n");
        break;
        case 1:
          printf("The Rank is Second \n");
        break;
        case 2:
          printf("The Rank is Third \n");
        break;
        default:
          printf("Wrong Entry \n");
        break;
    }

    printf("The Name of the Dish is: %s \n",Food[category][rank]);
}