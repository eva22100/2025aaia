///week11-1.cpp
#include <stdio.h>
int addnum(int a,int b)
{
    printf("�b���addnum()��,�o��Ѽ�a:%d b:%d\n",a,b);
    int ans=a+b;
    printf("��X����%d�nreturn�X�h��\n",ans);
    return ans;
}
int main()
{
    printf("�bmain()�I�s�ϥ�addnum()\n");
    int ans=addnum(2,3);
    printf("�o�쵪��:%d\n",ans);
}
