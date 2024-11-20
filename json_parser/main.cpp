#include <iostream>
#include "json_parser.hpp"

using namespace std;
using namespace zircon::json;

int main()
{
    json j1, j2, j3;
    vector<json> vec;
    vec.emplace_back(j2);
    vec.emplace_back(j3);
    j1.data_value.json_data_value_array = &vec;

    return 0;
}