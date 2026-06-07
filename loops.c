// loops in c 

// [for Loop]
// Used when the number of iterations is known

// SYNTAX:
// for(initialization; condition; update)
// {
//     // code
// }

// example

// # include <stdio.h> 
// int main() {
//     for (int i = 10; i >= 0; i = i-1) {
//         printf("%d \n" , i ) ;
//     }
// }
// # include <stdio.h> 
// int sum (int n) {
//     if (n == 0)
//         return 0;
//     else
//     return n + sum(n-1);

//     int main() {
//     printf("%d" , sum(5));
//     return 0;
//     }  
// }   

// int sum(int n) {
//     if (n == 0)
//         return 0;
//     return n + sum(n - 1);
// }

// int main() {
//     printf("%d", sum(5));
//     return 0;
// }


// #include <stdio.h>

// int sum(int n) {
//     if (n == 0)
//         return 0;
//     return n + sum(n - 1);
// }

// int main() {
//     printf("%d", sum(5));
//     return 0;
// }


#include <stdio.h>

int sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main() {
    int n;
    printf("enter your no.:");
    scanf("%d" , &n);

    printf("sum of numbers from 0 to %d = %d",n,sum(n));
    return 0;
}