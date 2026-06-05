//DECALARATION INSTRUCTION>>> : decalre variable before using it 
// # include<stdio.h>
// int main() {
//     int a = 980;
//     int b = a;
//     printf("%d" , b);
//     return 0;
// }

// write a programe if a number is divisible by 2 or not 


# include<stdio.h>
int main() {
    int X;
    printf("ENTER A NUMBER");
    scanf("%d", &X);
    printf("%s" , (X % 2 == 0 ) ? "EVEN" : "ODD"  );
     
    return 0;
}



// #include <stdio.h>

// int main() {
//     int X;

//     printf("ENTER A NUMBER: ");
//     scanf("%d", &X);

//     printf("%s", (X % 2 == 0) ? "EVEN" : "ODD");

//     return 0;
// }