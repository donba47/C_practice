#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct
    {
        int length;
        int width;
    } rectangle1,rectangle2={30,20};

    printf("請輸入長與寬：\n");
    printf("ex：長=%d 寬=%d ",rectangle2.length,rectangle2.width);
    scanf("%d %d",&rectangle1.length,&rectangle1.width);
    printf("長=%d 寬=%d ",rectangle1.length,rectangle1.width);
    return 0;
}
