 #include <stdio.h>
 #include <math.h>
 #include <cs50.h> 
 #include <string.h> 
 #include <stdlib.h> 
 #include <ctype.h> 


int main(int argc, string argv[])
{
    if (argc == 1)
    {printf("eror\n");
        return 1;
    }
    else
    {
int k = atoi(argv[1]);

string p = GetString();

for (int i = 0, n = strlen(p); i < n; i++)
    { if (isalpha(p[i]) == 0)
            {printf("%c", p[i]);
            }
        else
        { if (isupper(p[i]) == 0)
            {int newletter= (p[i] - 97 + k) % 26 + 97;
                printf("%c", newletter);
            }
            else
            {int newletter = (p[i] - 65 + k) % 26 + 65;
                printf("%c", newletter);
            }
        }
         
    }
    printf("\n");
return 0;

    }
    }
