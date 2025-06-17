#include "SmartItf.hpp"
#include "ClassManager.hpp"

using namespace dice::hfe;

bool SmartItf::create(uint32_t cid)
{
	if (m_class != nullptr)
	{
		m_class->release();
	}

	m_class = g_classManager->createInstance(cid, m_iid, nullptr);
	return m_class != nullptr;
}
