#include<stdio.h>

int Binary_search(int array[], int aim; int NumberOfElements)
{
    int left = 0;
    int right = NumberOfElements - 1;
    while(left <= righht)
    {
        int mid = (left + right)/2;
        if(array[mid] < aim)
            left = mid + 1;
        else if(array[mid] > aim)
            right = mid - 1;
        else
            return mid;
    }
    return -1;
}
