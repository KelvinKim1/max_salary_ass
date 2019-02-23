#include "max_salary.h"

void print_array(int *arr, int size){
    for (int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int find_digit(int a){
    int num = a;
    int digit = 1;
    while (num>=10){
        num/=10;
        digit++;
    }
    return digit;
}


// Generating permutation using Heap Algorithm
void max_salary_naive(int a[], int size, int n, int * max)
{
    // if size becomes 1 then do something with the obtained permutation
    if (size == 1)
    {
        int num = 0;
        int digit_count = 0;
        for (int i = n-1; i >= 0; i--){
            num += a[i]*(pow(10,digit_count));
            digit_count += find_digit(a[i]);
        }

        if (num > *max){
            *max = num;
        }
        return;
    }
    
    for (int i=0; i<size; i++)
    {
        max_salary_naive(a,size-1,n, max);
        
        // if size is odd, swap first and last element
        if (size%2==1) {
            SWAP(a[0], a[size-1]);
        }
        // If size is even, swap ith and last element
        else{
            SWAP(a[i], a[size-1]);
        }
    }
}


