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
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if (n < 0)
    {
        return false;
    }
    else
    {
        int upper = n -1;
        int lower = 0;
        while (upper > lower)
        {
        int midpoint = (upper - lower)/2;
        if (values[midpoint] == value)
            {
                return true;
            }
        else if (value < values[midpoint])
            {
                upper = midpoint - 1;
            }
        else if (value > values[midpoint])
            {
                lower = midpoint + 1;
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
    for (int x = 0 ;x < n; x++)
    {
        for (int y = 0; y < n - 1; y++)
        {
            if (values[y] > values[y + 1])
            {
              int tmp = values[y];
              values[y] = values[y + 1];
              values[y + 1] = tmp;
            }
        }
    }
    return;
}