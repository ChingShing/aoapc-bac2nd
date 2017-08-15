//
//  main.cpp
//  20180815
//
//  Created by chingshing on 17/8/15.
//  Copyright © 2017年 com.sjtu. All rights reserved.
//

#include <stdio.h>

int main()
{
    int n=100;
    while(n<1000)
    {
        int a=n/100,b=n/10-10*a,c=n%10;
        int s=a*a*a+b*b*b+c*c*c;
        if(n == s)
            printf("%d\n",n);
        n++;
    }

    return 0;
}
