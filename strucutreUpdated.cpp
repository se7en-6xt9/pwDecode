#include<stdio.h>
#include<string>
  struct student{
 
    char name[20];
    char gender;
    int roll;
    int eng;
    int physic;
    int maths;
    int total;
    char grade;
 };
  int main(){
     int n;
     printf("Enter the number of student : ");
     scanf("%d",&n);
     struct student s[n];
     for(int i=0; i<n; i++){
      printf("\n---Enter details of student [ %d ]----\n",i+1);
      printf("Enter name : ");
      scanf("%s",&s[i].name);
      printf("\n");
      printf("Enter gender : ");
      scanf(" %c",&s[i].gender);
      printf("\n");
      printf("Enter roll no. : ");
      scanf("%d",&s[i].roll);
      printf("Enter marks in English : ");
      scanf("%d",&s[i].eng);
      printf("Enter marks in Physics  : ");
      scanf("%d",&s[i].physic);
      printf("Enter marks in Maths : ");
      scanf("%d",&s[i].maths);
     }

          
    // for(int i=0; i<n; i++){
     // int p;
    // printf("\n-----To get \n----Data output----\n-------press 1------\n");
     //printf("----OR TO NEXT  GET DATA------\n------PRESS 2----\n");
     //scanf("%d",&p); 
     //while(p==1 || p==2){

      //printf("\n---Enter details of student [ %d ]",i+1);
      //printf("Enter name : ");
      
      for(int i=0; i<n; i++ ){
        printf(" Press [ %d ] for student [ %s ] \n \n ",i+1,s[i].name);
      }
      printf(" Press [ 0 ] for [ EXIT ]\n \n");
      int i=1;
    while(i!=-1){
      scanf("%d",&i);
      i=i-1;
      if(i<=n && i!=-1){
      printf("Name of student : ");
      printf("%s",s[i].name);
      printf("\n");
      //printf(" gender : ");
      printf("Gender ");
      printf("%c",s[i].gender);
      printf("\n");
      printf("Roll no. : ");
      printf("%d",s[i].roll);
      printf("\n");
      printf("Marks in English : ");
      printf("%d",s[i].eng);
      printf("\n");
      printf("Marks in Physics  : ");
      printf("%d",s[i].physic);
      printf("\n");
      printf("Marks in Maths : ");
      printf("%d",s[i].maths);
      printf("\n");
      //break;
     }
    else if(i!=-1){
    printf(" --ANDHA HAI KYA-- \n --DEKH KE DAL NA-- \n --INPUT-- \n");
    }    
    }
    printf(" EXIT ");
   } //else {
      //
    //}
     //return 0;

