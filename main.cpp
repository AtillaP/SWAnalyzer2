#include <iostream>
#include "mfnmember.h"

using namespace std;

int main()
{
    string sw_name = "VF7CG000991";
    string sw_location = "c:\\Users\\User\\Desktop\\ContiSWs\\";

    //checkArchitecture()
    MFNMember bus();
    std::cout << bus.getName() << endl;
    return 0;
}
