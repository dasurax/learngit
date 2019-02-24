#pragma once
#include <fstream>
#include <string>
#include <vector>

namespace vocabulary_parser {
using std::string;
class VocabularyParser {
public:
	VocabularyParser() {}
	void load(const string &vocabulary_file_name, const string &columns_type);
	VocabularyParser& parse_line();
	template <typename T>
	void get_column(const int &index, T*);
private:
	static const int MAX_COLUMN = 100;
	std::vector<string> _columns_content;
	int _colunm_num;
	std::vector<string> _columns_type;
	std::ifstream _vocabulary_file_in_stream;
};
}