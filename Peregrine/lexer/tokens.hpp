#ifndef PEREGRINE_TOKENS
#define PEREGRINE_TOKENS
#include <string>

// Create a string variable
typedef enum {
  // Some operators
  tk_plus,      // +    
  tk_negative,  // negative number
  tk_minus,     // -    
  tk_divide,    // /    
  tk_asterisk,  // *    
  tk_multiply,  // *  
  tk_xor,       // ^        
  tk_modulo,    // %     
  tk_greater,   // >     
  tk_less,      // <     
  tk_ampersand, // &     
  tk_bit_or,    // |     
  tk_bit_not,   // ~     
  tk_assign,    // =     
  tk_excl,      // !     
  tk_colon,     // :     
  tk_dot,       // .     
  tk_l_paren,   // (     
  tk_r_paren,   // )     
  tk_hashtag,   // //     
  tk_comma,     // ,     

  tk_exponent,          //**      
  tk_equal,             // ==   
  tk_not_equal,         // !=   
  tk_floor,             // //   
  tk_gr_or_equ,         // >=   
  tk_less_or_equ,       // <=   
  tk_increment,         // ++   
  tk_decrement,         // --   
  tk_arrow,             // ->   
  tk_shift_right,       // >>   
  tk_shift_left,        // <<   
  tk_floor_equal,       // //=   
  tk_plus_equal,        // +=   
  tk_minus_equal,       // -=   
  tk_times_equal,       // *=   
  tk_slash_equal,       // /=   
  tk_mod_equal,         // %=   
  tk_shift_right_equal, // >>=   
  tk_shift_left_equal,  // <<=   
  tk_bit_and_equal,     // &=   
  tk_bit_or_equal,      // |=   
  tk_bit_xor_equal,     // ^=   

  tk_identifier, // foo, bar   

  // keywords tokens
  tk_scope,  // scope 
  tk_union,  // union 
  tk_enum,   // enum  
  tk_any,    // any 
  tk_assert, // assert
  tk_try,    // try
  tk_except, // except
  tk_raise,  // raise
  tk_true,   // True  
  tk_false,  // False 
  tk_with,   // with
  tk_as,     // as
  // This is not necessary because peregrine has special library for
  // multithreading
  // tk_async,     // async
  // tk_await,     // await
  tk_flags,     // flags
  tk_none,      // None
  tk_const,     // const
  tk_import,    // import
  tk_cppimport, // cppimport
  tk_himport,   // himport
  tk_if,        // if
  tk_else,      // else
  tk_elif,      // elif
  tk_while,     // while
  tk_for,       // for
  tk_break,     // break
  tk_continue,  // continue
  tk_match,     // match
  tk_extern,    // extern
  tk_case,      // case
  tk_default,   // default
  tk_def,       // def  
  tk_pass,      // pass
  tk_return,    // return 
  tk_and,       // and 
  tk_or,        // or 
  tk_not,       // not
  tk_is,        // is
  tk_in,        // in
  tk_cppcode,   // Cppcode
  tk_class,     // class 
  tk_struct,    // struct
  tk_dict,      // dict
  tk_type,      // type defination 

  // value type
  tk_decimal, // done
  tk_integer, // done
  tk_string,  // done
  cpp,        // done
  array,      // done
  dictionary, // done

  tk_ident,  // beginning of identation
  tk_dedent, // end of identation

  tk_raw,    // raw string i.e. r 
  tk_format, // formatted string i.e. f 
  tk_eof     // end of file 
} TokenType;

typedef struct {
  std::string statement;
  std::string keyword;
  unsigned long int start;
  unsigned long int end;
  unsigned long int line;
  TokenType tk_type;
} Token;
#endif