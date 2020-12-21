#include<stdio.h>
int main()
{
char c;
int a,b;
printf("enter an alphabet");
scanf("%c",&c);
a=(c == 'a'|| c == 'e'|| c == 'i'|| c == 'o' || c== 'u');
b=(c == 'A'|| c == 'E'|| c == 'I'|| c == 'O' || c== 'U');
if(a||b)
printf("%c is a vowel",c);
else
printf("%c is a consonant",c);
return 0;
}
