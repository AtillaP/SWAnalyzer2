#ifndef FBIT_H_INCLUDED
#define FBIT_H_INCLUDED
#include <iostream>

class FBit
{
    private:
        std::string name;
        int FTT;
        bool isActive;
        int index;
    public:
        FBit(std::string name);
        virtual void setName(std::string name);
        virtual void setFTT(int FTT);
        virtual void setActive(bool isActive);
        virtual void setIndex(int index);

        virtual std::string setName();
        virtual int setFTT();
        virtual bool setActive();
        virtual int setIndex();
        ~FBit();
};

#endif // FBIT_H_INCLUDED
