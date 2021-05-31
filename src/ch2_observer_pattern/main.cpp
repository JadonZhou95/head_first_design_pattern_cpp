#include "WeatherData.hpp"
#include "CurrentConditionDisplay.hpp"
#include "ForecastDisplay.hpp"
#include "StatisticsDisplay.hpp"

int main()
{
    WeatherData weatherData;

    CurrentConditionDisplay currentConditionDisplay(&weatherData);
    StatisticsDisplay statisticsDisplay(&weatherData);
    ForecastDisplay forecastDisplay(&weatherData);

    weatherData.measurementChanged(30, 40, 100);
    weatherData.measurementChanged(31, 41, 101);
    weatherData.measurementChanged(32, 42, 102);

    forecastDisplay.unsubscribe();
    weatherData.measurementChanged(32, 42, 102);

    return 0;
}