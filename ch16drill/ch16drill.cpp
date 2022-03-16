/*
    g++ ch16drill.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "GUI.h"

int main()
{
    using namespace Graph_lib;

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