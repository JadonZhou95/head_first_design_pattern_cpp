#ifndef HPP_STATISTICS_DISPLAY_
#define HPP_STATISTICS_DISPLAY

#include "DisplayInterface.hpp"
#include "ObserverInterface.hpp"
#include "WeatherData.hpp"
#include <iostream>
#include <numeric>

class StatisticsDisplay: public ObserverInterface, public DisplayInterface
{
    private:
        WeatherData* subject_;

        std::vector<double> temperatures_, humidities_, pressures_;
    
    public:
        StatisticsDisplay(WeatherData* subject)
        {
            subject_ = subject;
            subject_->registerObserver(this);
            std::cout << "Statistics Display has registered Weather Data." << std::endl;
        }

        void update()
        {
            temperatures_.push_back(subject_->getTemperature());
            humidities_.push_back(subject_->getHumidity());
            pressures_.push_back(subject_->getPressure());
            
            this->display();
        }

        void unsubscribe()
        {
            subject_->removeObserver(this);
            std::cout << "Statistics Display has unsubscribed Weather Data." << std::endl;
        }

        void display()
        {
            std::cout << "Avg. T: " << std::accumulate(temperatures_.begin(), temperatures_.end(), 0.0) / temperatures_.size()
                      << " Avg. H: " << std::accumulate(humidities_.begin(), humidities_.end(), 0.0) / humidities_.size()
                      << " Avg. P: " << std::accumulate(pressures_.begin(), pressures_.end(), 0.0) / pressures_.size() << std::endl;
        }


};


#endif