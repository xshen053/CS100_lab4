#include "../header/rectangle.hpp"

void Rectangle::Rectangle(){
        this->width = 1;
	this->height = 1;
}

void Rectangle::Rectangle(int w, int h){
        this->width = w;
	this->height = h;
}

int Rectangle::area(){
        return this->width * this->height;
}

int Rectangle::perimeter(){
        return 2 * (this->width + this->height);
}

int Rectangle::get_width(){
        return this->width;
}

int Rectangle::get_height(){
        return this->height;
}

void Rectangle::set_width(int w){
        this->width = width;
}

void Rectangle::set_height(int h){
        this->height = h;
}
