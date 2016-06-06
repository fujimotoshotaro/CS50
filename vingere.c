 #include <stdio.h>
 #include <math.h>
 #include <cs50.h> 
 #include <string.h> 
 #include <stdlib.h> 
 #include <ctype.h> 


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("error\n");
        return 1;
    }
    else
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
            {
                if (isalpha(argv[1][i]) == 0)
                    {
                        printf("error\n");
                        return 1;
                        break;    
                    }
            }
string k = argv[1];

string p = GetString();

int pos = 0;

for (int i = 0, n = strlen(p); i < n; i++)
    { //This if is for non alphabets
        if (isalpha(p[i]) == 0)
            {printf("%c", p[i]);
            }
        else
        { 
            if (isupper(p[i]) == 0)   //if ith letter in p is lower case, 
        
        
           { if (isupper(k[pos % strlen(k)]) == 0) //if letter in k is lower case
                {int newletter= (p[i] - 97 + (k[pos % strlen(k)] - 97)) % 26 + 97;
                    printf("%c", newletter);
                    pos = pos + 1;
                }
                else
                {
                 int newletter= (p[i] - 97 + (k[pos % strlen(k)] - 65)) % 26 + 97;
                        printf("%c", newletter);  
                        pos = pos + 1;
                }
            }
            
            else
            if (isupper(k[pos % strlen(k)]) == 0) //if letter in k is lower case
                {int newletter= (p[i] - 65 + (k[pos % strlen(k)] - 97)) % 26 + 65;
                    printf("%c", newletter);
                    pos = pos + 1;
                }
                else
                {
                    int newletter= (p[i] - 65 + (k[pos % strlen(k)] - 65)) % 26 + 65;
                        printf("%c", newletter);   
                        pos = pos + 1;
                }
        }
         
    }
    printf("\n");
return 0;

    }
    
