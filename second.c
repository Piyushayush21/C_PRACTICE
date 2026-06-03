

// # include<stdio.h>
// int main() {

//     int num = (12,3,4,5,6,7,123);
//     printf("d%" , num);
//     char name = ("PIYUSH AYUSH");
//     printf("c%", name );
//     return 0;
// }

// #include <stdio.h>

// int main() {

//     int num = (12,3,4,5,6,7,123);
//     printf("Number = %d\n", num);
//     char name[] = "PIYUSH AYUSH";
//     printf("Name = %s\n", name);
//     return 0;
// }


//  taking input from user 

//     #include <stdio.h>

// int main() {
//     char name[50];

//     printf("Enter your name: ");
//     scanf("%s", name);

//     printf("this is your name %s\n", name);

//     return 0;
// }
//   CODE OF NUMBER OF TWO SUM 

//    #include <stdio.h>

// int main() {
//  int num_1, num_2;
//     printf("ENTER YOUR FIRST NO.");
//     printf("%d:" , num_1);
//     scanf("%d", &num_1);

//     printf("ENTER YOUR SECOND NO.");
//     printf("%d:" , num_2);
//     scanf("%d", &num_2);

//     int sum = num_1 + num_2;
//     printf("sum is :%d" , sum);


//     return 0;
// }


# include <stdio.h>
int main(){
    int number_1 , number_2;
    printf("ENTER YOUR NO. 1");
    printf("%d:" , number_1);
    scanf("%d" , &number_1);

    printf("ENTER YOUR NO.2");
    printf("%d" , number_2);
    scanf("%d" , &number_2);

    int sum = number_1 + number_2;
    printf("sum is : %d" , number_1 + number_2 );

    return 0;
}