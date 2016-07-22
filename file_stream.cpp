#include "file_stream.hpp"



file_stream::~file_stream()
{
}

byte file_stream::ReadByte()
{
	if(!valid)
		throw std::runtime_error{ "Error!" };

	byte b;
	if (!m_file.read(&b, 1))
		valid = false;

	return b;
}

std::vector<byte> file_stream::ReadBytes(const int size)
{
	//if (!valid)
	//	throw std::runtime_error{ "Error!" };

	//std::vector<byte> data(size);
	//if(!m_file.read(data.data(), size))
	//	valid = false;

	std::vector<byte> data;
	for (int i = 0; i < size; ++i)
		data.push_back(ReadByte());

	return data;
}
