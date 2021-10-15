// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This program will calculate area of triangle

#include <iostream>
#include <string>
#include <cmath>

float CalculateVolume(float radius, float height) {
    // This function will convert levels to percentage
    float volume = M_PI * pow(radius, 2) * height;

    return volume;
}

int main() {
    // this is he main function
    float radiusUser;
    float heightUser;
    std::string radiusUserString;
    std::string heightUserString;

    std::cout << "This program calculated the volume of a cylinder."
    <<std::endl;
    std::cout << "Please enter the radius and the height." <<std::endl;

    // input
    std::cout << "\nThe radius is (mm) : ";
    std::cin >> radiusUserString;
    std::cout << "The radius is (mm) : ";
    std::cin >> heightUserString;

    // output
    try {
        radiusUser = std::stof(radiusUserString);
        heightUser = std::stof(heightUserString);
        // call functions
        float volume = CalculateVolume(radiusUser, heightUser);
        std::cout << "\nThe volume of a cylinder with a radius " << radiusUser
        << " mm and a height of " << heightUser << " mm is " << volume
        << " mm³." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid input" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
