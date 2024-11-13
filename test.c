#include <stdio.h>
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int N = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < N; i++){
        if(arr[i]==x){
            printf("Element is present at index %d", i);
        }
        return -1;
    }
}