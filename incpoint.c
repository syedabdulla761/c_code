#include<stdio.h>
void main()
{
    int i=9,o=8,*p;
    p=&i;
    printf("%x\n",p);
    printf("%d\n",*p);
    ++p;//pointer gets incremented to next address and *p shows the value present at tht address//
    //++p or p++ both do the same//
    printf("%x\n",p);
    printf("%d\n",*p);
}