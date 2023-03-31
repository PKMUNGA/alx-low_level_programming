#include <stddef.h>

/*
 * _strcat _ concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: pointer to concatenated string
 */
char *_strcat(char *dest, const char *src)
{
        if (dest == NULL || src == NULL) {
            return NULL;
        }

        size_t dest_len = 0;
        while (dest[dest_len] != '\0') {
            dest_len++;
        }

        size_t src_len = 0;
        while (src[src_len] != '\0') {
            src_len++;
        }

        if (dest_len + src_len + 1 > sizeof(dest)) {
            return NULL;
        }

        for (size_t i = 0; i < src_len; i++) {
            dest[dest_len + i] = src[i];
        }

        dest[dest_len + src_len] = '\0';
        return dest;
}

