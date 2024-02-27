#pragma once

#include "App.hpp"

class Application : public App
{
public:
    Application(windowProperties windowProps)
        : App(windowProps)
    {

    }

    ~Application()
    {
        
    }
    void run(){
        this->startUp();
        while(!this->shouldClose()){
            this->update();
            this->render();
        }

    }
    void startUp() override{
        // place something that you want to run at the start of the application
    };
    void loop() override{
        // place something that you want to run in the loop of the application
        ImGui::ShowDemoWindow();
    };

    
};

