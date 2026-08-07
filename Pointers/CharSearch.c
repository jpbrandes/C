#include <stdio.h>

#define MAXIMUM_BUFFER_SIZE 100

char *search_character(char *string_pointer, char target_character) {
    while (*string_pointer != '\0') {
        if (*string_pointer == target_character) {
            return string_pointer;
        }
        string_pointer++;
    }

    if (target_character == '\0') {
        return string_pointer;
    }

    return NULL;
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
    char user_string[MAXIMUM_BUFFER_SIZE];
    char target_character;

    read_input_string(user_string, MAXIMUM_BUFFER_SIZE);

    printf("Enter a character to search for: ");
    if (scanf(" %c", &target_character) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    char *found_pointer = search_character(user_string, target_character);

    if (found_pointer != NULL) {
        printf("Character '%c' found at index: %ld\n", target_character, found_pointer - user_string);
        printf("Substring starting from character: \"%s\"\n", found_pointer);
    } else {
        printf("Character '%c' not found in the string.\n", target_character);
    }

    return 0;
}