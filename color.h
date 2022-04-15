


/*


        \e
        \033
        \x1B



\033[38;2;<r>;<g>;<b>m     #Select RGB foreground color

\033[48;2;<r>;<g>;<b>m     #Select RGB background color


*/



#ifndef  COLOR_H
#define  COLOR_H


#define  RESET               "\033[0m"
#define  BOLD                "\033[1m"
#define  LOWCOLOR            "\033[2m"
#define  ITALIC              "\033[3m"
#define  UNDERLINE           "\033[4m"
#define  REVERSE             "\033[7m"
#define  HIDDEN              "\033[8m"
#define  STRICETHROUGH       "\033[9m"


#define  BOLD_F(x)           "\033[1m" x "\033[0m"
#define  ITALIC_F(x)         "\033[3m" x "\033[0m"
#define  UNDERLINE_F(x)      "\033[4m" x "\033[0m"
#define  STRICETHROUGH_F(x)  "\033[9m" x "\033[0m"


#define  BLACK               "\033[30m"
#define  RED                 "\033[31m"
#define  GREEN               "\033[32m"
#define  YELLOW              "\033[33m"
#define  BLUE                "\033[34m"
#define  MAGENTA             "\033[35m"
#define  CYAN                "\033[36m"
#define  WHITE               "\033[37m"
#define  ORANGE              "\033[38;2;164;132;0m"

#define  BLACK_F(x)          "\033[30m" x "\033[0m"
#define  RED_F(x)            "\033[31m" x "\033[0m"
#define  GREEN_F(x)          "\033[32m" x "\033[0m"
#define  YELLOW_F(x)         "\033[33m" x "\033[0m"
#define  BLUE_F(x)           "\033[34m" x "\033[0m"
#define  MAGENTA_F(x)        "\033[35m" x "\033[0m"
#define  CYAN_F(x)           "\033[36m" x "\033[0m"
#define  WHITE_F(x)          "\033[37m" x "\033[0m"


#define  BBLACK              "\033[1;30m"
#define  BRED                "\033[1;31m"
#define  BGREEN              "\033[1;32m"
#define  BYELLOW             "\033[1;33m"
#define  BBLUE               "\033[1;34m"
#define  BMAGENTA            "\033[1;35m"
#define  BCYAN               "\033[1;36m"
#define  BWHITE              "\033[1;37m"
#define  BORANGE             "\033[1;38;2;164;132;0m"

#define  BBLACK_F(x)         "\033[1;30m" x "\033[0m"
#define  BRED_F(x)           "\033[1;31m" x "\033[0m"
#define  BGREEN_F(x)         "\033[1;32m" x "\033[0m"
#define  BYELLOW_F(x)        "\033[1;33m" x "\033[0m"
#define  BBLUE_F(x)          "\033[1;34m" x "\033[0m"
#define  BMAGENTA_F(x)       "\033[1;35m" x "\033[0m"
#define  BCYAN_F(x)          "\033[1;36m" x "\033[0m"
#define  BWHITE_F(x)         "\033[1;37m" x "\033[0m"


#endif // COLOR_H
