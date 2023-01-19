//MD. HASNAIN ALI (UNSOLVED)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

#define MAX(a,b) (a>b? a:b)
#define SWAP(a,b) {        \
                    a=a+b; \
                    b=a-b; \
                    a=a-b; }
#define ll long long



int main(void) {

  ll a,sum;
  scanf("%lld",&a);
  if(a<=0)
  {
      a=fabs(a);
      sum=(a*(a+1))/2;
      sum=(sum*-1)+1;
  }
  else
  {
      sum=(a*(a+1))/2;
  }
  printf("%lld\n",sum);

  return 0;
}
