#include "TempSensor.hpp"
namespace xyz
{
    class B: public TempSensor
    {
    public:
    B();

    virtual ~B();

    float getTemperature();
    };
}
    
