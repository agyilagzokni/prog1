/*
    g++ ch13.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"

int main()
{
    using namespace Graph_lib;

    int xmax = 800;
    int ymax = 1000;

    Simple_window win {Point{100,100}, xmax, ymax, "Canvas"};

    Lines grid;

    for(int i = 1;i<8;++i){
        grid.add(Point{i*100, 0}, Point{i*100, 800});
    }
    for(int i = 1;i<8;++i){
        grid.add(Point{0, i*100}, Point{800, i*100});
    }
    //Vector[Rectangle] r = new Vector[8];
    //for(int i = 0;i<8;++i){
    //    r[i] = Rectangle rect {Point{i*100, i*100}, 100, 100}
    //} 
    Rectangle rect {Point{0, 0}, 100, 100};
    rect.set_fill_color(Color::red);
    Rectangle rect2 {Point{100, 100}, 100, 100};
    rect2.set_fill_color(Color::red);
    Rectangle rect3 {Point{200, 200}, 100, 100};
    rect3.set_fill_color(Color::red);
    Rectangle rect4 {Point{300, 300}, 100, 100};
    rect4.set_fill_color(Color::red);
    Rectangle rect5 {Point{400, 400}, 100, 100};
    rect5.set_fill_color(Color::red);
    Rectangle rect6 {Point{500, 500}, 100, 100};
    rect6.set_fill_color(Color::red);
    Rectangle rect7 {Point{600, 600}, 100, 100};
    rect7.set_fill_color(Color::red);
    Rectangle rect8 {Point{700, 700}, 100, 100};
    rect8.set_fill_color(Color::red);
    Image ii {Point{0, 0}, "ncore1.jpg"};
    win.attach(rect);
    win.attach(rect2);
    win.attach(rect3);
    win.attach(rect4);
    win.attach(rect5);
    win.attach(rect6);
    win.attach(rect7);
    win.attach(rect8);
    win.attach(ii);
    win.attach(grid);
    for(int i = 1;i<49;++i){
        win.wait_for_button();
        if (i%7 == 0){
            ii.move(-600, 100);
        }else{
            ii.move(100, 0);
        }
    }

}
