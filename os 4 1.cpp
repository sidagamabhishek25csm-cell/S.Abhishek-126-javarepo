#include <stdio.h>

int main()
{
    int at[] = {1, 5, 9, 10};
    int bt[] = {4, 3, 5, 2};
    int n = 4;
    int i, ct = 0, idle = 0;

    printf("P\tAT\tBT\tCT\n");

    for (i = 0; i < n; i++)
    {
        if (ct < at[i])
        {
            idle += at[i] - ct;
            ct = at[i];
        }

        ct += bt[i];

        printf("P%d\t%d\t%d\t%d\n",
               i + 1, at[i], bt[i], ct);
    }

    printf("\nCPU Idle Time = %d\n", idle);

    return 0;
} 