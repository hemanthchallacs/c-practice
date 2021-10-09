<h1>This is repo for c programming snippets taught by kris jordan, in future more may be added</h1>
system - windows
<br>
editor - vs code

-------------------------------------------------------------------------------------------

1. function-pointer branch

notes:

------------------------------------------------------------------------------------------
structure branch

notes:
struct members Point will stay in main frame in STACK SPACE unlike java which stores its 
object in heap

typedef - alias to a structure

typedef struct <Name> <new-name>;

eg: typedef struct Point point_t;

or we can do everything at once

<code>typedef struct Point{
    double x;
    double y;
}Point;</code>


------------------------------------------------------------------------------------------
C Modules

notes:
both header files and source files fullfil the need  of module

all a person has to is get source and header file and he can call functions defined in he-
der files using source file, linker will figure out how to call these during compilation.
<p>
PS F:\Programming\C programming\c-practice> cd '.\C modules\'
PS F:\Programming\C programming\c-practice\C modules> gcc -Wall -Wextra -std=c11 -c .\Point.c
PS F:\Programming\C programming\c-practice\C modules> .\Point.o
PS F:\Programming\C programming\c-practice\C modules> gcc -c main.c
PS F:\Programming\C programming\c-practice\C modules> gcc main.o Point.o -o main_and_point_combined
PS F:\Programming\C programming\c-practice\C modules> .\main_and_point_combined.exe
(1.000000, 2.000000)
</p>
------------------------------------------------------------------------------------------