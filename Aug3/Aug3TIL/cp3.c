#include <stdio.h>
#define MAX 246913
int main(){
    int N;
    int op;
    int prime_number[MAX] = { 0 };
    int arr[123456];
    long long i, j, k=0;
    for (i = 2; i<= MAX; i++)
    {
        if (!prime_number[i])
        {
            arr[k++] = i;
            for (j = i *i; j <= MAX; j += i)
            {
                prime_number[j] = 1;
            }
        }
    }
    while (1)
    {
        scanf("%d", &op);
        if (op == 0)
            break;
        else
        {
            int cnt = 0;
            for (i=0;i<k;i++)
            {
                if (arr[i] > op)
                {
                    if (arr[i] <= op * 2)
                        cnt++;
                    else
                        break;
                }
            }
            printf("%d\n", cnt);
        }
    }
 return 0;
}