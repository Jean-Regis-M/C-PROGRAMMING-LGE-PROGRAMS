#include<stdio.h>
#include<string.h>
int main(void)
{
    char name[40];
    int width;
    
    
    printf("Input your name: ");
    scanf("%s",name);
    width=strlen(name)+3;
    printf("%*s\n",width,name); 
    
    return 0;
}

