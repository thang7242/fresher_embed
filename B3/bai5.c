#include <stdio.h>

int distance;

int gia(int a){
    int price;
    if (a == 1)
    {
        price = 5000;   
    }
    else if (a <= 31)
    {
        price = 4000*(a-1)+5000;
    }
    else
    {
        price = 5000 + 4000*30 + 3000*(a-31);
    }
    return price;
}
int main()
{
    do
        {
            printf("Nhap so km can di chuyen > 0km: ");
            scanf("%d", &distance);
        } while (distance <= 0 );

    gia(distance);
    printf("so tien can phai tra: %d",gia(distance));

    printf("\n");
    system("pause");
}