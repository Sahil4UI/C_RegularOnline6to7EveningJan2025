// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Collection
    // Array - Collection of Homogenous Type of Data
    // int arr[5] = {10,20,30,40,50};
    
    // char [5] = {'h','e','l','l','o'};
    // character ka array mtlab String hota hai
    // printf("%d",arr[0]);
    
    // printing the array values
    // for (int i=0;i<5;i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
    // write a program to find sum of all elements of array
    // int arr[5] = {10,20,30,40,50};
    // int result = 0;
    // for (int i=0;i<5;i++)
    // {
    //     // result = result+arr[i];
    //     result += arr[i];
    // }
    // printf("Sum of array is %d",result);
    
    // write a program to find largest number from array
    //  int arr[5] = {10,20,30,40,50};
    // int arr[5];
    // for (int i=0;i<5;i++)
    // {
    //     printf("Enter Element %d : ",i+1);
    //     scanf("%d",&arr[i]);
    // }
    
    // int largest = arr[0];
    
    // for (int i=1;i<5;i++)
    // {
    //     if (arr[i]>largest)
    //     {
    //         largest=arr[i];
    //     }
    // }
    // printf("largest = %d",largest);
    
    
    // write a program to sort the array in 
    // ascending order
    int x[5] = {0,-10,20,34,2};
    
    for (int i=0;i<5-1;i++)
    {
        for (int j=i+1;j<5;j++)
        {
            if (x[i]>x[j])
            {
                int temp = x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    
    for (int i=0;i<5;i++)
    {
        printf("%d\t",x[i]);
      
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
