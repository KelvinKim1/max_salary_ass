#ifndef MAX_SALARY_H
#define MAX_SALARY_H

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>


#define SWAP(a,b) {int temp; temp=a; a=b; b=temp;}

void print_array(int arr[], int size);
void max_salary_naive(int a[], int size, int n, int* max);
int max_salary_greedy(int arr[], int size, int max);
int is_better(const void * a, const void * b);
int find_digit(int a);

#endif

