#include "App.hpp"
#include "utils.hpp"

int main(){


    App app(windowProperties(1280, 720, "Hello!", ImVec4(0.45f, 0.55f, 0.60f, 1.00f)));

    while(!app.shouldClose()){
        app.update();
        app.render();
    }
    return 0;
}