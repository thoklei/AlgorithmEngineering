#ifndef LABEL_MAP_SIMULATEDANNEALING_HPP
#define LABEL_MAP_SIMULATEDANNEALING_HPP

#include <random>
#include <representations/SimulatedAnnealingSolution.hpp>

class SimulatedAnnealing {
private:
    constexpr static const double DEC_1 = 0.98;
    constexpr static const double T0_START = 2;
    constexpr static const double T_MIN_1 = 0.5;
    constexpr static const double T_MIN_2 = 0.01;

    static SimulatedAnnealingSolution getInitialSolution(Instance& instance);

    static bool acceptWorseSolution(double difference, double currentTemperature, double random);

public:
    static SimulatedAnnealingSolution solve(Instance& instance);

};


#endif //LABEL_MAP_SIMULATEDANNEALING_HPP
