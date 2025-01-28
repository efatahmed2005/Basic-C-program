#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int bookID;
    char name[100];
    char author[100];
    char releaseDate[20];
    int availability;
    float price;
} Book;

Book* createBooks(int numBooks) {
    Book* books = (Book*)malloc(numBooks * sizeof(Book));
    if (books == NULL) {
        printf("\033[31mMemory allocation failed!\n\033[0m");
        exit(1);
    }
    return books;
}

void inputBookDetails(Book* book) {
    printf("\033[33m\nEnter book ID: \033[0m");
    scanf("%d", &book->bookID);
    getchar();

    printf("\033[33mEnter book name: \033[0m");
    fgets(book->name, 100, stdin);
    book->name[strcspn(book->name, "\n")] = 0;

    printf("\033[33mEnter author name: \033[0m");
    fgets(book->author, 100, stdin);
    book->author[strcspn(book->author, "\n")] = 0;

    printf("\033[33mEnter release date (DD-MM-YYYY): \033[0m");
    fgets(book->releaseDate, 20, stdin);
    book->releaseDate[strcspn(book->releaseDate, "\n")] = 0;

    printf("\033[33mEnter availability (1 for Available, 0 for Unavailable): \033[0m");
    scanf("%d", &book->availability);

    printf("\033[33mEnter price: \033[0m");
    scanf("%f", &book->price);
    getchar();
}

void displayBookDetails(Book* book) {
    printf("\033[36m\nBook ID: %d\n\033[0m", book->bookID);
    printf("\033[36mName: \033[0m%s\n", book->name);
    printf("\033[36mAuthor: \033[0m%s\n", book->author);
    printf("\033[36mRelease Date: \033[0m%s\n", book->releaseDate);
    printf("\033[36mAvailability: \033[0m%s\n", book->availability ? "Available" : "Unavailable");
    printf("\033[36mPrice: \033[0m%.2f\n", book->price);
}

void updateBookDetails(Book* book) {
    char choice;
    printf("\033[33m\nDo you want to update book name? (y/n): \033[0m");
    scanf(" %c", &choice);
    getchar();
    if (choice == 'y' || choice == 'Y') {
        printf("\033[33mEnter new book name: \033[0m");
        fgets(book->name, 100, stdin);
        book->name[strcspn(book->name, "\n")] = 0;
    }

    printf("\033[33m\nDo you want to update author name? (y/n): \033[0m");
    scanf(" %c", &choice);
    getchar();
    if (choice == 'y' || choice == 'Y') {
        printf("\033[33mEnter new author name: \033[0m");
        fgets(book->author, 100, stdin);
        book->author[strcspn(book->author, "\n")] = 0;
    }

    printf("\033[33m\nDo you want to update release date? (y/n): \033[0m");
    scanf(" %c", &choice);
    getchar();
    if (choice == 'y' || choice == 'Y') {
        printf("\033[33mEnter new release date (DD-MM-YYYY): \033[0m");
        fgets(book->releaseDate, 20, stdin);
        book->releaseDate[strcspn(book->releaseDate, "\n")] = 0;
    }

    printf("\033[33m\nDo you want to update availability? (y/n): \033[0m");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y') {
        printf("\033[33mEnter new availability (1 for Available, 0 for Unavailable): \033[0m");
        scanf("%d", &book->availability);
    }

    printf("\033[33m\nDo you want to update price? (y/n): \033[0m");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y') {
        printf("\033[33mEnter new price: \033[0m");
        scanf("%f", &book->price);
    }
}

void freeBooks(Book* books) {
    free(books);
}

int main() {
    int numBooks = 0;
    Book* books = NULL;
    int choice, bookID, found;

    while (1) {
        printf("\033[32m\n\nLibrary Management System\n\033[0m");
        printf("\033[35m---------------------------------\n\033[0m");
        printf("\033[33m1. Add Book\n\033[0m");
        printf("\033[33m2. View Book by ID\n\033[0m");
        printf("\033[33m3. View All Books\n\033[0m");
        printf("\033[33m4. Change Book Information\n\033[0m");
        printf("\033[33m5. Exit\n\033[0m");
        printf("\033[35m---------------------------------\n\033[0m");
        printf("\033[37mEnter your choice: \033[0m");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                numBooks++;
                books = (Book*)realloc(books, numBooks * sizeof(Book));
                inputBookDetails(&books[numBooks - 1]);
                break;
            case 2:
                printf("\033[33m\nEnter book ID to view: \033[0m");
                scanf("%d", &bookID);
                found = 0;
                for (int i = 0; i < numBooks; i++) {
                    if (books[i].bookID == bookID) {
                        displayBookDetails(&books[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("\033[31mBook with ID %d not found!\n\033[0m", bookID);
                }
                break;
            case 3:
                if (numBooks == 0) {
                    printf("\033[31mNo books available!\n\033[0m");
                } else {
                    for (int i = 0; i < numBooks; i++) {
                        displayBookDetails(&books[i]);
                        printf("\033[35m---------------------------------\n\033[0m");
                    }
                }
                break;
            case 4:
                printf("\033[33m\nEnter book ID to modify: \033[0m");
                scanf("%d", &bookID);
                found = 0;
                for (int i = 0; i < numBooks; i++) {
                    if (books[i].bookID == bookID) {
                        updateBookDetails(&books[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("\033[31mBook with ID %d not found!\n\033[0m", bookID);
                }
                break;
            case 5:
                freeBooks(books);
                printf("\033[32mExiting program...\n\033[0m");
                return 0;
            default:
                printf("\033[31mInvalid choice! Please try again.\n\033[0m");
        }

        printf("\033[37m\nDo you want to perform another action? (y/n): \033[0m");
        char anotherAction;
        scanf(" %c", &anotherAction);
        if (anotherAction == 'n' || anotherAction == 'N') {
            freeBooks(books);
            printf("\033[32mExiting program...\n\033[0m");
            return 0;
        }
    }
}
