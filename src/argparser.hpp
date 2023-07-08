#pragma once

#include <string>

void test() {
	argparser::ArgParser parser("frc");
	
}

namespace argparser {
	class ArgParser;
	struct ParsedResult;
	
	class ArgParser {
	public:
		std::string name;

		ArgParser(char* name) { ArgParser(std::string(name)); }
		ArgParser(const std::string &name) { this->name = name; }

		~ArgParser() {

		}

		ArgParser addSubCommand();

		ParsedResult build(int argc, char* argv[]);
	};

	ParsedResult ArgParser::build(int argc, char* argv[]) {
		
	}

	struct ParsedResult {
		template <typename T> T get(const std::string& name) {
			
		}
	};
}