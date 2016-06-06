 #include <stdio.h>
 #include <string.h>
 #include <cs50.h>
 
#include <ctype.h>
 int main(void)
{

string name = GetString();

printf("%c",toupper(name[0]));
//print second initial

for (int i = 0, n = strlen(name); i < n; i++)

 {
if (name[i] == ' ')
printf("%c", toupper(name[i + 1]));
 }

printf("\n");

return (0);
}
