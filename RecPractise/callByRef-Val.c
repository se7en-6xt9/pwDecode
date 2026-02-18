#include<stdio.h>
void byRef(int *ptr1, int *ptr2){
    printf("\nIN ref B 4 swap\n");
    printf(" *ptr1(a) = %d  \n *ptr2(b)=%d",*ptr1,*ptr2);
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("\n After swap in ref \n");
    printf(" *ptr1(a) = %d , \n *ptr2(b)=%d",*ptr1,*ptr2);
    }
void byVal(int a, int b){
    printf(" \nIn val B 4 swap \n");
    printf(" a = %d\n b = %d\n",a,b);
    int temp = a;
    a=b;
    b=temp;
    printf(" \nIn val after swap \n");
    printf(" a = %d\n b = %d\n",a,b);
       }
       int main(){
        int a=2,b=3;
        printf("\nIn main B 4 swap\n");
        printf(" a = %d\n b = %d\n",a,b);
          byVal(a,b);
        printf("In main after byVal fun");
        printf("\nIn main after byVal\n");
        printf(" a = %d\n b = %d\n",a,b);
        byRef(&a,&b);
        printf("\nIn main after byRef\n");
        printf(" a = %d\n b = %d\n",a,b);
        return 0;
        
       }
