/*
Write a c program to take a array and count the number of binary and delete if the number has even set bits
OP:-
Enter the number of array elements: 8
Enter the array elements:
1 2 3 4 5 6 7 8
Final Array:
1 2 4 7 8 


*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    int arr[n], len = n;

    printf("Enter the array elements:\n");
    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    for (int j = 0; j < len; j++) {
        int count = 0;

        for (int i = 0; i < 32; i++)
            if ((arr[j] >> i) & 1)
                count++;

        // printf("%d set bit count = %d\n", arr[j], count);

        if (count % 2 == 0) { 
            for (int k = j; k < len - 1; k++)
                arr[k] = arr[k + 1];
            len--;  
            j--;    
        }
    }

    printf("Final Array:\n");
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
