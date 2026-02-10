#pragma once

#include <dice/hfe/INetworkableObject.hpp>

namespace dice::hfe::io
{
	class NetworkableObjectBase : public INetworkableObject
	{
		NetworkableObjectBase() :
			m_ownedId(-1)
		{
		}
	};
}
