#include "GameEvent.hpp"

using dice::hfe;

/**
 * @brief Adds a reference to this class
 */
void GameEvent::addRef()
{
	m_refCount++;
}

/**
 * @brief Gets the current reference count
 * @return uint32_t Current
 * reference count
 */
uint32_t GameEvent::getRef()
{
	return m_refCount;
}

/**
 * @brief TODO: Documentation
 * @return uint32_t
 */
uint32_t GameEvent::release()
{
	m_refCount--;
	if (m_refCount != 0)
	{
		return m_refCount;
	}

	delete this;
	return 0;
}

/**
 * @brief TODO: Documentation
 * @param p_param
 * @return GameEvent*
 */
GameEvent* GameEvent::queryInterface(uint32_t p_param)
{
	if (p_param == IID_IBase)
		return this;

	return nullptr;
}
