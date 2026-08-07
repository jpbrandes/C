#include <stdio.h>
#define MAXIMUM_BUFFER_SIZE 100


int calculate_string_length(const char *string_pointer) {
    const char *start_pointer = string_pointer;

    while (*string_pointer != '\0') {
        string_pointer++;
    }

    return (int)(string_pointer - start_pointer);
}


void read_input_string(char *buffer, int max_size) {
    printf("Enter a string: ");
    if (fgets(buffer, max_size, stdin) != NULL) {
        char *char_pointer = buffer;
        while (*char_pointer != '\0') {
            if (*char_pointer == '\n') {
                *char_pointer = '\0';
                break;
            }
            char_pointer++;
        }
    }
}

int main(void) {
    char user_input[MAXIMUM_BUFFER_SIZE];

    read_input_string(user_input, MAXIMUM_BUFFER_SIZE);

    int length = calculate_string_length(user_input);

    printf("String: \"%s\"\n", user_input);
    printf("Length: %d characters\n", length);

    return 0;
}