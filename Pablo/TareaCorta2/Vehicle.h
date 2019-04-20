//
// Created by pablo on 19/04/19.
//

#ifndef TAREACORTA2_VEHICLE_H
#define TAREACORTA2_VEHICLE_H


class Vehicle {
    private:
        int timeA, timeB, timeC, timeD, timeE, timeF;
        bool a, b ,c ,d ,e;


    public:
        Vehicle();
        Vehicle(int timeA, int timeB, int timeC, int timeD, int timeE, int timeF);
         ///////////////////////////////////////////////////Getters////////////////////////////////////////////
        int getTimeA() ;

        int getTimeB();

        int getTimeC();

        int getTimeD();

        int getTimeE();

        bool isA();

        bool isB();

        bool isC();

        bool isD();

        bool isE();
        ////////////////////////////////////////////////////Setters/////////////////////////////////////////////
        void setA(bool a);

    void setB(bool b);

    void setC(bool c);

    void setD(bool d);

    void setE(bool e);

    int getTimeF();

    void setTimeF(int timeF);
};


#endif //TAREACORTA2_VEHICLE_H
