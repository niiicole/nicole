#include "binarySearch.h"

int binarySearch(vector<int>arr,int target)
{
    int left =0;
    int mid=0;
    int right = arr.size()-1;

    while (left <= right)
    {
        mid =left +(right-left)/2;

        if(arr[mid] == target)
        {
            return mid;
        }

        if(arr[mid] < target)
        {
            left =mid+1;
        }
        else
        {
            right =mid-1;
        }
    }

    return -1;

}