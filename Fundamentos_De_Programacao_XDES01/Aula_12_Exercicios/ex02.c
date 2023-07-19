#include <stdio.h>

int primo(int n);

int main()
{
    int num;

    scanf("%d", &num);
    printf("%d", primo(num));

    return 0;
}

int primo(int n)
{
    int i;

    for (i=2; i<=n/2; i++)
    {
        if (n % i == 0)
        {
            return 0;
            break;
        }
    }

    return 1;
}