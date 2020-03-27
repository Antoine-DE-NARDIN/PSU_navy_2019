/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** otherfunc
*/

#include "navy.h"

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int a = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[a] != '\0') {
        dest[i] = src[a];
        a++;
        i++;
    }
    return (dest);
}

int my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i = i + 1)
        write(1, &str[i], 1);
    return (0);
}

int my_strcmp(char *str1, char *str2)
{
    for (int i = 0; str1[i] == str2[i]; i = i + 1) {
        if (str1[i] == '\0' && str2[i] == '\0')
            return (0);
        if ((str1[i] != '\0' && str2[i] == '\0') ||
(str1[i] == '\0' && str2[i] != '\0'))
            return (-1);
    }
    return (0);
}

long my_putnbr(long nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = - nb;
        if (nb == 2147483648) {
            nb = nb - 1;
        }
    }
    if (nb >= 10) {
        my_putnbr(nb/10);
        my_putchar(nb %10 + '0');
    }else{
        my_putchar(nb +'0');
    }
    return (0);
}

int char_to_int(char *str)
{
    int nb = 0;
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10 + (str[i] - 48);
        i = i + 1;
    }
    return (nb);
}