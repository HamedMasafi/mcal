#include <iostream>
#include <chrono>
#include "3rdparty/libcalendars/src/cl-calendars.h"

using namespace std;

int main()
{
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    struct tm *parts = std::localtime(&now_c);

    auto y = 1900 + parts->tm_year;
    auto m = 1 + parts->tm_mon;
    auto d = parts->tm_mday;
    uint32_t jd;
    to_jdn(CAL_GREGORIAN, &jd, y, m, d);
    cout << (jd % 7) << endl;
    return 0;
}
