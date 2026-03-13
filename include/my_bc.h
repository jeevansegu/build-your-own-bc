#ifndef MY_BC_H
#define MY_BC_H

#include <stdint.h>
// for tokens and vectors public types

// malloc, free ...

// error handling
void err_set_parse(void);
void err_print_and_clear(void);
// tiny dynamic array
typedef struct s_vec {
    //-- the struct contains raw bytes data of void datatype, size of size_t datatype, cap of size_t datatype, and element size of size_t datatype
} t_vec;


//-- declare the vec_init function here
//-- declare the vec_free function here
// tokens

typedef enum e_toktype  {
    //-- declare the token types here, such as TOK_INT, TOK_OP, TOK_LPAREN, TOK_RPAREN
} t_toktype;

typedef enum e_assoc {
    //-- declare the associativity types here, such as ASSOC_LEFT, ASSOC_RIGHT
} t_assoc;

typedef struct s_token {
    //-- the struct contains type of t_tokentype, ival of long long, precedence of int, op of char, and assoc of t_assoc
} t_token;


//

#endif /* MY_BC_H */
