#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y){
    static HANDLE h = NULL;
    if (!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x , y };
    SetConsoleCursorPosition( h , c );
}

int main()
{
    // the upper function is the mane function
    /* this is codeblocks specific gotoxy (*console app) that you can use it for free:) <3 */

    // template: ->  gotoxy( "colse/mid/far" , "line" );
    // test it to better know :)

    //test 1
    gotoxy(50,2);
    cout<<"test 1";
    // tricks ->
                // put 1st num "50" for put in middle
                // 2nd num is line (here i put "test" in line 2)



    //test 2
    gotoxy(80,3);
    cout<<"test 2";
    // tricks ->
                // put 1st num "80" for put in middle (*but in full screen of console)
                // 2nd num is line (here i put "test" in line 3)
    
    //enjoy :)
    //By ErvinGh88

    return 0;
}
