#This is repo for c programming snippets taught by kris jordan, in future more may be added
system - windows
editor - vs code

-------------------------------------------------------------------------------------------

function-pointer branch

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

typedef struct Point{
    double x;
    double y;
}Point;
------------------------------------------------------------------------------------------

