/*
 * File: GraphicHelloWorld.cpp
 * ---------------------------
 * This program writes "hello, world" in white on top of a blue
 * rectangle in the graphics window.
 */

#include "gobjects.h"

int main() {
    GWindow gw(400, 250);
    GRect* rect = new GRect(300, 150);
    rect->setFilled(true);
    rect->setColor("BLUE");
    gw.add(rect, 50, 50);
    GLabel* label = new GLabel("hello, world");
    label->setFont("SansSerif-48");
    label->setColor("WHITE");
    gw.add(label, 60, 140);
    delete rect;
    delete label;
    return 0;
}
