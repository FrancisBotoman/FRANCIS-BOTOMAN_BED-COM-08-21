#pragma once

class Polygon {
    protected:
        int mWidth;
        int mHeight;
    public:
        void SetValues(int width, int height);
        //Adding the virtual area
        virtual int Area();
};