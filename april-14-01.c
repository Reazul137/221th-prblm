#include<stdio.h>

union job {

char name[32];
float salary;
int worker_no;
}u;

struct job1 {
char name[32];
float salary;
int worker_no;
}s;

int main()
{
    printf("Size of union = %d", sizeof(u));
    printf("\n Size of structure = %d", sizeof(s));

    return 0;
}
