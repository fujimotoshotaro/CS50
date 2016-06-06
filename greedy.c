 #include <stdio.h>
 #include <math.h>
 #include <cs50.h> 

int main(int argc, string argv[])
{
  float input;
 do
  {
   printf("How much?");
 input = GetFloat();
  }
   while (input < 0);


 int quarter, dime, nickel, penny;
 
 quarter = 0;
 input = round(input * 100);
 while (input >= 25)
  {
   input = input - 25;
   quarter = quarter + 1;
  }
  
  dime = 0;
  
 while (input >= 10)
  {
   input = input - 10;
   dime = dime + 1;
  }
  
  nickel = 0;
  
  while (input >= 5)
  {
   input = input - 5;
   nickel = nickel + 1;
  }
  
  penny = 0;

  while (input >= 1)
  {
   input = input - 1;
   penny = penny + 1;
  }
  
  int coins = quarter + dime + nickel + penny;
  
  printf ("%i\n", coins);

 return 0;
}
