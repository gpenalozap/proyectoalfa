#include<stdio.h>

long long int ssquare(long long int n, long long int p) {
    int nm;
    long long int r;
    if (p == 0)
        return 1;
    nm = n % 2006;
    r = ssquare(nm, p / 2);
    r = (r * r) % 2006;
    if (p % 2 == 0)
        return r;
    return (r * nm) % 2006;
}

int main()
{
  long long int r, n;

  while(1)
  {
    scanf("%lld",&n);
    if(n==0) break;

    r = ssquare(n, n) % 2006;

    printf("%lld\n",r);
  }



return 0;
}
