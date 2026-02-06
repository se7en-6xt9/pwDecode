#include<stdio.h>
int main(){
    int a[5]={11,22,33,44,55};
    int *ptr=&a;
    printf(" a[0]=%d\n",a[0]); //11
    printf(" *ptr=%d\n",*ptr);//11
    printf(" ptr=%d\n",ptr); // address
    printf("\n \n");
    printf(" a[1]=%d\n",a[1]); //11
    printf(" *(ptr+1)=%d\n",*(ptr+1));//11
    printf(" (ptr+1)=%d\n",(ptr)+1); // address
    printf("\n \n");
    printf(" a[2]=%d\n",a[2]); //11
    printf(" *(ptr+2)=%d\n",*(ptr+2));//11
    printf(" (ptr+2)=%d\n",(ptr)+2); // address
    return 0;
}
//ptr = address of a[0]
//(ptr+1) = address of a[1]
//*ptr=a[0]
//*(ptr+1)=arr[1] ~ *(ptr+1*sizeof1bite)
