#ifndef PIE_H
#define PIE_H

#include <string>

class Pie {

    public:

        virtual std::string description() const = 0;
        virtual ~Pie() {}
    };

#endif