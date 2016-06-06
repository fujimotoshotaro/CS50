 #include <stdio.h>
 #include <cs50.h> 
    int main( void )
{
       int n;
       int i;
       int j;
       int k;
 
 
 do
  {
   printf( "height:" );
   n = GetInt();
  }
   while ((n < 0) || (n > 23));


 for (i = 0; i < n; i++)
  {
  for (j = i; j < n - 1; j++)
   {
    printf( " " );
     
   }
    for (k = 0; k < i + 2 ; k++)
   {
     printf("#");
     
   }
     printf("\n");
  }
 
  
 
return 0; 
}
