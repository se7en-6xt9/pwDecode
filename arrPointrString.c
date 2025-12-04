#include<stdio.h>
#include<string.h>
int main(){
    char *s[]={ "boy","catji","Dogesh ji"};
        printf("\n");
        printf("%s\n",*s);
        printf("%s\n",*(s+1)+1);
        printf("%s\n",*(s+2)+2);
        printf("%c\n",**(s+1));
        printf("%c\n",*(*(s+1)+1));
}
