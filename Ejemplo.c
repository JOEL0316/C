#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    char buffer[100];
    int fd = open("archivo.txt", O_RDONLY);
    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1; // Termina el programa con un código de error
    }

    ssize_t bytes_read = read(fd, buffer, sizeof(buffer));
    close(fd);

    if (bytes_read == -1) {
        perror("Error al leer el archivo");
        return 1; // Termina el programa con un código de error
    }

    if (bytes_read > 0) {
        printf("Contenido del archivo: %.*s\n", (int)bytes_read, buffer);
    }

    return 0;
}
