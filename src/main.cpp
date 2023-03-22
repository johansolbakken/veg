#include <iostream>
#include <cpr/cpr.h>
#include "json.h"

void get_road_network()
{
    cpr::Response r = cpr::Get(cpr::Url{"https://vegkart.atlas.vegvesen.no"});

    std::cout << r.text << std::endl;
}

int main(int argc, char **argv)
{
    get_road_network();
    return 0;
}