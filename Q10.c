#include <stdio.h>
int main()
{
    int DD, MM, YYYY;
    printf("enter today date\n");
    scanf("%d", &DD);
    printf("enter today month\n");
    scanf("%d", &MM);
    printf("enter today year\n");
    scanf("%d", &YYYY);

    printf("Day -%d ,month - %d ,year - %d,", DD, MM, YYYY);

    return 0;
}