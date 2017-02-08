#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,cases ,a,b,c,add,sub1,sub2,mul,div1,div2;
    printf("enter the number of cases\n");
    scanf("%d",&cases);

    for(i=1;i<=cases;i++)
    {

    printf("Enter Three numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    add=a+b;
    sub1=a-b;
    sub2=b-a;
    mul=a*b;
    div1=a%b;
    div2=b%a;

if(add==c)
{
    printf("It is possible\n");
}
else if(sub1==c)
{
    printf("It is possible\n");
}
else if(sub2==c)
{
    printf("It is possible\n");
}
else if(mul==c)
{
    printf("It is possible\n");
}
else if(div1==c)
{
    printf("It is possible\n");
}
else if(div2==c)
{
    printf("It is possible\n");
}

else
    {
    printf("It is not possible\n");
    }
}
}
