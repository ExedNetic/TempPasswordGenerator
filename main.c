#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GenTempPassword(char *TempPassword, unsigned int seed, int legth)
{
  char characters[] = "!#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ^_`abcdefghijklmnopqrstuvwxyz|~";
  int charactersLegth = sizeof(characters) - 1;
  srand(seed * time(NULL));
  for (int c = 0; c < legth; c++)
  {
    int random = rand() % charactersLegth;
    TempPassword[c] = characters[random];
  }
  TempPassword[legth] = '\0';
}

int main()
{
  int Length;
  char password[Length + 1];
  unsigned long long seed;


  printf("Enter Length of password: \n");
  scanf("%d", &Lenght);
  printf("Enter a random number: \n");
  scanf("%lld", &seed);

  GenTempPassword(password, seed, Length);

  printf("Your password is: %s\n", password);
}
