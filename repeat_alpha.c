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
        char c ;
        c = *str ;
        if( c >= 65 && c <= 90)
        {
            i = c - 64;
            ft_putchar(c,i);
        }
        else if( c >= 97 && c <= 122)
        {
            i = c - 96;
            ft_putchar(c,i);
        }
        else
        {
            ft_putchar(c, 1);
        }
        str++;
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