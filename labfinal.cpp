#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50], ch, i;
    while(1){printf("Enter any string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='o'|| str[i]=='O')
        {
            //tem1=str[i];
            ch='p';
            str[i] = ch;
        }
        else if(str[i]=='e' || str[i]=='E')
        {
            ch='f';
            str[i]=ch;
        }
        else if(str[i]=='a'|| str[i]=='A')
        {
            ch='b';
            str[i]=ch;
        }
    }
    printf("\nNew String (after replacing vowel with %c) = %s", ch, str);
    printf("\n\n");
    }
    getch();
    return 0;
}
