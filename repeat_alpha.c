#include<unistd.h>
 void    ft_putchar(char c, int i)
{
    while( i > 0 )
    {
        write(1,&c,1);
        i--;    
    }
}
void    repeat_alpha( char *str)
{
    while( *str != '\0')
    {
        int i ;
        if( *str >= 65 && *str <= 90)
        {
            i = *str - 64;
            ft_putchar(*str,i);
            str++;
        }
        else if( *str >= 97 && *str <= 122)
        {
            i = *str - 96;
            ft_putchar(*str,i);
            str++;
        }
        else
        {
            ft_putchar(*str, 1);
            str++;
        }
    }
} 

int main(int ac , char **av)
{
    if(ac == 2)
    {
        repeat_alpha(av[1]);
    }
    write(1,"\n",1);
    return (0);
}