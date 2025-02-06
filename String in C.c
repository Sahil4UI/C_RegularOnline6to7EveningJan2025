
#include <stdio.h>

int main()
{
    // char name[]= "Ashish";//String
    // printf("Name : %s\n",name);
    
    // How ta take input in String
    // char str[50];
    // printf("Enter a String : ");
    // fgets(str,sizeof(str),stdin);
    // // scanf("%s",&str);
    // printf("Entered String is :%s",str);
    
    // methods of String
    // Strlen - used to find string length
    // char str[] = "Programming";
    // printf("Length : %d\n",strlen(str));
    
    //strcpy - it is used to copy one string
    // to another
    // char str1[] = "Hello";
    // char str2[20];
    
    // strcpy(str2,str1);
    // printf("copied data = %s",str2);
    
    // strcat - concatenate - joining 2 strings
    // char str1[50]="hello";
    // char str2[] = "Everyone";
    
    // strcat(str1,str2);
    // printf("result = %s",str1);
    
    // Strcmp - compare
    // char str1[]="hello";
    
   
    // char str2[]="Hello";
    // agar same hai to result 0 hoga
    // agar first string smaller hai to answer negative
    // agar second string smaller hai to answer positive
    // printf("result is %d",strcmp(str1,str2));
    
    // Questions based on String manipulation
    // find the reverse of string without
    // using strrev
    // char str[100],temp;
    // int i,len;
    
    // printf("Enter a String : ");
    // scanf("%s",str);
    
    // len = strlen(str);
    // for (i=0;i<len/2;i++)
    // {
    //     temp = str[i];
    //     str[i]=str[len-i-1];
    //     str[len-i-1]=temp;
    // }
    
    // printf("Reversed is %s",str);
    
    // Swapping - interchaning value of x and y
    // x = 10 , y = 20
    // output=>. x = 20 , y = 10
    int x=10,y=20;
    
    int temp;
    
    temp = x;
    x = y;
    y  = temp;
    
    printf("%d",x);
    printf("%d",x);
    
    
    return 0;
}
