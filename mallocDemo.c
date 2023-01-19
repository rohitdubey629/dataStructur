#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

// int main(){
//     int *p;
//     //clrscr();
//     printf("Enter a number");
//     p = (int *)malloc(2);
//     scanf("%d",p);
//     printf(" a number is %d",*p);
//     return 0;
// }


// int main(){
//     int *p,*p1,i;
//    // clrscr();
//     printf("Enter a number");
//     p = (int *)malloc(10);
//     p1 = p;
//     for(i=1;i<=5;i++){
//         scanf("%d",p);
//         p++;
//     }
//     p = p1;
//     for(i=1;i<=5;i++){
//         printf("number is %d\n",*p);
//         p++;
//     }
//     return 0;   
// }


int main(){
    int *p,*p1,i,sum=0;
   // clrscr();
    printf("Enter a number");
    p = (int *)malloc(5);
    p1 = p;
    for(i=1;i<=2;i++){
        scanf("%d",p);
        sum = sum+ *p;
        p++;
    }
    // p = p1;
    // for(i=1;i<=2;i++){
    //     //printf("number is %d\n",*p);
    //     sum = sum+ *p;
    //     p++;
        
    // }
    printf("%d",sum); 
    return 0;   
}