#include<unistd.h>
#include<stdio.h>
int	ft_strlen(char *str)
{
    int i = 0;
    while(*str != '\0')
    {
        str++;
        i++;
    }
    return(i);
}
int main()
{
    int a=ft_strlen("Hello");
    printf("%d\n",a);
    return(0);
}