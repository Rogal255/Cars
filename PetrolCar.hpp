#pragma once
#include <memory>
#include "Car.hpp"
#include "PetrolEngine.hpp"

class PetrolCar : virtual public Car {
public:
    PetrolCar(std::unique_ptr<PetrolEngine> engine);
    virtual ~PetrolCar();
    void refill() override;

private:
    void refuel();
    std::unique_ptr<PetrolEngine> petrolEngine_;
};
