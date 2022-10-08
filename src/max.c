#include <stdio.h>
#include <assert.h>
#include <limits.h>


int max(int* numbers, int size)
{
    // Excercise 2
    // Implement your code below...
    assert(size > 0);
    int max = INT_MIN; //Store the max value

    for(int i = 0; i < size; i++){
        if(numbers[i] > max){ //Check if the current element is is larger than the so far max value.
            max = numbers[i];
        }
    }
    return max;
}
