// In order to save disk space, information about student is stored in
// an integer variable. Bit numbers 0 to 3 indicate whether the student
// is a I
// st year, IInd year, IIIrd year or IVth year student respectively. Bits 4
// to 7 indicate whether the student's stream is Mechanical, Chemical,
// Electronics or CS. Rest of the bits store room number. Such data for
// 4 students is stored in the following array:
// int data[ ] = { 273, 548, 786, 1096 } ;

# include <stdio.h>
#define _BV( x ) 1 << x 
int main(){
    int i,num,roomnum;
    unsigned short int data[]={273,548,786,1096};
    for(i=0;i<4;i++)
    {
        num=data[i];
        if((num &_BV(0))==_BV(0))
            printf("Ist year student\n");
        if((num &_BV(1))==_BV(1))
            printf("IInd year student\n");
        if((num &_BV(2))==_BV(2))
            printf("IIIrd year student\n");
        if((num &_BV(3))==_BV(3))
            printf("IVth year student\n");
        if((num &_BV(4))==_BV(4))
            printf("Mechanical\n");
        if((num &_BV(5))==_BV(5))
            printf("Chemical\n");
        if((num &_BV(6))==_BV(6))
            printf("Electronics\n");
        if((num &_BV(7))==_BV(7))
            printf("CS\n");
        roomnum=num>>8;
        printf("Room Number : %d\n",roomnum);
    }
    return 0;
}