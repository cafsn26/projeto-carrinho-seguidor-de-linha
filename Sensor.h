#ifndef SENSOR_H
#define SENSOR_H
class Sensor{
    /*
        Define um sensor, seus atributos e métodos
        atrs:
            sensor: pino onde o sensor está conectado

    */
    private:
    int sensor;

    public:
    Sensor(int sensor);
    /*
        Monta o sensor, com seus métodos
        args:
            sensor: inteiro que representa a porta que o sensor está conectado na placa
        returns:
            Nenhum
    */
    int getSensor();
    /*
        Pega o pino que o sensor está conectado
        args: 
            Nenhum
        returns:
            int valor do pino que o sensor está conectado
    */

    int ler();
    /*
        Lê e retorna a leitura do sensor 
        args:
            Nenhum
        returns:
            int leitura do sensor

    */
};
#endif