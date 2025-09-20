// #include<stdio.h>

// int main(){
//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=5; j++){
//             // if(1 == i || i==3){
//             //     printf("*");
//             // }
//             // else if()
//             if(i==2){
//                 if(j==2||j==3|j==4){
//                     printf(" ");
//                 }else{
//                     printf("*");
//                 }
//             }else if(i==4 || i==5){
//                 if(j==2||j==3|j==4 || j==5){
//                     printf(" ");
//                 }else{
//                     printf("*");
//                 }
//             }
//             else{
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>

int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            if(i==1 || i==3){
                printf("****");
            }
            // else if(i==2){
            //     printf("*    *");
            // }
            else{
                printf("*  *");
            }
        }
        printf("\n");
    }
    return 0;
}