#pragma once

#include <cstdint>
#include <type_traits>

#include "ClassManager.hpp"
#include "IBase.hpp"

namespace dice::hfe
{
	template <typename T>
	concept DerivedFromIBase = std::is_base_of<IBase, T>::value;

	template <DerivedFromIBase T, uint32_t IID>
	class SmartItf
	{
	public:
		T* m_class;

		static constexpr uint32_t m_iid = IID;

	public:
		SmartItf() :
			m_class(nullptr)
		{
		}

		bool create(uint32_t cid)
		{
			if (m_class != nullptr)
			{
				m_class->release();
			}

			m_class = static_cast<T*>(g_classManager->createInstance(cid, m_iid, nullptr));
			return m_class != nullptr;
		}
	};
}	 // namespace dice::hfe
