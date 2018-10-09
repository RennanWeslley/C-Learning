#ifndef GEOMETRIA_H
#define GEOMETRIA_H


class Geometria {
    public:
        virtual ~Geometria() {}

        virtual void calcArea() = 0;

        float getArea() {
            return area;
        }

    protected:
        float area;

};

#endif // GEOMETRIA_H
