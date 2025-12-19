#pragma once
class BinBlob {
	const unsigned char* data;
	size_t length;
public:
	BinBlob(const unsigned char* data, size_t length) : data(data), length(length) {}
	const unsigned char* getData() const { return data; }
	size_t getLength() const { return length; }
};
extern BinBlob GetBlob();