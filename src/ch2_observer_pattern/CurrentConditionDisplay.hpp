#ifndef HPP_CURRENTCONDITIONDISPLAY_
#define HPP_CURRENTCONDITIONDISPLAY_

#include "ObserverInterface.hpp"
#include "DisplayInterface.hpp"
#include "WeatherData.hpp"
#include <iostream>

class CurrentConditionDisplay: public ObserverInterface, public DisplayInterface
{
    private:
        WeatherData* subject_;
        
        double temperature_;
        double humidity_;
        double pressure_;

    public:
        CurrentConditionDisplay(WeatherData* subject)
        {
            subject_ = subject;
            subject_->registerObserver(this);
            std::cout << "Current Condition Display has registered Weather Data." << std::endl;
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
            std::cout << "Current Condition Display has unsubscribed Weather Data." << std::endl;
        }

        void display()
        {
            std::cout << "Current Condition: Temperature: " << temperature_
                      << " Humidity: " << humidity_
                      << " Pressure: " << pressure_ << "." << std::endl;
        }

};

#endif