#include <stdio.h>
int a[105];
int main()
{
	int i, cas, n, pos, ans, sum, min;
	scanf("%d", &cas);
	while (cas--)
	{
		min = 999999;
		scanf("%d", &n);
		sum = 0;
		ans = 0;
		pos = 0;
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			sum += a[i];
			if (a[i] < min)
			{
				min = a[i];
				pos = i;
			}
		}
		int flag = 1;
		for (i = 0; i < n; i++)
		{
			if (a[i] != min)
				break;
		}
		if (i == n)
		{
			printf("0\n");
			continue;
		}
		while (1)
		{
			min++;
			if ((min * n - sum) == (min - a[pos]) * (n - 1))
				break;
		}
		printf("%d\n", min - a[pos]);
	}
	return 0;
}