
#include<stdio.h>
#include<string.h>
void swap(char* a, char* b) 
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void per(char* s, int l, int h) 
{
    if (l == h) 
    {
        printf("%s\n", s);
    } 
    else 
    {
        for (int i = l; i <= h; i++) 
	{
            swap(&s[i], &s[l]);
            per(s, l + 1, h);
            swap(&s[i], &s[l]);
        }
    }
}
int main() 
{
    char s[10];
    int l, h;
    
    printf("Enter the string: ");
    scanf("%s", s);
    
    l = 0;
    h = strlen(s) - 1;
    
    printf("Permutations:\n");
    per(s, l, h);
    
    return 0;
}

