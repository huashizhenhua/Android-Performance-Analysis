/*
 * Diagram drawing
 * 
 * Native OpenGL
 * 
 * Copyright (c) Thomas Gummerer 2011 | All rights reserved
 */

#include "diagram.h"
#include "connection.h"

Diagram::Diagram()
{
    o = new OpenGL();
    c = new Connection();
}

Diagram::~Diagram()
{
    delete o;
    delete c;
}

void Diagram::resize(int w, int h)
{
    o->resize(w, h);
}

void Diagram::render()
{
    o->prepareFrame();
    this->drawAxis();
    this->drawBars();
}

void Diagram::drawAxis()
{
    o->setRGBColor(0, 0, 0, 0);
    o->drawLine(0.85, -0.9, 0.85, 0.9);
    o->drawLine(-0.9, -0.85, 0.9, -0.85);
} 

void Diagram::drawBars()
{
    o->setRGBColor(120, 120, 255, 0);
    o->drawRectangle(0.85, -0.83, -0.6, 0.2);
    o->setRGBColor(255, 120, 120, 1);
    o->drawRectangle(0.85, -0.81, -0.4, 0.2);

}
