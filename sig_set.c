/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** sig
*/

#include "navy.h"

void set_sigaction(int signum, void *func)
{
    struct sigaction sa;

    sigemptyset(&sa.sa_mask);
    sa.sa_sigaction = func;
    sa.sa_flags = SA_SIGINFO;
    sigaction( signum, &sa, NULL);
}

void set_sigusr(void *func)
{
    set_sigaction(SIGUSR1, func);
    set_sigaction(SIGUSR2, func);
}

void set_sig_x(int signum, UNUSED siginfo_t *siginfo)
{
    if (signum == SIGUSR1)
        nav->x += 1;
    if (signum == SIGUSR2)
        nav->stop = 1;
}

void set_sig_y(int signum, UNUSED siginfo_t *siginfo)
{
    if (signum == SIGUSR1)
        nav->y += 1;
    if (signum == SIGUSR2)
        nav->stop = 1;
}

void set_sig_hit(int signum)
{
    if (signum == SIGUSR1)
        nav->hit += 1;
    if (signum == SIGUSR2)
        nav->stop = 1;
}