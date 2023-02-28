#include <stdio.h>
#include<string.h>
typedef char * string;
#define MAX_SIZE 100
int temp =0;
 int count =1;
char *List[100] = {};
char * ( *ptr )[100] = &List;
int i;
void AddName(){
    char name[20];
 
 
printf("Enter Name : ");

scanf("%s",&name[0]);

    
    
    
    ( *ptr )[temp] = name;
     printf("new list : ");
    for ( i = 0; i < count; i++ )
        printf("%s ", ( *ptr )[i] );
temp++;
count++;
   
}

       int main(){

        AddName();
        for (i = 0; i < count; i++)
        {
           printf("%s ", ( *ptr )[i] );
        }
        
     
        return 0;
       }