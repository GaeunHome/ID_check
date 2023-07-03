#include <stdlib.h>
#include <stdio.h>
 
int main()
{
    int id, idnum;
    int check1, check2;
    int sum=0, time=0;
    int bonus[9]={1,1,2,3,4,5,6,7,8};
    while(scanf("%d%d", &id, &idnum)!=EOF)
    {
        switch(id)
        {
            case 1: id = 10; break;  case 14: id = 22; break;
            case 2: id = 11; break;  case 15: id = 35; break;
            case 3: id = 12; break;  case 16: id = 23; break;
            case 4: id = 13; break;  case 17: id = 24; break;
            case 5: id = 14; break;  case 18: id = 25; break;
            case 6: id = 15; break;  case 19: id = 26; break;
            case 7: id = 16; break;  case 20: id = 27; break;
            case 8: id = 17; break;  case 21: id = 28; break;
            case 9: id = 34; break;  case 22: id = 29; break;
            case 10: id = 18; break; case 23: id = 32; break;
            case 11: id = 19; break; case 24: id = 30; break;
            case 12: id = 20; break; case 25: id = 31; break;
            case 13: id = 21; break; case 26: id = 33; break;
        }
        check1 = id%10;
        id /= 10;
        sum = id*1 + check1*9;
        int count=0;
        while(count<9)
        {
            check2 = idnum%10;
            idnum/=10;
            sum = sum + check2*bonus[count];
            count++;
        }
        if(sum%10==0)
            printf("1\n");
        else
            printf("0\n");
    }
}
