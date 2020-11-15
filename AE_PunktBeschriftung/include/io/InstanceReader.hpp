#pragma once

#include <representations/Instance.hpp>
#include <representations/Point.hpp>
#include <representations/Solution.hpp>

#include <string>

void readInstance(const std::string& filename, Instance& instance, Solution& solution);

void parseLine(Instance& instance, const std::string& line, Solution& solution, int counter);

int parsePositiveInteger(const std::string& line);

void checkBoxConsistency(int x, int y, int width, int height, int upperLeftX, int upperLeftY);

Point::Corner parseCornerPlacement(int x, int y, int upperLeftX, int upperLeftY);
