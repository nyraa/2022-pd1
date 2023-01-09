#include <stdio.h>

int main()
{
    char c = 0;
    int credit = 0;
    int total_cradit = 0;
    float grade_point = 0;
    float grade_sum = 0;
    float GPA = 0;
    while((c = getchar()) != '\n')
    {
        if(c >= '0' && c <= '9')
        {
            grade_sum += credit * grade_point;
            credit = c - '0';
            total_cradit += credit;
        }
        else if(c >= 'A' && c <= 'Z')
        {
            grade_point = c <= 'C'?4 - (c - 'A'):0;
        }
        else if(c == '+' || c == '-')
        {
            grade_point += c == '+'?0.3:-0.3;
        }
    }
    grade_sum += credit * grade_point;
    GPA = grade_sum / total_cradit;
    printf("%.2f", GPA);
    return 0;
}