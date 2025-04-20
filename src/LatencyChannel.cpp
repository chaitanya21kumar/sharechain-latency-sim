#include "LatencyChannel.hpp"
#include <random>

double LatencyChannel::getRandomDelay() {
    static std::default_random_engine generator;
    static std::uniform_real_distribution<double> distribution(10.0, 150.0); // Random latency between 10ms to 150ms
    return distribution(generator);
}
