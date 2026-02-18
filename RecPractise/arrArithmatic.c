#include<stdio.h>
int main(){
    char a[]={'a','b','c','d','e'};
    char *ptr=&a;
    //Increment operator p++
    //a[0]++ not possible
    a[0]++;
    ptr++;
    printf("%c",*ptr);
    printf(" a[0]++ = %c\n",a[0]); //b
    printf(" ptr++ = %c\n",*ptr); //b
    //(ptr+1)++; temporary address inc. not allow
     printf("(ptr+1)++ = %c\n",*(ptr+1)); //c
     printf("++(*(ptr+1)) = %c",++(*(ptr+1))); //d
     //(p+1)++ no
     //P++ yes
     //(*(p+1))++ yes
     //*p++
    //return 0;

    //add-subp
    printf("\n");
    printf("*ptr - *(ptr+1) = %c\n",*ptr - *(ptr+1));
    //comparisiion
    if(*ptr<*(ptr+1)){
        printf("Yes");
    } else {
        printf("No");
    }
}
