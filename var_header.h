


#ifndef VAR_HEADER
#define VAR_HEADER


//********** FUNCTIONS *************

int choice_check( char *, char * );
int count_input( int, int );
int input_check( char *[], int, int );
void print_result();
char *double_to_string( double, int );


//********** VARIABLE *************

extern double  entry, sl_price, tp_price,
        risk, dollar_margin,
        coin_margin, dollar_vol,
        coin_vol, max_leverage,
        leverage, diff_sl, diff_tp,
        profit, fl_max_lev;

extern int     is_long, is_short, is_spot;

extern const int  reward_print;
extern const int  available_leverage;

extern char  temp1[60];


#endif
