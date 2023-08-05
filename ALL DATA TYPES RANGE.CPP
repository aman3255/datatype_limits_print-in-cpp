#include <iostream>
#include <cmath>
#include <climits>
#include <cfloat>
#include <limits>
using namespace std;

int main() {
    int x = INT_MAX;
    int y = INT_MIN;
    cout << "INT_MAX: " << x << ", INT_MIN: " << y << endl;

    char a = CHAR_MAX;
    char b = CHAR_MIN;
    cout << "CHAR_MAX: " << static_cast<int>(a) << ", CHAR_MIN: " << static_cast<int>(b) << endl;

    float s = FLT_MAX;
    float t = FLT_MIN;
    cout << "FLOAT_MAX: " << s << ", FLOAT_MIN: " << t << endl;

    double p = DBL_MAX;
    double q = DBL_MIN;
    cout << "DOUBLE_MAX: " << p << ", DOUBLE_MIN: " << q << endl;

    long d = LONG_MAX;
    long f = LONG_MIN;
    cout << "LONG_MAX: " << d << ", LONG_MIN: " << f << endl;

    short i = SHRT_MAX;
    short u = SHRT_MIN;
    cout << "SHORT_MAX: " << i << ", SHORT_MIN: " << u << endl;
    
    bool c = true;
    bool v = false;
    cout << "BOOL_MAX: " << boolalpha << c << ", BOOL_MIN: " << v << endl;
    
    string w = "RTSIG_MAX";
    string e = "RTSIG_MIN";
    cout << "STRING_MAX: " << w << ", STRING_MIN: " << e << endl;
    
    unsigned short o = numeric_limits<unsigned short>::max();
    unsigned short r = numeric_limits<unsigned short>::min();
    cout << "UNSIGNED_SHORT_MAX: " << o << ", UNSIGNED_SHORT_MIN: " << r << endl;

    long long h = numeric_limits<long long>::max();
    long long j = numeric_limits<long long>::min();
    cout << "LONG_LONG_MAX: " << h << ", LONG_LONG_MIN: " << j << endl;

    unsigned long k = numeric_limits<unsigned long>::max();
    unsigned long l = numeric_limits<unsigned long>::min();
    cout << "UNSIGNED_LONG_MAX: " << k << ", UNSIGNED_LONG_MIN: " << l << endl;

    unsigned int e_max = numeric_limits<unsigned int>::max();
    unsigned int e_min = numeric_limits<unsigned int>::min();
    cout << "UINT_MAX: " << e_max << ", UINT_MIN: " << e_min << endl;

    unsigned long long n = numeric_limits<unsigned long long>::max();
    unsigned long long m = numeric_limits<unsigned long long>::min();
    cout << "UNSIGNED_LONG_LONG_MAX: " << n << ", UNSIGNED_LONG_LONG_MIN: " << m << endl;

    return 0;
}
