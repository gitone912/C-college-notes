#include <stdio.h>
#include <string.h>
int main()
{

    // char name[40];
    // printf("enter your name \n");
    // scanf("%s",name);
    // printf("ANSWER  is : %s \n",name);

    // char f[40];
    // printf("its gets method%s",f);
    // fgets(f,40,stdin);
    // puts(f);

    // char name[]="frozenOP";
    // int lenth=strlen(name);
    // printf("the total lenth of word is %d",lenth);

    // char oldval[]="frozen";
    // char newval[50];
    // strcpy(newval,oldval);
    // puts(newval);

    // char a[]="op";
    // char b[]="frozen";
    // puts(strcat(a,b));

    // char str1[] = "Appleyyyyyy";
    // char str2[] = "Banana";
    // printf("%d\n", strcmp(str1, str2));
    printf("enter string : ");
char str[100];
char ch;
int i = 0;
while(ch != '\n') {
scanf("%c", &ch);
str[i] = ch;
i++;
}
str[i] = '\0';
puts(str);
return 0 ;
}
