//perform addition,subtraction,multiplication,divition as user requierment(using structure pointer)
#include<stdio.h>
#include<math.h>
int a,b;
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);
int pw(int,int);
int add(int a,int b)
{
    int c;
    c=a+b;
}
int sub(int a,int b)
{
    int d;
    d=a-b;
}
int mul(int a,int b)
{
    int e;
    e=a*b;
}
int div(int a,int b)
{
    int f;
    f=a/b;
}
int mod(int a,int b)
{
    int g;
    g=a%b;
}
int pw(int a,int b)
{
    int h;
    h=pow(a,b);
}
int main()
{
    int ch,x,y,ans;
    do
    {
      printf("\nEnter your choice\n 1)Addition\n 2)Subtraction \n 3)multiplication \n 4)division \n 5)modulo \n 6)power \n 7)Exit \n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("Enter two no:");
        scanf("%d%d",&x,&y);
        ans=add(x,y);
        printf("\n ans:%d",ans);
        break;
        case 2:
        printf("Enter two no:");
        scanf("%d%d",&x,&y);
        ans=sub(x,y);
        printf("\n ans:%d",ans);
        break;
        case 3:
        printf("Enter two no:");
        scanf("%d%d",&x,&y);
        ans=mul(x,y);
        printf("\n ans:%d",ans);
        break;
        case 4:
        printf("Enter nominator:");
        scanf("%d",&x);
        printf("Enter denominator:");
        scanf("%d",&y);
        ans=div(x,y);
        printf("\n ans:%d",ans);
        break;
        case 5:
        printf("\nEnter no:");
        scanf("%d",&x);
        printf("\nEnter divider:");
        scanf("%d",&y);
        ans=mod(x,y);
        printf("\n ans:%d",ans);
        break;
        case 6:
        printf("\nEnter base:");
        scanf("%d",&x);
        printf("\nEnter power:");
        scanf("%d",&y);
        ans=pw(x,y);
        printf("\n ans:%d",ans);
        break;
    }

    }
    while(ch!=7);

}
