#include <stdio.h>
#include <conio.h>
int radius , area;
int main(void)
{
    printf("Type radius of circle");
    scanf("%d" , &radius);
    area = (int) (3.14 * radius * radius);
    printf("\n area=%d", area );
    return 0;
}