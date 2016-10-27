#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomRotator
struct  RandomRotator_t4051853642  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rigidbody RandomRotator::rb
	Rigidbody_t3346577219 * ___rb_2;
	// System.Single RandomRotator::tumble
	float ___tumble_3;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(RandomRotator_t4051853642, ___rb_2)); }
	inline Rigidbody_t3346577219 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody_t3346577219 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody_t3346577219 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier(&___rb_2, value);
	}

	inline static int32_t get_offset_of_tumble_3() { return static_cast<int32_t>(offsetof(RandomRotator_t4051853642, ___tumble_3)); }
	inline float get_tumble_3() const { return ___tumble_3; }
	inline float* get_address_of_tumble_3() { return &___tumble_3; }
	inline void set_tumble_3(float value)
	{
		___tumble_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
