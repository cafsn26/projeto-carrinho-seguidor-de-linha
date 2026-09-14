#include <Arduino.h>
#include "Sensor.h"

    Sensor::Sensor(int sensor){
            this->sensor = sensor;
            pinMode(sensor,INPUT_PULLUP);
    }

    int Sensor::getSensor(){
        return this->sensor;
    }

    int Sensor::ler(){
        return digitalRead(sensor);
    }