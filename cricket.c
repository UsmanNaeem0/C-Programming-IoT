#include<stdio.h>
#include<conio.h>

void main() {
  char cricketTeam[3][3][50] = {
    {"BABAR", "RIZWAN", "FAKHAR"},
    {"SHADAB", "NAWAZ", "WASIM"},
    {"SHAHEEN", "NASEEM", "RAUF"}
  };

  int position, player;

  printf("Enter Position (0 : Batsman, 1 : All-Rounder, 2 : Bowler)\n");
  scanf("%d", &position);
  printf("Select Player Number (0-2)\n"); 
  scanf("%d", &player);

  switch(position) {
    case 0:
      printf("Position: Batsman\n");
    break;
    case 1:
      printf("Position: All-Rounder\n");
    break;
    case 2:
      printf("Position: Bowler\n");
    break;
    default:
      printf("Invalid Position\n");
    break;
  }

  switch(player) {
    case 0:
      printf("First Choice Player\n");
    break;
    case 1:
      printf("Second Choice Player\n");
    break;
    case 2:
      printf("Third Choice Player\n");
    break;
    default:
      printf("Invalid Player Number\n");
    break;
  }

  printf("Selected Player: %s\n", cricketTeam[position][player]);
}