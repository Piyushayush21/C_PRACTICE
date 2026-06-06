// // CONDITIOANAL OPPERATORS 
// # include<stdio.h>
// int main () {
//   int age;
//   printf("enter age :");
//   scanf("%d" , &age);
// if (age != 19) {
//     printf("who are you");
// }
// else {
//     printf("how are you ");
// }
  
// }


// # include <stdio.h>
// int main() {
//     int age;
//     printf("enter age:");
//     scanf("%d" , & age);
//     if(age > 19) {
//         printf("YOU ARE UNEMPLOYED \n");
//         printf("WHO'S GONNA MARRY YOU \n");
//     }
//     else {
//         printf("YOU ARE NOT WORTHY OF THOSE QUESTONS BOY");
//     }
// }


// # include <stdio.h>
// int main() {
//     int age;
//     printf("ENTER AGE:");
//     scanf("%d" , &age);
//     if (age >= 18) {
//         printf("adult\n");
//     }
//     else if (age > 13 && age < 18){
//         printf("teenager \n");
//     }
//     else {
//         printf("child");
//     }
//     return 0;

// }

//  [TERNARY OPERATOR]

# include <stdio.h>
int main() {
    int age;
    printf("ENTER AGE:");
    scanf("%d" , &age);
    age >18 ? printf("adult \n") : printf("teenn,child \n");
    
}