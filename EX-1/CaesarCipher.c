#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
        char s[50];
        scanf("%s",s);
        int k;
        scanf("%d",&k);
        for(int i=0;i<strlen(s);i++)
        {
                if(isalpha(s[i]))
                {
                        if(isupper(s[i]))
                        {
                                s[i]-=65;
                                s[i]+=k;
                                s[i]%=26;
                                s[i]+=65;
                        }
                        else if(islower(s[i]))
                        {
                                s[i]-=97;
                                s[i]+=k;
                                s[i]%=26;
                                s[i]+=97;
                        }

                }
        }
        printf("%s",s);
}