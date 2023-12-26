// #include <stdio.h>
// #include <stdarg.h>

// void print_integers(int num, ...) {
//     // Define a va_list variable to access the variable arguments
//     va_list args;

//     // Initialize the va_list using the macro va_start
//     va_start(args, num);

//     // Access the members of the va_list structure
//     unsigned int gp_offset = args->gp_offset;
//     unsigned int fp_offset = args->fp_offset;
//     void *overflow_arg_area = args->overflow_arg_area;
//     void *reg_save_area = args->reg_save_area;

//     // Print information about the va_list
//     printf("gp_offset: %u\n", gp_offset);
//     printf("fp_offset: %u\n", fp_offset);
//     printf("overflow_arg_area: %p\n", overflow_arg_area);
//     printf("reg_save_area: %p\n", reg_save_area);

//     // Access and print the variable arguments
//     for (int i = 0; i < num; ++i) {
//         int value = va_arg(args, int);
//         printf("Argument %d: %d\n", i + 1, value);
//     }

//     // Clean up the va_list using the macro va_end
//     va_end(args);
// }

// int main() {
//     // Call the function with a variable number of integers
//     print_integers(4, 10, 20, 30, 40);
//     // printf("\n%zu\n",sizeof(va_list));

//     return 0;
// }


#include <stdio.h>
#include <stdarg.h>

void example_function(int a, ...) {
    va_list args;
    va_start(args, a);

    // Access reg_save_area and process register values or overflow arguments
    void *reg_save_area = args->reg_save_area;
    // Process register values or overflow arguments as needed

    // Example: Accessing an overflow argument
    int overflow_arg = *(int*)(reg_save_area + args->gp_offset * 5);
    printf("Overflow Argument: %d\n", overflow_arg);

    va_end(args);
}

int main() {
    example_function(10, 20, 30, 40, 50, 60, 70, 80);
    return 0;
}

// #include <stdio.h>
// #include <stdarg.h>

// void example_function(int a, ...) {
//     va_list args;
//     va_start(args, a);

//     // Access overflow_arg_area and process overflow arguments
//     void *overflow_arg_area = args->overflow_arg_area;
//     // Process overflow arguments as needed

//     // Example: Accessing an overflow argument
//     int overflow_arg = *(int*)overflow_arg_area;
//     printf("Overflow Argument: %d\n", overflow_arg);

//     va_end(args);
// }

// int main() {
//     example_function(10, 20, 30, 40, 50, 60, 70, 80);
//     return 0;
// }

