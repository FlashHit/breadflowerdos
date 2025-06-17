#pragma once

#include <cstdint>

namespace dice::hfe
{
	template <class T, typename U>
	class SmartItf
	{
	public:
		T* m_class;
		U m_iid;

	public:
		bool create(uint32_t cid);
	};
}	 // namespace dice::hfe
