#include "main.h"

int _printf(const char *format, ...)
{
    int i, count = 0;
    va_list args;
    va_start(args, format);
    for (i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            switch (format[i]) {
                case 'c':
                    count += _putchar(va_arg(args, int));
                    break;
                case 's':
                    count += _puts(va_arg(args, char *));
                    break;
                case '%':
                    count += _putchar('%');
                    break;
                default:
                    break;
            }
        } else {
            count += _putchar(format[i]);
        }
    }
    va_end(args);
    return count;
}
