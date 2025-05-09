/// week12-2.cpp
/// Fibonacci ¼Æ¦C ¬O¬Æ»ò
/// 2 3 5 7 11 13 17 19 23 29 31
/// 1 3 5 7 9 11 13 15 17
/// 1 1 2 3 5 8 13 21 34
#include <stdio.h>
int main()
{
    int a[30] = {0, 1};
    printf("1 ");
    for(int i=2; i<30; i++){
        a[i] = a[i-1] + a[i-2];
        printf("%d ", a[i] );
    }
}
