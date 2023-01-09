#include <stdio.h>

int sum(int *data_range, int len, int a, int b, int (*eq)(const int*, const int*, const int*))
{
    int sum = 0;
    for(int i = 0; i < len; ++i)
        sum += (*eq)(&a, &b, data_range + i);
    return sum;
}
int main()
{
    int n, t, value, a, b;
    int score[1024];
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &value);
        score[i] = value;
    }
    scanf("%d", &t);
    for(int i = 0; i < t; ++i)
    {
        scanf("%d %d", &b, &a);
        printf("%d %d %d\n", sum(score, n, a, b, ({int lower_than_b(const int *a, const int *b, const int *v) {return *v<*b;}&lower_than_b;})), sum(score, n, a, b, ({int between_a_and_b(const int *a, const int *b, const int *v) {return *v >= *b && *v < *a;}&between_a_and_b;})), sum(score, n, a, b, ({int higher_than_a(const int *a, const int *b, const int *v){return *v >= *a;}&higher_than_a;})));
    }
    return 0;
}