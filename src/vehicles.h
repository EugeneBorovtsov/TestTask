
#ifndef VEHICLES_H
#define VEHICLES_H

// Сущности объеденены в один файл, для упрощения архитектуры проекта

#include <iostream>
#include "abstractvehicle.h"

class MotorBike: public AbstractVehicle {
    void showInfo() override {
        std::cout << "info motorbike" << std::endl;
    }
};

class Scooter: public AbstractVehicle {
    void showInfo() override {
        std::cout << "info scooter" << std::endl;
    }
};

class Car: public AbstractVehicle {
    void showInfo() override {
        std::cout << "info car" << std::endl;
    }
};

class Bus: public AbstractVehicle {
    void showInfo() override {
        std::cout << "info bus" << std::endl;
    }
};

#endif // VEHICLES_H