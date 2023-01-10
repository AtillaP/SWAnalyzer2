#include "models.h"

FBit::FBit()
{
    this->name = "";
    this->FTT = 0;
    this->isActive = false;
    this->index = -0xFF;
}
void FBit::setName(std::string name) { this->name = name; }
void FBit::setFTT(int FTT) { this->FTT = FTT; }
void FBit::setActive(bool isActive) { this->isActive = isActive; }
void FBit::setIndex(int index) { this->index = index; }
std::string FBit::getName() { return this->name; }
int FBit::getFTT() { return this->FTT; }
bool FBit::getActive() { return this->isActive; }
int FBit::getIndex() { return this->index; }

FBit::~FBit(){}
