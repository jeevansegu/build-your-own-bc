#include "my_bc.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        err_set_parse();
        err_print_and_clear();
        return 1;
    }
    (void)argv;
    // vector tokens, vector rpn
    //-- use t_vec for vector of tokens and rpn

    //-- initialize the vector of tokens and rpn using vec_init function

    // lexer

    // shunting yard -> rpn

    // evaluate rpn

    // success

    return 0;
}