#include "exercises.h"

// -------------------------------
// Functions that return a single value
// -------------------------------

int calcSum(int arr[], int n)
{
    int suma = 0;
    for(int i = 0; i < n; i++){
        suma = suma + arr[i];
    }
    return suma;
}

int findMax(int arr[], int n)
{
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

float calcAverage(int arr[], int n)
{
    int suma = 0;
    float prom;
    for(int i = 0; i < n; i++){
        suma = suma + arr[i];
    }
    prom = suma / n;
    return prom;
}

int countEvens(int arr[], int n)
{
    int cont = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            cont++;
        }
    }
    return cont;
}

int sumFirstLast(int arr[], int n)
{
    int FirstLast;

    FirstLast = arr[0] + arr[n - 1];

    return FirstLast;
}

int findMin(int arr[], int n)
{
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int subtractArraysSum(int a[], int b[], int n)
{
    int total = 0;
    int dif;
    for(int i = 0; i < n; i++){
        dif = a[i] - b[i];
        total = dif + total;
    }
    return total;
}

int mergeArraysSum(int a[], int n1, int b[], int n2)
{
    // Escriba aquí su código
}

int productArray(int arr[], int n)
{
    // Escriba aquí su código
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int n, int *sum, float *average)
{
    // Escriba aquí su código
}
