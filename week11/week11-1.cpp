///week11-1.cpp
///�禡
#include <stdio.h>
///�e�� �w�q �禡
///�e�X int ���
/// �e�i�h���a,���b
int addnum(int a, int b)
{
    printf("�b�禡addnum()��, �o��Ѽ�a:%d b:%d\n", a, b);
    int ans = a + b;
    printf("��X���� %d �n return �X�h��\n", ans);
    return ans;///�⵲�G��X�ӨöǥX�h
}
int main()
{///�D�n���禡
    printf("�bmain() �I�s�ϥ� addnum() \n");
    int ans = addnum(2, 3);
    printf("�b main() �o�쵪��:%d\n", ans);
}
