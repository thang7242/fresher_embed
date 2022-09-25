#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define   size(a)             (sizeof(a)/sizeof(a[0]))


uint8_t mang1[] = {1, 7, 20, 7, 7, 18}; //6 ô nhớ

void swap(uint8_t *a, uint8_t *b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

void SXtang(uint8_t arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = n-1; j > i; j--)
        {
            if (arr[j] < arr[j-1])
            {
                swap(&arr[j], &arr[j-1]);
            }
            
        }
        
    }
    
}
int max_freq(uint8_t arr[],int n){
    SXtang(arr, n);
    int i = 0; 
    int index = 0;
    int max = 0;
    int freq;
    while (i<n)
    {
        freq = 1;
        while (arr[i] == arr[i+1])
        {
            freq++;
            i++;
        }
        if (max < freq)
        {
            max = freq;
            index = i;
        }
        i++;
    }
    printf("\nSo %d la so xuat hien nhieu nhat!",arr[index]);
    return max;
}
void print_array(uint8_t x[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%3d ", x[i]);
    }
}
int main(int argc, char const *argv[])
{       
    SXtang(mang1,size(mang1));
    printf("Mang sap xep la: ");
    print_array(mang1,size(mang1));
    printf("\nCo %d so giong nhau!", max_freq(mang1, size(mang1)));


    return 0;

}
