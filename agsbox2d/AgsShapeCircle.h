#pragma once

#ifndef _AGS_SHAPE_CIRCLE_H
#define _AGS_SHAPE_CIRCLE_H

#include "Box2D.h"
#include "plugin/agsplugin.h"

class AgsShapeCircle
{
public:
	AgsShapeCircle(float32 radius);
	~AgsShapeCircle(void);
	b2CircleShape* B2AgsShapeCircle;
};



//------------------------------------------------------------------------------
// AGS interface instances

class AgsShapeCircleInterface : public IAGSScriptManagedObject
{
public:
	static const char* name;

	AgsShapeCircleInterface() {};

	virtual int Dispose(const char* address, bool force);
	virtual const char* GetType() { return (name); }
	virtual int Serialize(const char* address, char* buffer, int bufsize);

};

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

class AgsShapeCircleReader : public IAGSManagedObjectReader
{
public:

	AgsShapeCircleReader() {}

	virtual void Unserialize(int key, const char* serializedData, int dataSize);

};

//------------------------------------------------------------------------------

extern AgsShapeCircleInterface AgsShapeCircle_Interface;
extern AgsShapeCircleReader AgsShapeCircle_Reader;

//------------------------------------------------------------------------------

#endif /* _AGS_SHAPE_CIRCLE_H */

//..............................................................................