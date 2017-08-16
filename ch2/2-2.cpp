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
    freopen("test.in","r",stdin);

    int kase=0,a=0,b=0,c=0,s=0;
    
    while(scanf("%d %d %d",&a,&b,&c)==3 && a<3 && b<5 && c<7)
    {
        if(a<0 || b<0 || c<0)
        {
            printf("Case %d: No answer\n",++kase);
            break;
        }
        
        for(int i=0;;i++)
        {
            s=i*7+c;
            if(s%3==a &&s%5==b)
                break;
            else if(s>100)
                break;
        }
        
        if(s<101 && s>9)
        {
            printf("Case %d: %d\n",++kase,s);
        }
        else
        printf("Case %d: No answer\n",++kase);
    }

    return 0;
}
/*
  习题2-3. 韩信点兵（hanxin）
  刘汝佳
*/
/*
#include<stdio.h>
int main() {
  int i, a, b, c, n = -1;
  scanf("%d%d%d", &a, &b, &c);
  for(i = 10; i <= 100; i++)
    if(i % 3 == a && i % 5 == b && i % 7 == c) {
      n = i;
      break;
    }
  if(n < 0) printf("No answer\n");
  else printf("%d\n", n);
  return 0;
}
*/