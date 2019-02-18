#include "max_salary.h"

int is_better(const void * a, const void * b){
    int a_copy = *(int*)a;
    int b_copy = *(int*)b;
    int digit_a_copy = find_digit(a_copy);
    int digit_b_copy = find_digit(b_copy);
    return (a_copy+b_copy*pow(10,digit_a_copy))-(b_copy+a_copy*pow(10,digit_b_copy));
}

int max_salary_greedy(int arr[], int size, int max){
    qsort(arr, size, sizeof(arr[0]), is_better);
    int digit_count = 0;
    for (int i = size-1; i >= 0; i--){
        max += arr[i]*(pow(10,digit_count));
        digit_count += find_digit(arr[i]);
    }
    return max;
}



