#include "s21_string.h"

#include <stdio.h>

int s21_strlen(const char *str) {
    // Check if the string pointer is NULL
    if (str == NULL)
        return -1; // Indicate that the string is NULL

    // Iterate through the string until the null terminator is encountered
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int s21_strcmp(const char *str1, const char *str2) {
    // Check if both strings are not NULL
    if (str1 == NULL || str2 == NULL)
        return -2; // Indicate that one or both strings are NULL

    // Iterate through the strings and compare character by character
    while (*str1 && *str1 == *str2) {
        str1++;
        str2++;
    }

    // Compare the characters at the current position
    int result = *(unsigned char *)str1 - *(unsigned char *)str2;

    // Determine the return value based on the result of comparison
    if (result < 0)
        return -1; // str1 is less than str2
    else if (result > 0)
        return 1; // str1 is greater than str2
    else
        return 0; // str1 is equal to str2
}

char *s21_strcpy(char *destination, const char *source) {
    // Check if source is not NULL
    if (source != NULL) {
        // Copy characters from source to destination until '\0' is encountered
        int i = 0;
        while (source[i] != '\0') {
            destination[i] = source[i];
            i++;
        }
        // Add null terminator to the end of the destination string
        destination[i] = '\0';
    }
    return destination;
}

char *s21_strcat(char *destination, const char *append) {
    // Find the length of destination
    int len = 0;
    while (destination[len] != '\0') {
        len++;
    }

    // Append characters from append to destination
    while (*append != '\0') {
        destination[len] = *append;
        len++;
        append++;
    }

    // Add null terminator to the end of the concatenated string
    destination[len] = '\0';

    return destination;
}

char *s21_strchr(char *str, int ch) {
    // Initialize the return pointer to NULL
    char *rtn = NULL;

    // Check if the string pointer is NULL
    if (str != NULL) {
        // Iterate through the string until the null terminator or the target character is encountered
        while (*str != '\0' && *str != ch) {
            str++;
        }

        // If the target character is found, update the return pointer
        if (*str == ch) {
            rtn = str;
        }
    }

    // Return the pointer to the target character or NULL if not found
    return rtn;
}



