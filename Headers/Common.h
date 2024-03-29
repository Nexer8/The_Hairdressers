//
// Created by mwisniewski on 4/30/20.
//

#ifndef SO2P_2_COMMON_H
#define SO2P_2_COMMON_H

#include <atomic>
#include <condition_variable>
#include <mutex>
#include "Parameters.h"

using namespace std;

extern atomic<int> no_of_ready_hairdressers;

/*! \class CommonTools
    \brief A class that implements commonly used tools.

    CommonTools used by other classes.
*/
class CommonTools {
public:
    static condition_variable cv;
    static mutex cv_m;

    static void wait_for_salons();
};

#endif //SO2P_2_COMMON_H
