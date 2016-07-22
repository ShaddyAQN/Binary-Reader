#pragma once
#include <fstream>
#include "basic_internal_stream.hpp"

class file_stream : public basic_internal_stream
{
public:
	template<typename... stream_param>
	explicit file_stream(stream_param... arguments);
	~file_stream();
	byte ReadByte() override;

	std::vector<byte> ReadBytes(const int size) override;

private:
	std::ifstream m_file;
	bool valid;
};

template<typename ... stream_param>
file_stream::file_stream(stream_param... arguments) : m_file{ arguments... }, valid{ true } 
{
	if (!m_file.is_open())
		throw std::runtime_error{ "Couldn't open replay file!" }; 

	// Stop eating new lines in binary mode!!!
	m_file.unsetf(std::ios::skipws);
}
