#include <iostream>
#include "vocabulary_parser.h"
#include "string_util.h"

namespace vocabulary_parser {
void VocabularyParser::load(const string &vocabulary_file_name, const string &columns_type) {
	_vocabulary_file_in_stream.open(vocabulary_file_name);
	string_util::split(columns_type, _columns_type, "\t");
	for (auto iter = _columns_type.cbegin(); iter != _columns_type.cend(); iter++)
	{
		std::cout << (*iter) << std::endl;
	}
	string line;
	while (getline(_vocabulary_file_in_stream, line))
	{
		std::cout << line << std::endl;
	}
	_vocabulary_file_in_stream.close();
}

//void VocabularyParser::load(const string &vocabulary_file_name, const string &columns_type) {
//	_vocabulary_file_in_stream.open(vocabulary_file_name);
//	string line;
//	while (getline(_vocabulary_file_in_stream, line))
//	{
//		std::cout << line << std::endl;
//	}
//	_vocabulary_file_in_stream.close();
//}
}