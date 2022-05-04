#include<stdio.h>
void lowertouppercase(char str[]);

int main()
{
    char name[] = "Anshika";
    lowertouppercase(name);


     for(int i=0; name[i]!='\0'; i++)
    {
        printf("%c \t", name[i]); 
        
    }

    return 0;
}


void lowertouppercase(char arr[]) 
{
    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') // to check lowercase vowels in string 
        {
            arr[i] = arr[i] - 32 ;
        }
    }
}    

   