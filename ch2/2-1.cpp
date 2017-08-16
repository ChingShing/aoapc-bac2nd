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

/*
  习题2-2. 水仙花数（daffodil）
  刘汝佳
*/
/*
#include<stdio.h>
int main() {
  int a, b, c;
  for(a = 1; a <= 9; a++)
    for(b = 0; b <= 9; b++)
      for(c = 0; c <= 9; c++)
        if(a*a*a+b*b*b+c*c*c == a*100+b*10+c) printf("%d%d%d\n", a, b, c);
  return 0;
}
*/