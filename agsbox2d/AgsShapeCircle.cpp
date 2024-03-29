#include "AgsShapeCircle.h"
#include "Scale.h"

AgsShapeCircle::AgsShapeCircle(float32 radius) {
	B2AgsShapeCircle = new b2CircleShape();
	B2AgsShapeCircle->m_radius = Scale::ScaleDown(radius);
}

AgsShapeCircle::~AgsShapeCircle(void)
{
}


//------------------------------------------------------------------------------


extern IAGSEngine* engine;

AgsShapeCircleInterface AgsShapeCircle_Interface;
AgsShapeCircleReader AgsShapeCircle_Reader;

const char* AgsShapeCircleInterface::name = "ShapeCircle";

//------------------------------------------------------------------------------

int AgsShapeCircleInterface::Dispose(const char* address, bool force)
{
	//delete ((AgsShapeCircle*)address);
	return (1);
}

//------------------------------------------------------------------------------

int AgsShapeCircleInterface::Serialize(const char* address, char* buffer, int bufsize)
{
	AgsShapeCircle* arr = (AgsShapeCircle*)address;
	char* ptr = buffer;
	
	return (ptr - buffer);
}

//------------------------------------------------------------------------------

void AgsShapeCircleReader::Unserialize(int key, const char* serializedData, int dataSize)
{
//	AgsShapeCircle* arr = new AgsShapeCircle(0,0);

//	const char* ptr = serializedData;

//	engine->RegisterUnserializedObject(key, arr, &AgsShapeCircle_Interface);
}

//..............................................................................
