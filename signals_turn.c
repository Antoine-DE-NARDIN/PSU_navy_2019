/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** signals_turn
*/

#include "navy.h"

void signal_go(char *str, pid_t pid)
{
    int x = (str[0] - 65) * 2 + 2;
    int y = str[1] - 48 + 1;
    nav->x = x;
    nav->y = y;

    while (x != 0) {
        kill(pid, SIGUSR1);
        usleep(1000);
        x = x - 1;
    }
    kill(pid, SIGUSR2);
    usleep(1000);
    while (y != 0) {
        kill(pid, SIGUSR1);
        usleep(1000);
        y = y - 1;
    }
    kill(pid, SIGUSR2);
}