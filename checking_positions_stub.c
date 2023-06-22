#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int checking_positions(char a[],int pos[])
{
    int i=0;
    if(a[pos[i%3]]==a[pos[(i+1)%3]])
    {
        if(a[pos[(i+1)%3]]==a[pos[(i+2)%3]])
        {
            if(a[pos[i]]=='x')
            {
                printf("Player1 Wins\n");
                return 1;
            }
            else
            {
                printf("Player2 Wins\n");
                return 1;
            }
            
        }
    }
    return 0;
}
int main()
{
    //testcase_of_end_function();
    char a[9]={' ','x','x','x'};
    int pos[3]={1,2,3};
    int actual=checking_positions(a,pos);
    int expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a1[9]={' ','0','0','0'};
    int pos1[3]={1,2,3};
    actual=checking_positions(a1,pos1);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a2[9]={' ','x',' ',' ','x',' ',' ','x'};
    int pos2[3]={1,4,7};
    actual=checking_positions(a2,pos2);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a3[9]={' ','0',' ',' ','0',' ',' ','0'};
    int pos3[3]={1,4,7};
    actual=checking_positions(a3,pos3);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a4[9]={' ',' ','x',' ',' ','x',' ',' ','x'};
    int pos4[3]={2,5,8};
    actual=checking_positions(a4,pos4);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a5[9]={' ',' ','0',' ',' ','0',' ',' ','0'};
    int pos5[3]={2,5,8};
    actual=checking_positions(a5,pos5);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a6[10]={' ',' ',' ','x',' ',' ','x',' ',' ','x'};
    int pos6[3]={3,6,9};
    actual=checking_positions(a6,pos6);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a7[10]={' ',' ',' ','0',' ',' ','0',' ',' ','0'};
    int pos7[3]={3,6,9};
    actual=checking_positions(a7,pos7);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a8[9]={' ',' ',' ','x',' ','x',' ','x'};
    int pos8[3]={3,5,7};
    actual=checking_positions(a8,pos8);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a9[9]={' ',' ',' ','0',' ','0',' ','0'};
    int pos9[3]={3,5,7};
    actual=checking_positions(a9,pos9);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a10[10]={' ','x',' ',' ',' ','x',' ',' ',' ','x'};
    int pos10[3]={1,5,9};
    actual=checking_positions(a10,pos10);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a11[10]={' ','0',' ',' ',' ','0',' ',' ',' ','0'};
    int pos11[3]={1,5,9};
    actual=checking_positions(a11,pos11);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a12[9]={' ',' ',' ',' ','x','x','x'};
    int pos12[3]={4,5,6};
    actual=checking_positions(a12,pos12);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

    char a13[9]={' ',' ',' ',' ','0','0','0'};
    int pos13[3]={4,5,6};
    actual=checking_positions(a13,pos13);
    expected=1;
    assert(actual==expected);
    printf("Assertion passed\n");

}