#ifndef MFNMEMBER_H_INCLUDED
#define MFNMEMBER_H_INCLUDED
#include "models.h"

class MFNMember : public FBit
{
    private:
        Mfn_Type mfn_type;
        std::string procbuf;
    public:
        MFNMember();
        void setMfnType(Mfn_Type mfn_type);
        void setProcbuf(std::string procbuf);

        void createName(std::string line);
        Mfn_Type getMfnType();
        std::string getProcbuf();
        ~MFNMember();
};

#endif // MFNMEMBER_H_INCLUDED
