#ifndef RASPBERRYPIE_H
#define RASPBERRYPIE_H

#include "Pie.h"

class RaspberryPie : public Pie {

    public:

        std::string description() const override;
    };

#endif