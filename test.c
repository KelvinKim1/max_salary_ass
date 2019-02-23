#include "max_salary.h"

int main(int argc, char **argv ){
    if (argc != 2 || atoi(argv[1])>=5){
        printf("To Run: ./test N. N - # of integers as an input.\nN should be in the range between 1 to 4.\n");
        return 0;
    }
    srand(time(NULL));
    int N = atoi(argv[1]);
    int arr[N];
    printf("The numbers given are: ");
    for (int i = 0; i < N; i++){
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
    int result1 = 0;
    max_salary_naive(arr, N, N, &result1);
    int result2 = max_salary_greedy(arr, N, 0);
    if (result1 == result2){
        printf("\nOK. The max salary is ");
        printf("%d\n", result2);
    } else {
        printf("Wrong. The answer:%d You got:%d\n", result1, result2);
    }
    return 0;
    
}
