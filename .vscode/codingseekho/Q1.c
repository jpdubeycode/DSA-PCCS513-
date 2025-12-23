
#include <stdio.h>
int main() {
    int a[5]={11,12,13,14,15};
    int *p = a;
   // int (*q)[5]=&a;
   // q+=2;
    *p += 5;
  //  printf("%lu", *p);
    printf("%lu", *p);
   // printf("%lu", *(*q));
    return 0;
}
    
