#include <iostream>
#include <cpr/cpr.h>

void get_road_network()
{
    cpr::Response r = cpr::Get(cpr::Url{"https://nvdbapiles-v3.atlas.vegvesen.no/"});

    std::cout << r.url << std::endl;                    // http://www.httpbin.org/get
    std::cout << r.status_code << std::endl;            // 200
    std::cout << r.header["content-type"] << std::endl; // application/json
    std::cout << r.text << std::endl;
}

int main()
{
    get_road_network();

    return 0;
}