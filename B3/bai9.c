#include <stdio.h>

int array[10] = {9, 5, 3, 6, 2, 4, 10, 1, 15, 22};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void tang_bubblesort(int x[])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 9; j > i; j--)
        {
            if (x[j] < x[j-1]) 
            {
                swap(&x[j], &x[j-1]);
            }
            
        }
        
    }
    
}
void tang_insertsort(int x[])
{
    int j,chen;
    for (int i = 1; i < 10; i++)
    {
        j = i-1;
        chen = x[i];
        while (j >= 0 && chen < x[j])
        {
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = chen;
    }
    
}

void print_array(int x[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", x[i]);
    }
    
}
int main()
{
    printf("\nMang tang dan bubble sort: ");
    tang_bubblesort(array);
    print_array(array);

    printf("\nMang tang dan insert sort: ");
    tang_insertsort(array);
    print_array(array);

}