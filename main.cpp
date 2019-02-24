#include "vocabulary_parser.h"

int main() {
	vocabulary_parser::VocabularyParser vocabulary_parser;
	vocabulary_parser.load("vocab.txt", "int\tfloat\tu_int32\tmystruct_1");
	return 0;
}
