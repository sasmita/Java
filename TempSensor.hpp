namespace xyz
{
    class TempSensor
    {
    public:
        virtual int getTemperatureCelsius () = 0;
        virtual ~TempSensor() {}
    };
}
