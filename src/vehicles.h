
#ifndef VEHICLES_H
#define VEHICLES_H

// Сущности объеденены в один файл, для упрощения архитектуры проекта

#include <iostream>
#include "abstractvehicle.h"

using namespace std;

class MotorBike: public AbstractVehicle {
    public:
        MotorBike() {
            _vehicleName = "мотоцикл";
            _wheelCount = 2;
            _maxSpeed = 200.0; // Явно не указано в ТЗ
        }

    void showInfo() override {
        cout << "Наименование транспорта: " << _vehicleName << endl;
        cout << "Кол-во колес: " << _wheelCount << endl;
        cout << "Максимальная скорость: " << _maxSpeed << endl;
    }
};

class Scooter: public AbstractVehicle {
    public: 
        Scooter() {
            _vehicleName = "самокат";
            _wheelCount = 2;
            _maxSpeed = 50.0;
        }

    void showInfo() override {
        cout << "Наименование транспорта: " << _vehicleName << endl;
        cout << "Кол-во колес: " << _wheelCount << endl;
        cout << "Максимальная скорость: " << _maxSpeed << endl;
    }
};

class Car: public AbstractVehicle {
    public:
        Car() {
            _vehicleName = "автомобиль";
            _wheelCount = 4;
            _maxSpeed = 150.0;
        }

    void showInfo() override {
        cout << "Наименование транспорта: " << _vehicleName << endl;
        cout << "Кол-во колес: " << _wheelCount << endl;
        cout << "Максимальная скорость: " << _maxSpeed << endl;
    }
};

class Bus: public AbstractVehicle {
    public:
        Bus() {
            _vehicleName = "автобус";
            _wheelCount = 6;
            _maxSpeed = 100.0;
            _maxPassengersCount = 20;
        }

    void showInfo() override {
        cout << "Наименование транспорта: " << _vehicleName << endl;
        cout << "Кол-во колес: " << _wheelCount << endl;
        cout << "Максимальная скорость: " << _maxSpeed << endl;
        cout << "Максимальное количество пассажиров: " << _maxPassengersCount << endl;
    }

    protected:
        int _maxPassengersCount;
};

#endif // VEHICLES_H