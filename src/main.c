#include <stdio.h>
#include <string.h>
#include <ctype.h> 

void encrypt(char message[], char password[]) {
    int message_length = strlen(message);
    int password_length = strlen(password);
    int i;

    for (i = 0; i < message_length; i++) {
        if (isalpha(message[i])) {  // Only encrypt letters
            // Convert to uppercase to simplify
            char message_letter = toupper(message[i]);
            char password_letter = toupper(password[i % password_length]);

            // Convert letters to numbers (A=0, B=1, ..., Z=25)
            int message_num = message_letter - 'A';
            int password_num = password_letter - 'A';

            // Apply shift and handle cyclic case
            int encrypted_num = (message_num + password_num) % 26;

            // Convert back to letter
            message[i] = encrypted_num + 'A';
        }
        // Non-alphabetic characters remain the same
    }
}

void decrypt(char message[], char password[]) {
    int message_length = strlen(message);
    int password_length = strlen(password);
    int i;

    for (i = 0; i < message_length; i++) {
        if (isalpha(message[i])) {  // Only decrypt letters
            // Convert to uppercase to simplify
            char message_letter = toupper(message[i]);
            char password_letter = toupper(password[i % password_length]);

            // Convert letters to numbers (A=0, B=1, ..., Z=25)
            int message_num = message_letter - 'A';
            int password_num = password_letter - 'A';

            // Apply inverse shift and handle cyclic case
            int decrypted_num = (message_num - password_num + 26) % 26;

            // Convert back to letter
            message[i] = decrypted_num + 'A';
        }
        // Non-alphabetic characters (like spaces or symbols) remain the same
    }
}

int main() {
    char text[1000];
    char password[50];
    int option;

    printf("---------------------------\nWelcome to OblivionDecoder!\n");
    printf("1. Encrypt\n");
    printf("2. Decrypt\n");
    printf("Choose an option (1 or 2): ");
    scanf("%d", &option);
    getchar();

    printf("---------------------------\nInsert message here: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0;  // Remove newline at the end

    printf("Enter the password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;  // Remove newline at the end

    if (option == 1) {
        encrypt(text, password);
        printf("---------------------------\nText encrypted: %s\n", text);
    } else if (option == 2) {
        decrypt(text, password);
        printf("---------------------------\nText decrypted: %s\n", text);
    } else {
        printf("---------------------------\nInvalid Option.\n");
    }

    return 0;
}