#include <stdio.h>
#include <stdlib.h>

void GenTempPassword(char *TempPassword, unsigned int seed, int legth)
{
  char characters[] = "!#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ^_`abcdefghijklmnopqrstuvwxyz|~";
  int charactersLegth = sizeof(characters) - 1;
  srand(seed);
  for (int c = 0; c < legth; c++)
  {
    int random = rand() % charactersLegth;
    TempPassword[c] = characters[random];
  }
  TempPassword[legth] = '\0';
}

int main()
{
  int Length = 12;
  char password[Length + 1];
  unsigned long long seed;

  printf("Enter a random number: \n");
  scanf("%d", &seed);

  GenTempPassword(password, seed, Length);

  printf("Your password is: %s\n", password);
}
