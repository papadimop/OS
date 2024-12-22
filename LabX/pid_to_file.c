#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd = open("pids.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0) {
        perror("File open failed");
        return 1;
    }

    pid_t pid = fork();

    if (pid == 0) { // Child
        dprintf(fd, "Child PID: %d\n", getpid());
    } else { // Parent
        dprintf(fd, "Parent PID: %d\n", getpid());
    }

    close(fd);
    return 0;
}
