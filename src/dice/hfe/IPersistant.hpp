#pragma once

#include "IBase.hpp"

namespace dice::hfe
{
	const uint32_t IID_IPersistant = 0x2;

	class IPersistant : public IBase
	{
	public:
		virtual uint32_t getClassID() = 0;
	};
}
