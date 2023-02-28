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
  int n;
  // char name[20][n];
  printf("nhap vao so phan tu cua mang: ");
  scanf("%d",n);
  // for (int a = 0; a < n; a++)
  // {
  //   printf("nhap vao ten hoc sinh ");
  //   scanf("%s",&name[a]);
  // }
  
  // printf("List : ");
  // for (int b = 0; b < n; b++)
  // {
  //   printf("%s",name[b]);
  // }
  
 int a, b;
char name[n][50];//<- array of char[256]
//
for(a=0; a<n; a++)
{
    scanf("%s", name[a]);
}

for(b=0; b<n; b++)
{
    printf("%s\n", name[b]);
}


    
    
    
    
   
}
void RemoveName(){
 
}
void SearchName(){
  
    
}
void SortName(){
//  int i,j,n;
  
//    printf("Enter the number of names :\n");
//    scanf("%d",&n);
//    printf("Enter random names in any order:\n");
//    for(i=0;i<n;i++){
//       scanf("%s",nameList[i]);
//    }
//    for(i=0;i<n;i++){
//       for(j=i+1;j<n;j++){
//          if(strcmp(nameList[i],nameList[j])>0){
//             strcpy(s,nameList[i]);
//             strcpy(nameList[i],nameList[j]);
//             strcpy(nameList[j],s);
//          }
//       }
//    }
//    printf("\nSorted names in Alphabetical order\n");
//    for(i=0;i<n;i++){
//       printf("%s\n",nameList[i]);
//    }
}
int Menu(){
  
    printf("Cac chuc nang: \n");
    printf("1.Add a student name into the array \n");
    printf("2.Remove a student name  \n");
    printf("3.Search a student name \n");
    printf("4.Output student names in ascending orders alphabetically.\n");
     printf("5.Exit the program\n\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d",&choice);
    return choice;
}



int main() {
int n = sizeof(List) / sizeof(List[0]);

int flag=1;
  
  while (flag==1) {
   
    int choice = Menu();

  switch (choice) {
  case 1:
      if(n<=100){AddName();
   }else{
    printf("The list has full. It cannot add a new student.");
   }
   
    break;
  case 2:

    RemoveName();
    break;
  case 3:
    
    SearchName();
    break;
case 4:
  
    SortName();
    break;
  case 5:
   flag =0;
    printf("Thoat Menu thanh cong \n\n");
    break;
    // neu return 0 thi ko can break;
  default:
    printf("invalid choice");
  }
}
  

  return 0;
  
}
