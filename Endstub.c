#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<assert.h>
int end_stub(char x,char y,char z)
{
    if (x==y)
    {
        if (y==z)
            return 1;
    }
    return 0;
}
int main()
{
    //testcase_of_end_function();
    int actual=end_stub('x','x','x');
    int expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    actual=end_stub('0','0','0');
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

}