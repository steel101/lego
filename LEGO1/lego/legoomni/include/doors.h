#ifndef DOORS_H
#define DOORS_H

#include "legopathactor.h"

class LegoROI;

// VTABLE: LEGO1 0x100d4788
// SIZE 0x1f8
class Doors : public LegoPathActor {
public:
	Doors() : m_unk0x154(0), m_ltDoor(NULL), m_rtDoor(NULL), m_unk0x1f4(0) {}

	// FUNCTION: LEGO1 0x1000e430
	const char* ClassName() const override // vtable+0x0c
	{
		// STRING: LEGO1 0x100f03e8
		return "Doors";
	}

	// FUNCTION: LEGO1 0x1000e440
	MxBool IsA(const char* p_name) const override // vtable+0x10
	{
		return !strcmp(p_name, Doors::ClassName()) || LegoPathActor::IsA(p_name);
	}

	void ParseAction(char* p_extra) override;                            // vtable+0x20
	void VTable0x70(float p_float) override;                             // vtable+0x70
	MxResult VTable0x94(LegoPathActor* p_actor, MxBool p_bool) override; // vtable+0x94
	virtual double VTable0xcc(float p_float);                            // vtable+0xcc

	// SYNTHETIC: LEGO1 0x1000e580
	// Doors::`scalar deleting destructor'

private:
	undefined4 m_unk0x154;  // 0x154
	MxFloat m_unk0x158;     // 0x158
	LegoROI* m_ltDoor;      // 0x15c
	LegoROI* m_rtDoor;      // 0x160
	MxMatrix m_ltDoorLocal; // 0x164
	MxMatrix m_rtDoorLocal; // 0x1ac
	MxFloat m_unk0x1f4;     // 0x1f4
};

#endif // DOORS_H
