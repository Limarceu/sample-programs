#include<stdio.h>
int main()
{
    char arr[] = "geeksforgeeks";
    char *ptr1 = arr;
    char *ptr2 = ptr1 + 3;
    printf ("ptr2 - ptr1 = %ld\n", ptr2 - ptr1);
    printf ("(int*)ptr2 - (int*) ptr1 = %ld",  (int*)ptr2 - (int*)ptr1);
    getchar();
    return 0;
}
