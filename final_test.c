#include <stdio.h>
#include "main.h"

int main(void)
{
    int a = 123, b = -456, c = 0;
    
    printf("=== FINAL TEST ===\n");
    
    // Test individual specifiers
    _printf("d: %d\n", a);
    printf("d: %d\n", a);
    
    _printf("i: %i\n", b); 
    printf("i: %i\n", b);
    
    _printf("zero: %d\n", c);
    printf("zero: %d\n", c);
    
    // Test mixed
    _printf("Mixed: %d | %i | %d\n", 789, -1000, 0);
    printf("Mixed: %d | %i | %d\n", 789, -1000, 0);
    
    return 0;
}
