/*
    g++ ch15drill.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"

double one (double x){
    return 1;
}
double slope (double x){
    return x/2;
}
int main()
{
    using namespace Graph_lib;

    int xmax = 600;
    int ymax = 600;

    double minrange = -10;
    double maxrange = 11;
    double xscale = 20;
    double yscale = 20;
    Point p {300, 300};
    int npoints = 400;

    Simple_window win {Point{0,0}, xmax, ymax, "Canvas"};

    Axis x {Axis::x, Point{100, 300}, 400, 20, "1 == 20 pixels"};
    Axis y {Axis::y, Point{300, 500}, 400, 20, "1 == 20 pixels"};

    Function fx_one {one, -10, 11, Point{300, 300}, 400, 20, 20};
    Function fx_slope {slope, minrange, maxrange, p, npoints, xscale, yscale};
    Text slope_text {200};

    x.set_color(Color::red);
    y.set_color(Color::red);

    win.attach(x);
    win.attach(y);
    win.attach(fx_one);
    win.attach(fx_slope);

    win.wait_for_button();

}
