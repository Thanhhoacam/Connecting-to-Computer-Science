#include <stdio.h>
#include <stdlib.h> // for system clear screen function

void Nhap(int arr[], int n)
{
    
    for (int i = 0; i < n; i++)
    {
        printf("nhap vao phan tu %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void Xuat(int arr[], int n){
     for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
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
void Add(int arr[], int *n)
{
    int pos;
    int x;
   
    printf("nhap vao so muon chen: ");
    scanf("%d", &x);
    // increase the size by 1
    *n = *n + 1;
    pos = *n;
    // insert x at pos
    arr[pos - 1] = x;
    // print the updated array
    for (int i = 0; i < *n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void Xoa(int arr[], int *n)
{
    int pos, so, timso,r;
    r = *n-1; // right
    printf("nhap vao so muon xoa: ");
    scanf("%d", &so);
    timso = binarySearch(arr,0,r,so);
    if (timso == -1)
    {
        printf("So khong co trong mang");
    }else
    {
        pos = timso;
    }

    
    // shift element
    for (int i = pos; i < *n; i++)
    {
        arr[i] = arr[i + 1];
    }
    // giam so luong element
    *n = *n - 1;
    // print the updated array
    printf("remove successfully !\n");
    for (int i = 0; i < *n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
// remove all

void XoaAll(int arr[], int *n)
{
    int pos, so, timso,r;
    
    printf("nhap vao so muon xoa: ");
    scanf("%d", &so);
    timso = 0;
   while(timso != -1) // cac so trong mang trung 3 lan 
   {
    timso = binarySearch(arr,0,*n-1,so);
     if (timso == -1)
    {
        printf("So khong co trong mang");
        break;
    }else
    {
        pos = timso;
    }

    *n = *n - 1;
    for (int i = pos; i < *n; i++)
    {
        arr[i] = arr[i + 1];
    }
     timso = binarySearch(arr,0,*n-1,so);
   }
   
    // print the updated array
    printf("remove successfully !\n");
    for (int i = 0; i < *n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
// Sap xep tang
void BubleSortAs(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // in ra mang
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// sap xep giam
void BubleSortDes(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // in ra mang
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// 1- Add a value
// 2- Search a value
// 3- Remove the first existence of a value
// 4- Remove all existences of a value
// 5- Print out the array
// 6- Sort the array in ascending order (positions of elements are preserved)
// 7- Sort the array in descending order (positions of elements are preserved)
// Others- Quit
int Menu()
{

    printf("Cac chuc nang: \n");
    printf("1. Add a value \n");
    printf("2. search a value \n");
    printf("3. Remove the first existence of a value\n");
    printf("4. Remove all existences of a value\n");
    printf("5. Print out the array\n");
    printf("6. Sort the array in ascending order\n");
    printf("7. Sort the array in descending order\n");
    printf("8. exit\n\n");
    printf("Enter your choice: ");

    int choice;
    scanf("%d", &choice);
    return choice;
}

int main()
{
    int n;
    int arr[100];
    int flag = 1;

// nhap mang
printf("Enter number of element for array: ");
    scanf("%d", &n);
Nhap(arr, n);
    

    while (flag == 1)
    {

        int choice = Menu();

        switch (choice)
        {
        case 1: // 1- Add a value
            Add(arr, &n);
            break;
        case 2: //2- Search a value
           int x, result;
            printf("Enter your number to search\n");
            scanf("%d", &x);
            result = binarySearch(arr, 0, n - 1, x);
            if (result == -1)
            {
                printf("There are not this number in array\n");
            }
            else
            {
                printf("Number Found !! the position of %d is %d\n",x, result);
            }

           
            break;
        case 3: // 3- Remove the first existence of a value
            printf("Remove the first existence of a value\n");
            Xoa(arr, &n);
            break;
        case 4: // 4- Remove all existences of a value
         printf("Remove all existences of a value\n");
           XoaAll(arr, &n);

            break;
        case 5: // 5- Print out the array
            printf("Print all elements in array\n");
            Xuat(arr, n);

            break;
        case 6: // 6- Sort the array in ascending order (positions of elements are preserved)
           BubleSortAs(arr, n);
            break;
        case 7: // 7- Sort the array in descending order (positions of elements are preserved)
             BubleSortDes(arr, n);
        break;
        
        
        default: // Others- Quit
          flag = 0;
            printf("Quit menu successfully !! \n\n");
        }
    }

    return 0;
}