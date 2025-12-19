#include "BIN_BLOB.h"
const unsigned char blobData[] = {0x0
};

BinBlob GetBlob()
{
	static BinBlob blob(blobData, sizeof(blobData));
	return blob;
}
