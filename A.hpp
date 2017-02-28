#include "TempSensor.hpp"
namespace xyz
{
    class A: public TempSensor
    {
    public:
    A();

    virtual ~A();

    float getTemperature();
    };
}
    
