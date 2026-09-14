#ifndef MOTOR_H
#define MOTOR_H
class Motor{
    /*
    Define o que é um motor, seus métodos e atributos.

    atrs: 
        sentido1: pino controlador de direção 1 conectado na placa
        sentido2: pino controlador de direção 2 conectado na placa
        pwm: pino pwm conectado na placa
    
    */
    private:
    int sentido1;
    int sentido2;
    int pwm;

    public:
        Motor(int sentido1, int sentido2, int pwm);
        /*
        Construtor de Motor, "monta" um motor com os métodos
        args: 
            sentido1: pino controlador de direção 1 conectado na placa
            sentido2: pino controlador de direção 2 conectado na placa
            pwm: pino pwm conectado na placa
        returns: 
            Nenhum


        */
        int getsentido1();
        /*
            pega o valor do pino sentido1
            args:
                Nenhum
            returns:
                int valor do pino sentido1
        */
        int getsentido2();
        /*
            pega o valor do pino sentido2
            args:
                Nenhum
            returns:
                int valor do pino sentido2
        */
        int getPwm();
        /*
            Pega o balor do pino pwm
            args: 
                Nenhum
            returns:
                int valor do pino pwm    
        */
        void girarParaFrente(int velocidade);
        /*
            Gira o Motor, empurrando para frente

            args:
                int velocidade do giro
            returns:
                Nenhum
        */
        void girarParaTras(int velocidade);
        /*
            Gira o Motor, empurrando para trás
            args:
                int velocidade do giro
            returns:
                Nenhum
        */
        void parar();
        /*
            Para a rotação do motor
            args:
                Nenhum
            returns:
                Nenhum
        */


};

#endif