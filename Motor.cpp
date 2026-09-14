#include <Arduino.h>
#include "Motor.h"

Motor::Motor(int sentido1, int sentido2, int pwm){
            this->sentido1 = sentido1;
            this->sentido2 = sentido2;
            this->pwm = pwm;

            pinMode(sentido1, OUTPUT);
            pinMode(sentido2,OUTPUT);
            pinMode(pwm,OUTPUT);
        }
        int Motor::getsentido1(){
            return this->sentido1;
        }

        int Motor::getsentido2(){
            return this->sentido2;
        }
        int Motor::getPwm(){
            return this->pwm;
        }            
        void Motor::girarParaFrente(int velocidade){
            digitalWrite(sentido1,HIGH);
            digitalWrite(sentido2,LOW);
            analogWrite(pwm,velocidade)
        }
        void Motor::girarParaTras(int velocidade){
            digitalWrite(sentido1,LOW);
            digitalWrite(sentido2,HIGH);
            analogWrite(pwm,velocidade);

        }
        void Motor::parar(){
            digitalWrite(sentido1,LOW);
            digitalWrite(sentido2,LOW);
            analogWrite(pwm,velocidade);
        }
