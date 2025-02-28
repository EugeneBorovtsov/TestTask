#ifndef ABSTRACTVEHICLE_H
#define ABSTRACTVEHICLE_H

class AbstractVehicle {
    public:
        virtual void showInfo() = 0;
        virtual ~AbstractVehicle() = default;

    protected:
        std::string _vehicleName;
        int _wheelCount;
        float _maxSpeed;
};

#endif // ABSTRACTVEHICLE_H