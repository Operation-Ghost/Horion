#pragma once

enum class TagType{
	END,
	BYTE,
	SHORT,
	INT,
	LONG,
	FLOAT,
	DOUBLE,
	BYTE_ARRAY,
	STRING,
	LIST,
	COMPOUND,
	INT_ARRAY
};

class MojangsonToken {
public:
	static MojangsonToken COMPOUND_START;
	static MojangsonToken COMPOUND_END;
	static MojangsonToken ELEMENT_SEPERATOR;
	static MojangsonToken ARRAY_START;
	static MojangsonToken ARRAY_END;
	static MojangsonToken ELEMENT_PAIR_SEPERATOR;
	static MojangsonToken STRING_QUOTES;
	static MojangsonToken DOUBLE_SUFFIX;
	static MojangsonToken BYTE_SUFFIX;
	static MojangsonToken FLOAT_SUFFIX;
	static MojangsonToken SHORT_SUFFIX;
	static MojangsonToken LONG_SUFFIX;
	static MojangsonToken WHITE_SPACE;
private:
	int id;
	std::string name;
	char symbol;
public:
	MojangsonToken(int id,std::string name, char symbol) {
		this->id = id;
		this->name = name;
		this->symbol = symbol;
	}

	int getId() {
		return id;
	}

	std::string getName() {
		return name;
	}

	char getSymbol() {
		return symbol;
	}

	
	std::string toString() {
		//return String.valueOf(symbol);
	}
};

MojangsonToken MojangsonToken::COMPOUND_START(0, "Compound_Start", '{');
MojangsonToken MojangsonToken::COMPOUND_END(1, "Compound_End", '}');
MojangsonToken MojangsonToken::ELEMENT_SEPERATOR(2, "Element_Seperator", ',');
MojangsonToken MojangsonToken::ARRAY_START(3, "Array_Start", '[');
MojangsonToken MojangsonToken::ARRAY_END(4, "Array_End", ']');
MojangsonToken MojangsonToken::ELEMENT_PAIR_SEPERATOR(5, "Pair_Seperator", ':');
MojangsonToken MojangsonToken::STRING_QUOTES(6, "String_Quotes", '\"');
MojangsonToken MojangsonToken::DOUBLE_SUFFIX(8, "Double_Suffix", 'd');
MojangsonToken MojangsonToken::BYTE_SUFFIX(9, "Byte_Suffix", 'b');
MojangsonToken MojangsonToken::FLOAT_SUFFIX(10, "Float_Suffix", 'f');
MojangsonToken MojangsonToken::SHORT_SUFFIX(11, "Short_Suffix", 's');
MojangsonToken MojangsonToken::LONG_SUFFIX(12, "Long_Suffix", 'l');
MojangsonToken MojangsonToken::WHITE_SPACE(13, "WhiteSpace", ' ');
