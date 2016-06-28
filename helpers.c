/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
/* this is linear search
int bool search(int value, int values[], int n)
{   for (int i = 0; i < n; i++){
    if (values[i] == value)
    {
    
    return true;
    }
        
    }
    // TODO: implement a searching algorithm
    

    return false;
}
*/
// And now binary search
bool search(int value, int values[], int n)
{
int mini = 0;
int max = n;
int mid = (max - mini) / 2;

   while (max - mini > 0)
   {
    if (values[mid] == value)
    {
      mini = mid;
      max = mid;
      return true;
    }
    else if (values[mid] < value)
           {
              mini = mid + 1;
              mid = ((max - mini) / 2) + mini;
           if (values[mid] == value)
             {
               return true;
             }
            }
   else if (values[mid] > value)    
            {
            max = mid - 1;
            mid = ((max - mini) / 2) + mini;
            if (values[mid] == value)
             {
               return true;
             }
                
            }
   }
   return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
          for (int i = 0; i < n; i++)
      {
         for (int j = i + 1; j < n; j++)
        {
                if (values[i] > values[j])
            { int k = values[i];
               int temp = values[j];
                values[i] = temp;
                values[j] = k;
            }
            
         }
      }      
    return;
}
