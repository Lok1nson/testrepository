#include <stdio.h>
#include <conio.h>

int func (int a,int b);

int main ()
{
    int x;
    int y;
    printf("x:\n");
    scanf("%d",&x);
    printf("y:\n");
    scanf("%d",&y);
    printf("%d+%d=%d",x,y,func(x,y));
    getch ();
    return 0;
}

int func (int a,int b)
{
    return (a+b);
}