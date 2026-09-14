#ifndef ARRAY_SENSORES_H
#define ARRAY_SENSORES_H
#include "Sensor.h"

class ArraySensores{
    /*
        Classe que tem como objetivo agrupar todos os sensores para melhor manutenabilidade

        atrs:
        esquerdo3: Sensor esquerdo mais extremo, o da ponta esquerda
        esquerdo2: Sensor esquerdo do lado do da ponta
        esquerod1: Sensor esquerdo do lado do esquerdo 2
        centralEsquerdo: Sensor que fica no meio da placa,mais pra esquerda, se for contar, da esquerda pra direita seria o 4
        CentralDireito: Sensor que fica no meio da placa, mais pra direita, se for contar, da esquerda pra direita seria o 5
        direito1: Sensor da parte direita que fica próximo ao central direito
        direito2: Sensor da parte direita, fica no meio do direito 1 e do da extremidade
        direito3: Sensor da extremidade direita (último da esquerda pra direita)


        lateralEsquerda: Sensor lateral direito para identificar o bloco para curva de 90
        lateraDireita: Sensor lateral direito para identificar o bloco para curva de 90
        ps: tudo considerando que você está encarando o e a placa de sensor dele está na frente.
    */

    private:
    Sensor esquerdo3;
    Sensor esquerdo2;
    Sensor esquerdo1;
    Sensor centralEsquerdo;
    Sensor centralDireito;
    Sensor direito1;
    Sensor direito2;
    Sensor direito3;

    Sensor lateralEsquerda;
    Sensor lateralDireita;

    public:
    ArraySensores(const int pinos[10]);
        /*
            Pega e cria o array de sensores a partir de uma lista com o número deles
            
            args:
                pinos: lista com os 8 pinos que estão conectados aos sensores
            returns:
                Nenhum

            ps: A lista precisa estar com as portas dos sensores na ordem dos atributos da classe.
        */
    bool verificarLinhaMeio();
        /*
        Verifica se tem linha no meio do carrinho 

        args:
            Nenhum
        returns:
            booleano: se os sensores lerem linha retorna 1 se nao retorna 0   
        */
    bool verificarEsquerda();
        /*
            Verificar a ativação dos sensores da esquerda

            args:
                Nenhum
            returns: 
                valor booleano se qualquer um dos sensores da esquerda ler preto = verdadeiro, se tudo ler branco = falso
        */
    bool verificarDireita();
        /*
            Verifica a ativação dos sensoras da direita
            args: 
                Nenhum
            returns:
                valor booleano se qualquer um dos sensores da direita ler preto = verdadeiro, se tudo ler branco = falso
        */
    bool verificarLateralDireita();
        /*
        '''
        Verifica a presença de um quadrado na lateral Direita do carrinho

        args:
            Nenhum
        returns:
            valor booleano se está ou não percebendo um quadrado na lateral direita 
            1=sim 0=não
        
        '''
        */

    bool verificarLateralEsquerda();
        /*
        '''
        Verifica a presença de um quadrado na lateral esquerda do carrinho

        args:
            Nenhum
        returns:
            valor booleano se está ou não percebendo um quadrado na lateral esquerda 
            1=sim 0=não
        
        '''
        */
};

#endif