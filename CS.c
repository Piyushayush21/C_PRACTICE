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

// # include <stdio.h>
// int main() {
//     int age;
//     printf("ENTER AGE:");
//     scanf("%d" , &age);
//     age >18 ? printf("adult \n") : printf("teenn,child \n");
    
// } 

// [SWITCH]

// # include <stdio.h>
// int main(){
//     int day;
//     printf("ENTER DAY (1-7):");
//     scanf("%d" , &day);

//     switch(day) {
//         case 1: printf("MONDAY");
//         break;
//         case 2: printf("TUESDAY");
//         break;
//         case 3: printf("WEDNESDAY");
//         break;
//         case 4: printf("THURSDAY");
//         break;
//         case 5: printf("FRIDAY");
//         break;
//         case 6: printf("SATURDAY");
//         break;
//         case 7: printf("SUNDAY");
//         break;
//     }
//     return 0;
// }

# include <stdio.h>
int main(){
    char day;
    printf("ENTER DAY (by alpha):");
    scanf("%c" , &day);

    switch(day) {
        case 'm' : printf("MONDAY");
        break;
        case 't' : printf("TUESDAY");
        break;
        case 'w' : printf("WEDNESDAY");
        break;
        case 'h' : printf("THURSDAY");
        break;
        case 'f': printf("FRIDAY");
        break;
        case 's':  printf("SATURDAY");
        break;
        case 'S' : printf("SUNDAY");
        break;
    }
    return 0;
}
