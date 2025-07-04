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

    if( n == 0){
        return 0;
    } else {
    FirstLast = arr[0] + arr[n-1];

    return FirstLast;
    }
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
    int suma = 0;
    for(int i = 0; i < n1; i++){
        suma = suma + a[i];
    }
    for(int i = 0; i < n2; i++){
        suma = suma + b[i];
    }
    return suma;
}

int productArray(int arr[], int n)
{
    int producto = 1;
    for(int i = 0; i < n; i++){
        producto = producto * arr[i];
    }
    return producto;
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int n, int *sum, float *average)
{
    int sum_temp = 0;

    if( n == 0){
        *sum = 0;
        *average = 0.0;
        return;
    }

    for(int i = 0; i < n; i++){
        sum_temp = sum_temp + arr[i];
    }
    *sum = sum_temp;
    *average = (float)sum_temp / n;

}
