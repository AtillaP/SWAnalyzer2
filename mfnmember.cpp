#include "mfnmember.h"

MFNMember::MFNMember():FBit()
{
    this->name = "";
    this->FTT = 0;
    this->isActive = false;
    this->index = -0xFF;
    this->mfn_type = Undefined;
    this->procbuf = "";
}
void MFNMember::setMfnType(Mfn_Type mfn_type){ this->mfn_type = mfn_type; }
void MFNMember::setProcbuf(std::string procbuf){ this->procbuf = procbuf; }

void MFNMember::createName(std::string line)
{
    this->name = line;
}
Mfn_Type MFNMember::getMfnType(){ return this->mfn_type; }
std::string MFNMember::getProcbuf(){ return this->procbuf; }

MFNMember::~MFNMember(){}
