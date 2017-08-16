//
//  main.cpp
//  20180816
//
//  Created by chingshing on 17/8/16.
//  Copyright © 2017年 com.sjtu. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define MOD 1000000

int main()
{
    long long n,m;
    int kase=0;
    while(scanf("%lld %lld",&n, &m) && n && m)
    {
        if(n >= m)
        {
            printf("Case %d: No answer\n",++kase);
            break;
        }
        
        double s=0;
        while(n <= m)
        {
            long long n2 = n*n;
            double n3 = n2;
            double n4 = MOD/n3;
            //printf("%f\t",n4);
            s += n4;
            n++;
        }
        /*
         Note: no need to consider in this case
         s=floor(s+5)/MOD;
         */
        s=s/MOD;

        printf("Case %d: %.5f\n",++kase,s);
        
    }
    

    return 0;
}

/*
 习题2-4. 子序列的和（subsequence）
 刘汝佳
 本题的陷阱是：如果写成sum += 1.0/(i*i)的话，会在计算i*i的时候溢出
 */
/*
#include<stdio.h>
int main() {
    int i, n, m;
    scanf("%d%d", &n, &m);
    
    double sum = 0;
    for(i = n; i <= m; i++) {
        sum += 1.0 / i / i;
    }
    printf("%.5lf\n", sum);
    return 0;
}
*/
