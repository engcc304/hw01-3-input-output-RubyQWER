/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>
int main() {
    char a [50];
    char b [50];
    printf("First Name: ");
    scanf("%s", a);

    printf("Last Name: ");
    scanf("%s", b);
    
    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand\n", a, b);
    
    char C [50];
    char d [50];

    printf("First Name: ");
    scanf("%s", C);

    printf("Last Name: ");
    scanf("%s", d);

    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand\n", C, d);

    return 0;
}//end function
