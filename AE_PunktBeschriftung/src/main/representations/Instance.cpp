#include <representations/Instance.hpp>

#include <iostream>

#include <string>
using std::string;

#include <vector>
using std::vector;


Instance::Instance() : points{} {};

// Constructor: initializes points and reserves memory
Instance::Instance(int size) : points{} {
    reserve(size);
}

// reserves the needed space in memory for the vector of points and indices
void Instance::reserve(int num) {
    this->points.reserve(num);
}

// adds a point to this instance
void Instance::add(Point& point) {

    for(Point& p : points) {

        if(point.couldCollide(p)) {
            p.addNeighbour(point);
            point.addNeighbour(p);
        }
    }
    this->points.push_back(point);
}

// prints every point of this instance to the stream
std::ostream& operator<<(std::ostream& ostream, const Instance& instance) {
    ostream << instance.size() << "\n";
    for (auto const &point : instance.points) {
        ostream << point << std::endl;
    }
    return ostream;
}

// returns the number of points
int Instance::size() const {
    return this->points.size();
}

// returns a reference to the point at a given index
const Point& Instance::getPoint(int idx) const {
    return points.at(idx);
}