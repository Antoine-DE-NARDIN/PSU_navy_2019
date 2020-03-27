/*
** EPITECH PROJECT, 2020
** navy
** File description:
** str_to_tab
*/

#include "navy.h"

int lim(char c, char *limi)
{
    int   i = 0;

    while (limi[i]) {
        if (c == limi[i])
            return (-1);
        i = i + 1;
    }
    return (0);
}

int	for_lim(char const *str, int i, char *limi)
{
    if (lim(str[i], limi) == -1) {
        while (lim(str[i], limi) == -1) {
            i = i + 1;
        }
        i = i - 1;
    }
    return (i);
}

int word(char const *str, char *limi)
{
    int i = 0;
    int	res = 1;

    while (str[i] != '\0') {
        i = for_lim(str, i, limi);
        res = res + 1;
        i = i + 1;
    }
    return (res);
}

int size(char *str, int i, char *limi)
{
    int	size = 0;

    while (lim(str[i], limi) == 0 && str[i]) {
        size = size + 1;
        i = i + 1;
    }
    return (size);
}

char **str_to_tab(char *str, char *limi)
{
    int nb_word = word(str, limi) + 2;
    int i = 0;
    char **tab = NULL;
    int j = 0;
    int k = 0;

    tab = malloc(sizeof(char *) * nb_word + 1);
    while (str[i]) {
        j = 0;
        for (i = i; (lim(str[i], limi) == -1 && str[i]); i = i + 1);
        tab[k] = malloc(sizeof(char) * (size(str, i, limi) + 1));
        for (i = i; lim(str[i], limi) == 0 && str[i]; i = i + 1 , j = j + 1)
            tab[k][j] = str[i];
        tab[k][j] = '\0';
        k = k + 1;
        for (i = i; (lim(str[i], limi) == -1 && str[i]); i++);
    }
    tab[k] = NULL;
    return (tab);
}