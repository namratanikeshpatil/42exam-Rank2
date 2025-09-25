#include<unistd.h>
void	ft_putstr(char *str)
{
    int i = 0;
    while(*str != '\0')
    {
        write(1,str,1);
        str++;
        i++;
    }
}

int main(void)
{
    ft_putstr(" hghjfdgb");
    write(1,"\n",1);
    return(0);
}