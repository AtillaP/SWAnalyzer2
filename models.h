#ifndef FBIT_H_INCLUDED
#define FBIT_H_INCLUDED
#include <iostream>

typedef enum Mfn_Type
{
    Undefined = 0,
    Message,
    Signal
} Mfn_Type;

class FBit
{
    protected:
        std::string name;
        int FTT;
        bool isActive;
        int index;
    public:
        FBit();
        void setName(std::string name);
        void setFTT(int FTT);
        void setActive(bool isActive);
        void setIndex(int index);
        virtual void createName() = 0;
        std::string getName();
        int getFTT();
        bool getActive();
        int getIndex();
        ~FBit();
};

#endif // FBIT_H_INCLUDED
