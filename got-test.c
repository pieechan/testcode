#include <stdio.h>

int main()
{
    unsigned int *ptr1, *ptr2, *ptr3, *ptr4;
    unsigned int a, b, c;


   ptr1 = &&L1;
   ptr2 = &&L2;
   ptr3 = &&L3;
   ptr4 = &&L4;

   goto *ptr4;

L1:goto *ptr4;
L2:goto *ptr1;
L3:goto *ptr2;
L4:printf("L1=%p %x \nL2=%p %x \nL3=%p %x  \nL4=%p %x\n", ptr1, *ptr1, ptr2, *ptr2,  ptr3, *ptr3, ptr4, *ptr4);
   goto *ptr3;


    return 0;
}
