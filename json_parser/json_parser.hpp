#pragma once
#include <string>
#include <vector>
#include <map>

using namespace std;

namespace zircon {
namespace json {

class json {
public:
	enum json_data_type {
		json_data_type_null = 0,
		json_data_type_bool = 1,
		json_data_type_int = 2,
		json_data_type_double = 3,
		json_data_type_string = 4,
		json_data_type_array = 5,
		json_data_type_object = 6,
	};

	union json_data_value {
		bool json_data_value_null;
		bool json_data_value_bool;
		int json_data_value_int;
		double json_data_value_double;
		string* json_data_value_string;
		vector<json>* json_data_value_array;
		map<string, json>* json_data_value_object;
	};

//private:

	json_data_type data_type;
	json_data_value data_value;
};

}
}