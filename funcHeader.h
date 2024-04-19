
// return array to store the result
int *doubleIt(int *arr, int size)
{
    int *res = (int *)malloc(size * sizeof(int));
    if(res == NULL)
    {
         res = (int *)calloc(size, sizeof(int));

    }
    for (int i = 0; i < size; i++)
    {
        res[i] = arr[i] * 2;

    }
    return res;
}

int* swap(int* arr,int len)
{
    int* res = (int*)malloc(len*sizeof(int));
    if(res == NULL)
    {
        res = (int*)calloc(len,sizeof(int));
    }
    for(int i = 0; i < len; i++)
    {
        res[i] = arr[len-i-1];
    }
    return res;
}