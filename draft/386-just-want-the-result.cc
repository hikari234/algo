//
/* 386 - Just Want the Result */
//
#include <cstdio>
using namespace std;


int t;

int main ()
{
    int a, k, n, result;
    while ( ~scanf("%d%d%d", &a, &k, &n) )
    {
        a = a % n;
        a = a % k;
        result = 1;

        while ( k-- )
        {
            result *= a;
            if ( n&(n-1) )
                result %= n;
            else
                result = result & (n-1);
        }
        printf("%d\n", result);
    }
    return 0;
}

