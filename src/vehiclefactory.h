#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H

#include <memory>

#include "src/abstractvehicle.h"
#include "src/vehicles.h"

class VehicleFactory {
    public:
        enum VehicleType {
            MOTORBIKE = 0,
            SCOOTER,
            CAR,
            BUS,
            UNDEFINED
        };

        static std::unique_ptr<AbstractVehicle> createVehicle(VehicleType type) {
            switch (type) {
                case VehicleType::MOTORBIKE:
                    return std::make_unique<MotorBike>();
                case VehicleType::SCOOTER:
                    return std::make_unique<Scooter>();
                default: 
                    return nullptr;
            }
        }
        static VehicleType intToVehicleType(int index) {
            switch (index) {
                case 0:
                    return VehicleType::MOTORBIKE;
                case 1:
                    return VehicleType::SCOOTER;
                case 2:
                    return VehicleType::CAR;
                case 3:
                    return VehicleType::BUS;
                default:
                    return VehicleType::UNDEFINED;
            }
        }
};

#endif // VEHICLEFACTORY_H