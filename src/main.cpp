#include <iostream>
#include <cpr/cpr.h>
#include "frontend/application.h"

void get_road_network()
{
    cpr::Response r = cpr::Get(cpr::Url{"https://nvdbapiles-v3.atlas.vegvesen.no/"});

    std::cout << r.url << std::endl;                    // http://www.httpbin.org/get
    std::cout << r.status_code << std::endl;            // 200
    std::cout << r.header["content-type"] << std::endl; // application/json
    std::cout << r.text << std::endl;
}

int main(int argc, char **argv)
{
    Application app;
    return app.run(argc, argv);
}