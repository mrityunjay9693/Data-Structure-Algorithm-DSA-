/* Program to count total number of even and odd number in array */
#include <stdio.h>
int main()
{
    int arr[10];
    int even = 0;
    int odd = 0;

    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);

        if(arr[i]%2 == 0){
            even++;
        }
        // if(arr[i]!=0){
        //     odd++;
        // }
        else {
            odd++;
        }
    }
    printf("total count of even number : %d\n",even);
    printf("total count of odd number : %d\n",odd);
    return 0;
}
