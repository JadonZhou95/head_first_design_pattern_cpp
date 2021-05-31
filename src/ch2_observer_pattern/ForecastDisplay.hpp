#ifndef HPP_FORECASTDISPLAY_
#define HPP_FORECASTDISPLAY_

#include "ObserverInterface.hpp"
#include "DisplayInterface.hpp"
#include "WeatherData.hpp"
#include <iostream>

class ForecastDisplay: public ObserverInterface, public DisplayInterface
{
    private:
        WeatherData* subject_;
        
        double temperature_;
        double humidity_;
        double pressure_;

    public:
        ForecastDisplay(WeatherData* subject)
        {
            subject_ = subject;
            subject_->registerObserver(this);
            std::cout << "Forecast Display has registered Weather Data." << std::endl;
        }

        void update()
        {
            temperature_ = subject_->getTemperature();
            humidity_ = subject_->getHumidity();
            pressure_ = subject_->getPressure();

            this->display();
        }

        void unsubscribe()
        {
            subject_->removeObserver(this);
            std::cout << "Forecast Display has unsubscribed Weather Data." << std::endl;
        }

        void display()
        {
            std::cout << "Forecast: Temperature: " << temperature_ + 1.0
                      << " Humidity: " << humidity_ + 1.0
                      << " Pressure: " << pressure_ + 1.0 << "." << std::endl;
        }
};

#endif