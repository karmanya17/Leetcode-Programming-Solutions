#include<stdio.h>
#include<string.h>

int getChar(char c){
    int result=0;
    if(c=='I')
    {
        result=1;
    }
    else if(c=='V')
    {
        result=5;
    }
    else if(c=='X')
    {
        result=10;
    }
    else if(c=='L')
    {
        result=50;
    }
    else if(c=='C')
    {
        result=100;
    }
    else if(c=='D')
    {
        result=500;
    }
    else if(c=='M')
    {
        result=1000;
    }
    else{
        result=0;
    }

    return result;
}

int romanToInt(char * s){
    int n=0;
    for(int i=0;i<strlen(s);i++)
    {
    if(getChar(s[i])>=getChar(s[i+1]))
        n+=getChar(s[i]);
    else
    {
        n+=getChar(s[i+1])-getChar(s[i]);
        i++;
    }

    }
    return n;
}

int main()
{
  char s[15];                               //Constraint  1<= Size of string <=15
  printf("Enter the Roman Number");
  scanf("%s",s);
  printf("Integer=  %d",romanToInt(s));
  return 0;
}
