#include<stdio.h>
void mat(int a[3][3],int b[3][3]){
    int c[3][3]={0};
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            for(int k=0; k<=2; k++){
         c[i][j]=c[i][j]+a[i][k]*b[k][j];       
            }
        }
    }
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
        printf(" %d ",c[i][j]);
    }
    printf("\n");
        }

}
int main(){
    int a[3][3]={{1,2,3},
                 {4,5,6},
                  {4,5,6}};
    int b[3][3]={{23,23,23},
                {34,23,23},
                {34,34,34}};
                mat(a,b);
                return 0;              
}
