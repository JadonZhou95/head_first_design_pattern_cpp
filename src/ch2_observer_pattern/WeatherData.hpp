#ifndef HPP_WEATHERDATA_
#define HPP_WEATHERDATA_

#include "SubjectInterface.hpp"
#include "ObserverInterface.hpp"
#include <iostream>

class WeatherData: public SubjectInterface<ObserverInterface>
{
private:
    double temperature_;
    double humidity_;
    double pressure_;

public:
    WeatherData(/* args */){};
    ~WeatherData(){};

    double measurementChanged(double temperature,
                              double humidity,
                              double pressure)
    {
        temperature_ = temperature;
        humidity_ = humidity;
        pressure_ = pressure;

        this->updateObserver();
    }

    void registerObserver(ObserverInterface* ob)
    {
        observers_.push_back(ob);
    }

    void removeObserver(ObserverInterface* ob)
    {
        for (size_t i = 0; i < observers_.size(); i++)
        {
            if (observers_[i] == ob)
            {
                observers_.erase(observers_.begin() + i, observers_.begin() + i + 1);
                return;
            }
        }
        std::cout << "Observer Not Found" << std::endl;
    }

    void updateObserver()
    {
        std::cout << "-------------------" << std::endl;
        for (auto observer: observers_)
        {
            observer->update();
        }
    }

    double getTemperature() {return temperature_;}
    
    double getHumidity() {return humidity_;}
    
    double getPressure() {return pressure_;}
};



#endif