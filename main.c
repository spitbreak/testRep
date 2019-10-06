#include <string.hpp>
#include <stdio.h>

struct foo
{
    int m_nPro1;
    short m_nsPro2;
};

int main(int argc, char** argv)
{
    char szBuff[10];
    *(int*)szBuff = 10;
    printf("foo->m_nPro1 = %d\n", ((struct foo*)szBuff)->m_nPro1);

    return 0;
}
