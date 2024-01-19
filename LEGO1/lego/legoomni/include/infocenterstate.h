#ifndef INFOCENTERSTATE_H
#define INFOCENTERSTATE_H

#include "decomp.h"
#include "legostate.h"
#include "mxstillpresenter.h";

// VTABLE: LEGO1 0x100d93a8
// SIZE 0x94
class InfocenterState : public LegoState {
public:
	InfocenterState();
	virtual ~InfocenterState();

	// FUNCTION: LEGO1 0x10071840
	inline virtual const char* ClassName() const override // vtable+0x0c
	{
		// STRING: LEGO1 0x100f04dc
		return "InfocenterState";
	}

	// FUNCTION: LEGO1 0x10071850
	inline virtual MxBool IsA(const char* p_name) const override // vtable+0x10
	{
		return !strcmp(p_name, InfocenterState::ClassName()) || LegoState::IsA(p_name);
	}

	// FUNCTION: LEGO1 0x10071830
	virtual MxBool VTable0x14() override { return FALSE; } // vtable+0x14

	inline MxS16 GetInfocenterBufferSize() { return sizeof(m_buffer) / sizeof(m_buffer[0]); }
	inline MxStillPresenter* GetInfocenterBufferElement(MxS32 p_index) { return m_buffer[p_index]; }
	inline MxU32 GetUnknown0x74() { return m_unk0x74; }

	inline void SetUnknown0x74(MxU32 p_unk0x74) { m_unk0x74 = p_unk0x74; }

	// SYNTHETIC: LEGO1 0x10071900
	// InfocenterState::`scalar deleting destructor'

private:
	// Members should be renamed with their offsets before use
	/*
	  struct UnkStruct
	  {
		undefined4 unk1;
		undefined2 unk2;
		undefined2 unk3;
		undefined2 unk4;
	  };

	  undefined2 unk1;
	  undefined2 unk2;
	  undefined4 unk3;
	  undefined4 padding1;
	  void *unk4;
	  undefined2 unk5;
	  undefined2 unk6;
	  undefined2 unk7;
	  undefined2 padding2;
	  void *unk8;
	  undefined2 unk9;
	  undefined2 unk10;
	  undefined2 unk11;
	  undefined2 padding3;
	  UnkStruct unk12[6];
	  undefined4 unk13;
	*/

	undefined m_pad[0x6c];
	MxU32 m_unk0x74;               // 0x74
	MxStillPresenter* m_buffer[7]; // 0x78
};

#endif // INFOCENTERSTATE_H