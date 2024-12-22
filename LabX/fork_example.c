#include <stdio.h>
#include <unistd.h>

int main() {
    for (int i = 0; i < 3; i++) {
        pid_t pid = fork();

        if (pid < 0) {
            // Error during fork
            perror("Fork failed");
            return 1;
        } else if (pid == 0) {
            // Child process
            printf("Child Process: PID = %d, Parent PID = %d\n", getpid(), getppid());
        } else {
            // Parent process
            printf("Parent Process: PID = %d, Forked Child PID = %d\n", getpid(), pid);
            break; // Ensure parent doesn't fork multiple times
        }
    }
    return 0;
}

