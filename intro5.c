// #include <stdio.h>

// int main()
// {

//     for (int i = 1; i <= 5; i++)
//     {
//       for(int k=4; k>=i; k-- ){   // jetlu space joi ae aetlu karva nu space mate loop chalayu che
//         printf(" ");
//       }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");

//     //     for (int i = 1; i <= 5; i++)
//     // {
      
//     //     for (int j = 1; j <= i; j++)
//     //     {
//     //         printf("%d", j);
//     //     }
//     //     printf("\n");
//     // }
//     }
    
//     return 0;
    
// }
#include <stdio.h>

int main()
{

    for (int i = 5; i >=1; i--)
    {
      for(int k=1; k<i; k++ ){   // jetlu space joi ae aetlu karva nu space mate loop chalayu che
        printf(" ");
      }
        for (int j = i; j <=5; j++)
        {
            printf("%d",j );
        }
        for(int j = 4; j >= i; j--){
            printf("%d",j);
        }
        printf("\n");
    }
}