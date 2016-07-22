#pragma once
#include "types.hpp"
#include <vector>

class basic_internal_stream {
public:
	virtual ~basic_internal_stream() {}

	virtual byte ReadByte() = 0;
	virtual std::vector<byte> ReadBytes(const int size) = 0;
};
