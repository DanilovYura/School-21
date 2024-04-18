#include <stdio.h>

#define ARRAY_SIZE 10

int read_array(int *array, int size);
void sort_array(int *array, int size);
void print_array(int *array, int size);

int main() {
    int *array;
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        array = (int*) calloc(n, sizeof(int));
        if (array != NULL) {
            if (read_array(array, ARRAY_SIZE)) {
                return 1;
            }
            sort_array(array, ARRAY_SIZE);
            print_array(array, ARRAY_SIZE);
        } else {
            printf("n/a");
        }
        free(array);
        *array = 0;

    } else {
        printf("n/a");
    }
    return 0;
}

int read_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &array[i]) != 1) {
            return 1;
        }
    }
    if (getchar() != '\n') {
        printf("n/a");
        return 1;
    }
    return 0;
}

void sort_array(int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return;
}

void print_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return;
}
