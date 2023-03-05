#include <stdio.h>
#include "confusion.h"

int digit_value(char c) {
  return c - '0';
}

int value(char *expression, int start, int length) {
  int n = 0;
  for (int i=0; i < length; i++)
    n = n * 10 + digit_value(expression[start+i]);
  return n;
}

int solver(char *expression, int start, int length, int target) {
  int term = value(expression, start, length);
  if (term == target)
    return start;
  if (solver(expression, start+length, 1, target - term) != -1) {
    return start+length;
  }
  return -1;
}

int solve(char *expression, int target, int *terms) {
  int result = solver(expression, 0, 1, target);
  if (result != -1) {
    terms[0] = value(expression, 0, 1);
    terms[1] = value(expression, 1, 1);
    return 2;
  }
  return 0;
}
