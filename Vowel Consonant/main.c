#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z'))
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'||
                ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }

    }

    else{
        printf("Invalid key!\nEnter a alphabet.\n");
    }

    return 0;
}
