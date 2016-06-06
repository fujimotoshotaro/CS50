  #include <stdio.h>
 #include <cs50.h> 
    int main( void )
    {
       int output;
 
    printf( "minutes:" ); // prompt
    int integer1 = GetInt();
    output = integer1 * 12;
    printf( "bottles:%i\n", output ); 
    }
