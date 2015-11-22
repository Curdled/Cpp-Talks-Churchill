//
// Created by Joe Isaacs on 01/11/2015.
//

#ifndef SOURCE_DRAWINGINTERFACE_H
#define SOURCE_DRAWINGINTERFACE_H


#include <iostream>
#include <memory>

class DrawingInterface {
public:
    virtual void renderCircle(int x, int y) = 0;
    virtual ~DrawingInterface() {}
};

class Drawer {
public:
    Drawer(DrawingInterface *interface) { impl = interface; }
    void renderCircle(int x, int y) {
        impl->renderCircle(x, y);
    }

private:
    DrawingInterface *impl;
};

class SharedDrawer {
public:
    SharedDrawer(std::shared_ptr<DrawingInterface> interface) { impl = interface; }
    void renderCircle(int x, int y) {
        impl->renderCircle(x, y);
    }
    ~SharedDrawer() {
      std::cout << "decon SharedDrawer" << std::endl;
    }
private:
    std::shared_ptr<DrawingInterface> impl;
};

class RenderAPI1 : public DrawingInterface {
public:
    virtual void renderCircle(int x, int y) override {
        std::cout << "rendering using API1 a circle (" << x << "," << y << ")" << std::endl;
    }
    virtual ~RenderAPI1() {
      std::cout << "decon RenderAPI1" << std::endl;
    }
};

class RenderAPI2 : public DrawingInterface {
    virtual void renderCircle(int x, int y) override {
        std::cout << "rendering using API 2 " << x << " " << y << std::endl;
    }
};

int main() {
    auto api1 = std::make_shared<RenderAPI1>();
    auto d1 = SharedDrawer{api1};
    auto d2 = SharedDrawer{api1};

    d1.renderCircle(4,3);
}




#endif //SOURCE_DRAWINGINTERFACE_H
