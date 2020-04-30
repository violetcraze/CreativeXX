#ifndef CREATIVEXX_SANDBOX_H
#define CREATIVEXX_SANDBOX_H

#include <CreativeXX.h>
#include <string>

class Sandbox : public creative::application::Application {
public:
    void setup() override;
    void update() override;
    void draw() override;
    void resize() override;
    void close() override;
    void mouse_down(int button) override;
    void mouse_up(int button) override;
    void key_down(unsigned int key_code, bool repeat) override;
    void key_up(unsigned int key_code) override;
};

#endif //CREATIVEXX_SANDBOX_H
