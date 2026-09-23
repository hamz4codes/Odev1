///Örnek 1

/*
#include <stdio.h>

int main() {
    int n = 10;
    int arr[10];
    int i;

    printf("Please enter the element %d of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    
    return 0;
}
*/
/// T(n) = an + b
/// O(n) + O(n) = O(2n) = O(n)
/// S(n) = O(n)






///Palindromik sayı kontrolü

/*
#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
*/
