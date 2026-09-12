#ifndef UTILS_H
#define UTILS_H

#include <string>
using namespace std;

class Utils{
    public:
    // Read a valid integer
    static int readInt(string message);

    // Read a valid positive integer
    static int readPositiveInt(string message);

    // Read a valid double
    static double readDouble(string message);
};