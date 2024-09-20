#include <stdio.h>

void function() {
    auto int autoVar; // auto is optional
    static int staticVar;
    register int registerVar = 5; // Register variables should be initialized
    extern int externVar; // Declaration

    printf("Auto variable: %d\n", autoVar); // Contains garbage value
    printf("Static variable: %d\n", staticVar); // Initialized to 0
    printf("Register variable: %d\n", registerVar); // Should print the initialized value
    printf("Extern variable: %d\n", externVar); // Should print the value defined outside
}

int externVar = 10; // Definition

int main() {
    function();
    return 0;
}
