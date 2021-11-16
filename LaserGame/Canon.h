#ifndef Canon_H_INCLUDED
#define Canon_H_INCLUDED
#include "Case.h"

class Canon : public Case{
public:
    Canon(int x,int y);
    virtual int getX() const override;
    virtual int getY() const override;
    virtual char getChar() const override;
    virtual char setChar(char c) const override;
private:
    int d_x, d_y;
    char d_c;
};

#endif // Canon_H_INCLUDED
