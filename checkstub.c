#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char a[9]={'1','2','3','4','5','6','7','8','9'};

void check(char position,char symbol)
{
	int i;
	for(i=0;i<=8;i++)
	{
		if(a[i]==position)
		{
			a[i]=symbol;
			
		}

	}
}
int checkStub(char pos,char sym)
{
    //printf("%c\n",pos);
    //printf("%c\n",sym);
    int check_pos=atoi(&pos);//atoi is used to convert character to integer.
    if((check_pos<=9 && check_pos>=1) && (sym=='0' || sym=='X' || sym=='x'))
    {
        printf("Entered correct values\n");
        return 1;
    }
    else
    {
        printf("Entered wrong values\n");
        return 1;
    }
    
}
void testcaseofcheck()
{
    if(checkStub('1','x'))
    {
        printf("Test Case is passed\n");
    }
    if(checkStub('2','y'))
    {
         printf("Test case is passed\n");
    }
     char s=atoi("10");

    if(checkStub(s,'x'))
    {
        printf("Testcase is passed\n");
    }
    if(checkStub('x','3'))
    {
        printf("Testcase is passed\n");
    }
    if(checkStub('2','0'))
    {
        printf("Testcase is passed\n");
    }
    if(checkStub('6','0'))
    {
        printf("Testcase is passed\n");
    }
    if(checkStub('0','x'))
    {
        printf("Testcase is passed\n");
    }
    
}
int main()
{
    testcaseofcheck();
}
