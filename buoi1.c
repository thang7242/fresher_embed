#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define   size(a)             (sizeof(a)/sizeof(a[0]))


uint8_t mang1[] = {1, 7, 20, 4, 15, 18}; //6 ô nhớ
uint8_t mang2[] = {3, 14, 18, 21, 25, 14, 17, 19, 28}; //9 ô nhớ

uint8_t *mang3;

void ArrCoppy (uint8_t arr3[], uint8_t arr1[], uint8_t arr2[]){
    // Tinh kich thuoc mang 1, 2
    uint8_t len1 = size(mang1);
    uint8_t len2 = size(mang2);
    printf("kich thuoc mang 1 = %d", len1);
    printf("\nkich thuoc mang 2 = %d", len2);
    
    // Tinh kich thuoc mang3
    uint8_t len3 = len1 + len2;
    printf("\nkich thuoc mang 3 = %d", len3);

    // Cap phat bo nho cho mang3
    mang3 = (uint8_t *)malloc( len3 * sizeof(uint8_t));
    
    printf("\n--------------------");
    // copy mang1 -> mang3
    int i;
    for ( i = 0; i < len1; i++){
        mang3[i] = mang1[i];
    }
    // copy mang2 -> mang3
    for ( i = 0; i < len2; i++){
        mang3[len1 + i] = mang2[i];
    }
    // Xuat mang3
    for ( i = 0; i < len3; i++){
        printf("\nmang3[%d] = %d", i, mang3[i]);
    }
}

// Sap xem mang3 tang dan
void TangDan(uint8_t a[], int n){
    int temp =0, i, j, k;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;        
            }
        }
    }
    printf("\nMang sap xep tang dan la: ");
    for(k = 0; k < n; k++){
        printf("%3d", a[k]);
    }
}

// Sap xem mang3 giam dan
void GiamDan(uint8_t a[], int n){
    int temp = 0, i, j, k;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;        
            }
        }
    }
    printf("\nMang sap xep giam dan la: ");
    for(k = 0; k < n; k++){
        printf("%3d", a[k]);
    }
}
int size_arr3(){
    uint8_t len3 = 0;
    return len3 = size(mang1) + size(mang2);
}

int main(int argc, char const *argv[])
{
    ArrCoppy(mang3, mang1, mang2);
    printf("\n------------------");
    TangDan(mang3, size_arr3());
    printf("\n------------------");
    GiamDan(mang3, size_arr3());
    return 0;
}