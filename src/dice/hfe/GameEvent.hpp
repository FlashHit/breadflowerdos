#pragma once

#include <dice/hfe/IBase.hpp>

namespace dice::hfe::io
{
	class BitStream;
}
	
namespace dice::hfe
{
	class GameEvent : IBase
	{
	public:
		uint32_t m_refCount;
		uint32_t _0xc;

	public:
		GameEvent() : m_refCount(1), _0xc(-1) { }
		virtual void addRef() override;
		virtual uint32_t getRef() override;
		virtual uint32_t release() override;
		virtual GameEvent* queryInterface(uint32_t) override;

		virtual ~GameEvent() = default;
		virtual uint32_t getType() const = 0;

		virtual void logInfo(bool, int32_t) { }

		virtual void eventReceivedByRemote(void*) { }

		virtual bool executeClient()
		{
			return true;
		}

		virtual bool executeServer(int32_t)
		{
			return true;
		}

		virtual bool deSerialize(io::BitStream*) = 0;
		virtual bool serialize(io::BitStream*) = 0;
	}
}
