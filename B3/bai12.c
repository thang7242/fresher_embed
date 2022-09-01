#include<stdio.h>
#include <string.h>

int array[10] = {3, 2, 9, 2, 2, 3, 2, 1, 15, 11};
int a[10];
void copy_aray(int x[], int y[]){
    for (int i = 0; i < 10; i++)
    {
        y[i] = x[i]; 
    }
    
}
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
void print_array(int x[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", x[i]);
    }
    
}

int xuat_hien_nhieu_nhat(int x[])
{
    tang_bubblesort(x);
    int i = 0, max = 0,index = 0;
	int frequency;
    while(i < 10)	{
 
		frequency = 1;
 
		while(x[i] == x[i+1])	{
 
			frequency++;
			i++;
		}
 
		if(max < frequency)	{
 
			max = frequency;
			index = i;
		}
 
		i++;
	}
    return x[index];
}
void vitri(int x[])
{
    printf("\nVi tri xuat hien ");
    for (int i = 0; i < 10; i++)
    {
        if (x[i] == xuat_hien_nhieu_nhat(array))
        {
            printf("\na[%d]",i);
        }
        
    }
}
int main()
{
    copy_aray(array,a);
    printf("\nXuat hien nhieu nhat: %d\n", xuat_hien_nhieu_nhat(array));
    vitri(a);
}
