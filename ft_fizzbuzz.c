#include<unistd.h>
void ft_putnumber(int n)
{
    char c;
    if(n >=10)
        ft_putnumber(n/10);
    c = ( n % 10 ) + '0';
    write(1,&c,1);
}

void ft_fizzbuzz(int i)
{
    if( i > 100)
        return;
    if( i % 3 == 0 && i % 5 == 0)
        write(1,"fizzbuzz",8);
    else if( i % 3 == 0)
        write(1,"fizz",4);
    else if( i % 5 == 0)
        write(1,"buzz",4);
    else
        ft_putnumber(i);
    write(1,"\n",1);
    ft_fizzbuzz(i + 1);
    
}

int main(void)
{
    ft_fizzbuzz(1);
    return(0);
}
