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
    //freopen("test.in","r",stdin);
    int n=0,i=0,j=0,k=0;
    scanf("%d",&n);
    while(n--)
    {
        k=j++;
        while(k--)
            printf(" ");
        
        i=2*n+1;
        while(i--)
            printf("#");
        printf("\n");
    }
    

    return 0;
}
