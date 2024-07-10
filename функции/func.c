#include <stdio.h>
#include <string.h>

// Определение типа s21_size_t
typedef unsigned long long s21_size_t;

// Реализация функции s21_memchr
void *s21_memchr(const void *str, int c, s21_size_t n) {
    int k = -1;

    for (s21_size_t i = 0; i < n && k == -1; i++) {
        if (*((char *)str + i) == c) k = i;
    }

    if (k == -1)
        str = NULL;
    else
        str = (char *)str + k;

    return (void *)str;
}

int main() {
    // Область памяти, в которой будем искать
    char строка[] = "goodbye, world!"; // Исправлено слово "goodbuy" на "goodbye" и "word" на "world"

    // Символ, который будем искать ('g')
    char буква = 'g';

    // Количество байтов, которые будем просматривать
    s21_size_t размер_в_байтах = strlen(строка);

    printf("Размер в байтах: %llu\n", размер_в_байтах);

    // Вызов функции s21_memchr
    char *результат = (char *)s21_memchr(строка, буква, размер_в_байтах);

    // Проверка результата
    if (результат != NULL) {
        // Выводим найденный символ и его позицию
        printf("Символ '%c' найден на позиции: %ld\n", буква, результат - строка);
    } else {
        // Сообщаем, что символ не найден
        printf("Символ '%c' не найден в первых %llu байтах.\n", буква, размер_в_байтах);
    }
    
    return 0;
}
