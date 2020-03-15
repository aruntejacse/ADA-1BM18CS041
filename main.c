#include<stdio.h>
#include<string.h>

int stringMatch(char s[],char p[],int sl,int pl)
{
    int j;
    for(int i=0;i<sl-pl;i++){
        j=0;
        while(j<pl && p[j]==s[i+j]){
            j++;
        }
    if(j==pl) return i+1;
    }
    return -1;
}

void main()
{
    char s[200];
    char p[200];
    int result;
    printf("Enter the string:");
    fgets(s,200,stdin);
    printf("Enter the pattern:");
    fgets(p,200,stdin);
    s[strlen(s)-1]='\0';
    p[strlen(p)-1]='\0';
    result = stringMatch(s,p,strlen(s),strlen(p));
    printf("%d",result);
}
