#include <stdio.h>

int main(){

    int arr[] = {34, 56, 54, 32, 67, 89, 90, 32, 21, 34, 56, 54, 32, 67, 89, 90, 32, 2, 34, 56, 54, 32, 67, 89, 90, 32, 2};

    int elements= sizeof(arr)/sizeof(arr[0]);

    printf("%d", elements);
    return 0;
}