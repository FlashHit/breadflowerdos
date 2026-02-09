#pragma once

#include <dice/hfe/IEventListener.hpp>

namespace dice::hfe
{
	class PerformanceLogging : public IEventListener
	{
	public:
		uint8_t m_unknown08[0x30];

		virtual void handleEvent([[maybe_unused]] EventCategory p_Category, [[maybe_unused]] uint32_t p_Type, [[maybe_unused]] EventNode* p_EventNode, [[maybe_unused]] void* p_Data) override { }
	};
}
