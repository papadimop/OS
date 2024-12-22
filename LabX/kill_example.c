#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void handle_signal(int sig) {
    printf("Child received signal: %d\n", sig);
    exit(0);
}

int main() {
    pid_t pid = fork();

    if (pid == 0) { // Child
        signal(SIGUSR1, handle_signal);
        while (1) pause(); // Wait for signal
    } else { // Parent
        sleep(1); // Ensure child sets up signal handler
        kill(pid, SIGUSR1);
        printf("Parent sent signal to child.\n");
    }
    return 0;
}
