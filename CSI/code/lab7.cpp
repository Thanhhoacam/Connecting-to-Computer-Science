#include <stdio.h>
#include <stdlib.h> // for system clear screen function

// 1- Add a value
// 2- Search a value
// 3- Remove the first existence of a value
// 4- Remove all existences of a value
// 5- Print out the array
// 6- Sort the array in ascending order (positions of elements are preserved)
// 7- Sort the array in descending order (positions of elements are preserved)
// Others- Quit
int n = 3;
int Menu(){
  
    printf("Cac chuc nang: \n");
    printf("1.Add a value  \n");
    printf("2.Search a value  \n");
    printf("3.Remove the first existence of a value \n");
     printf("4.Remove all existences of a value\n");
     printf("5.Print out the array \n");
     printf("6.Sort the array in ascending order (positions of elements are preserved) \n");
     printf("7.Sort the array in descending order (positions of elements are preserved) \n");
     printf("Others. Quit\n\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d",&choice);
    return choice;
}
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return -1;
}

void Add (int arr[],int *n, int key){ // n is num of element in array

   
   //function
   int result = binarySearch(arr, 0, *n - 1, key);
    (result == -1)
        ? printf("Adding number to array....\n")
        : printf("Element is present at index %d\n", result);
arr[*n] = key;


//test function 1
printf("Add number successfully!\n");
for (int i = 0; i <= *n ; i++)
{
   printf("%d ",arr[i]);
}
printf("\n");
// tang gia tri
*n++;
}

int main() {
int flag=1;
   int arr[100] = { 0, 5, 7 };

    // number of element
    
    int key;
  while (flag==1) {
   
    int choice = Menu();

  switch (choice) {
   case 1:
    printf("Add number\n\n");
    printf("Enter your number to add: ");
    scanf("%d",&key);
   Add(arr,&n,key);
  printf("n = %d\n",n);


    break;
   case 2:
    printf("case \n\n");
    break;
   case 3:
    printf("case \n\n");
    break;
   case 4:
    printf("case \n\n");
    break;
   case 5:
    printf("case \n\n");
    break;
   case 6:
    printf("case \n\n");
    break;

   case 7:
   
    break;
    // neu return 0 thi ko can break;
  default:
   flag =0;
    printf("Thoat Menu thanh cong \n\n");
  }
  }

  return 0;
}