//
//  main.cpp
//  20180816
//
//  Created by chingshing on 17/8/16.
//  Copyright © 2017年 com.sjtu. All rights reserved.
//

/*
 Notes:My 1st-editon code has bugs in calculating times of occurrences!
 So it produces many wrong answer!
*/
/*
 //1st edition
#include <stdio.h>

int main()
{
    for(int i=123;i<330;i++)
    {
        int a=0,b=0,c=0,s=0;
        for(int j=i;j<=i*3;j+=i)
        {
            c=j%10;
            a=j/100;
            b=j/10-a*10;
            if(!a || !b || !c)
                break;
            else{
                s+=a;
                s+=b;
                s+=c;
            }
        }
        if(s==45)
            printf("%d %d %d\n",i, 2*i,3*i);
    }

    return 0;
}
*/

//2nd editon from the author
#include<stdio.h>
int main() {
    int abc;
    for(abc = 123; abc <= 329; abc++) {
        int def = abc*2;
        int ghi = abc*3;
        int big = abc * 1000000 + def * 1000 + ghi;
        int ok = 1, d;
        for(d = 1; d <= 9; d++) {
            int n = big;
            int seen = 0;
            while(n > 0) {
                if(n % 10 == d) seen = 1;
                n /= 10;
            }
            if(!seen) {
                ok = 0; //数字d没有出现
                break;
            }
        }
        if(ok) printf("%d %d %d\n", abc, def, ghi);
    }
    return 0;
}


