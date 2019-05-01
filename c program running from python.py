def write_and_compile():
    !rm -f c_program
    with open('c_program.c', 'w') as file:
        file.write(c_program)
    !gcc -o c_program c_program.c ; ./c_program


c_program = """
#include <stdio.h>
int main(void){
    printf("hello, world");
}
"""
write_and_compile()