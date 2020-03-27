/*
** EPITECH PROJECT, 2020
** PSU_navy_2019
** File description:
** signals_handeling
*/

#include "navy.h"

void receive_sigals(int player)
{
    struct sigaction *action = malloc(sizeof(struct sigaction));
    sigemptyset(&action->sa_mask);
    pid_t pid = getpid();
    action->sa_flags = 0;
    action->sa_flags = SA_SIGINFO;
    action->sa_sigaction = &steal_pid;

    my_putstr("my_pid: ");
    my_putnbr(pid);
    my_putchar('\n');
    if (player == 2) {
        my_putstr("waiting for enemy connection...\n");
        sigaction(SIGUSR1, action, NULL);
        pause();
        my_putstr("enemy connected\n");
    }else{
        sigaction(SIGUSR1, action, NULL);
        pause();
        my_putstr("successfuly connected\n");
    }
}

void steal_pid(int val, siginfo_t *inf, UNUSED void *lol)
{
    nav = malloc(sizeof(navy));
    if (val == 10) {
        nav->hit = 1;
        nav->player_pid = inf->si_pid;
    }
}