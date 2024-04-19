
#include<bits/stdc++.h>
#include "funcHeader.h"
#include<stdlib.h>
using namespace std;
int main()
{
    int arr[5]= {1, 2, 3, 4, 5};
    int* newArr = swap(arr,5);
    for(int i = 0; i < 5; i++)
    {
        cout << newArr[i] << " ";
    }

    return 0;
}
