#ifndef ABSTRACTVEHICLE_H
#define ABSTRACTVEHICLE_H

class AbstractVehicle {
    public:
        virtual void showInfo() = 0;
        virtual ~AbstractVehicle() = default;

        std::string vehicleName;
        int wheelCount;
        float maxSpeed;
};

#endif // ABSTRACTVEHICLE_H