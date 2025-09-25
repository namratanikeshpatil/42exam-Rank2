#include<unistd.h>
char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while(s2[i] != '\0')
    {
        s1[i]= s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}

int main()
{
    char s1[20]="Hello";
    char s2[]= "m.sdajfjkhriyfghjfvejhwyelihjeknWorld";
    ft_strcpy(s1,s2);
     write(1, s1, 5);  // print "World"
    write(1, "\n", 1);
    return(0);
}
