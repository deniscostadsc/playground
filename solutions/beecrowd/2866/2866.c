#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct Stack {
    char character;
    struct Stack *next;
};

typedef struct Stack stack;

void push(stack **decrypted_string, char character) {
    stack *new_item = (stack *)malloc(sizeof(stack));

    new_item->character = character;
    new_item->next = *decrypted_string;
    *decrypted_string = new_item;
}

char pop(stack **decrypted_string) {
    char character = (*decrypted_string)->character;
    stack *temp = *decrypted_string;

    *decrypted_string = (*decrypted_string)->next;
    free(temp);
    return character;
}

int main() {
    int16_t c;
    char character;
    stack *decrypted_string = NULL;

    scanf("%d", &c);  // reads the number
    character = getchar();  // reads the newline

    character = getchar();

    while (character != EOF) {
        if (character != '\n') {
            if (!isupper(character)) {
                push(&decrypted_string, character);
            }
        } else {
            while (decrypted_string != NULL) {
                putchar(pop(&decrypted_string));
            }
            putchar('\n');
        }
        character = getchar();
    }

    return 0;
}
