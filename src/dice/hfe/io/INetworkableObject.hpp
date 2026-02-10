#pragma once

#include <dice/hfe/IBase.hpp>

namespace dice::hfe::io
{
	const uint32_t IID_INetworkableObject = 0x57F7B4D2;

	class INetworkableObject : public IBase
	{
	public:
		int32_t m_ownerId;
	public:
		virtual void setOwnerID(int32_t ownerId)
		{
			m_ownerId = ownerId;
		}

		virtual void predict(float) = 0;
	};
}
