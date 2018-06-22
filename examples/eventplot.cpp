#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include "../matplotlibcpp.h"

namespace plt = matplotlibcpp;

int main()
{
    // Prepare data.
    std::vector<std::vector<double>> events;
    events.push_back({2,5,10,25});
    events.push_back({20,21,22,24});
    events.push_back({4,8,12,14,16,17,18});
    events.push_back({10,11,12,13.5});



    // Set the size of output image = 1200x780 pixels
    plt::figure_size(1200, 780);

    plt::eventplot(events);

    // Add graph title
    plt::title("Event plot");
    plt::xlabel("Time in ms");
    plt::ylabel("Neuron ID");

    plt::show();
    // save figure
    const char* filename = "./events.png";
    std::cout << "Saving result to " << filename << std::endl;;
    plt::save(filename);
}
