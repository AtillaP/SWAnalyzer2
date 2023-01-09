#include "fbit.h"

FBit::FBit(std::string name)
{
    this->name = name;
    this->FTT = 0;
    this->isActive = false;
    this->index = -0xFF;
}
void FBit::setName(std::string name) { this->name = name; }
void FBit::setFTT(int FTT) { this->FTT = FTT; }
void FBit::setActive(bool isActive) { this->isActive = isActive; }
void FBit::setIndex(int index) { this->index = index; }

std::string FBit::setName() { return this->name; }
int FBit::setFTT() { return this->FTT; }
bool FBit::setActive() { return this->isActive; }
int FBit::setIndex() { return this->index; }

FBit::~FBit(){}
