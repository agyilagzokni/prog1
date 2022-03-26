/*
    g++ ch16drill.cpp Graph.cpp Window.cpp GUI.cpp Lines_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Lines_window.h"

int main()
{
    

    try{
        Lines_window win {Point{100, 100}, 600, 400, "lines"};
        return gui_main();
    }
    catch(exception& e){
        cerr << "exception: " <<e.what() << "\n";
        return 1;
    }catch(...){
        cerr << "Some exception\n";
        return 2;
    }

}