#include "s21_string.h"

char *s21_strcpy(char *dest, const char *src) {
  for (s21_size_t i = 0; i <= s21_strlen(src); i++) dest[i] = src[i];
  return dest;
}