#ifndef LAB9_RECTANGLE_H
#define LAB9_RECTANGLE_H


class rectangle {
private:
    float a;//first side
    float b;//second side
public:
    rectangle(float a, float b);
    float perimeter()
    const{
        return (this->a*this->b);
    }
};


#endif //LAB9_RECTANGLE_H
