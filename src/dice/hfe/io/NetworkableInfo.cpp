#include "NetworkableInfo.hpp"

using dice::hfe::io;

NetworkableInfo::NetworkableInfo() :
	m_refCount(1),
	m_isControlledBy(-1),
	m_hasOrientation(false),
	m_hasYaw(false),
	m_hasPitch(false),
	m_hasRoll(false),
	m_isUnique(false),
	m_basePriority(1.f),
	m_forceNetworkableId(false),
	m_predictionMode(0),
	m_name("")
{
}

/**
 * @brief Adds a reference to this class
 */
void NetworkableInfo::addRef()
{
	m_refCount++;
}

/**
 * @brief Gets the current reference count
 * @return uint32_t Current
 *
 *
 * reference count
 */
uint32_t NetworkableInfo::getRef()
{
	return m_refCount;
}

/**
 * @brief TODO: Documentation
 * @return uint32_t
 */
uint32_t NetworkableInfo::release()
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
 * @return ModuleIO*
 */
NetworkableInfo* NetworkableInfo::queryInterface(uint32_t p_param)
{
	if (p_param == IID_IBase)
		return this;

	if (p_param == IID_INetworkableInfo)
		return this;

	return nullptr;
}

void NetworkableInfo::setName(const std::string& name)
{
	m_name = name;
}

const std::string& NetworkableInfo::getName()
{
	return m_name;
}

int32_t NetworkableInfo::getID()
{
	return m_id;
}

void NetworkableInfo::setID(int32_t id)
{
	m_id = id;
}

void NetworkableInfo::setPredictionMode(PredictionMode predictionMode)
{
	m_predictionMode = predictionMode;
}

PredictionMode NetworkableInfo::getPredictionMode()
{
	return m_predictionMode;
}

void NetworkableInfo::setBasePriority(float value)
{
	if (value > 255.0f)
		value = 255.0f;

	m_basePriority = value;
}

float NetworkableInfo::getBasePriority()
{
	return m_basePriority;
}

void NetworkableInfo::setIsUnique(bool isUnique)
{
	m_isUnique = isUnique;
}

bool NetworkableInfo::getIsUnique()
{
	return m_isUnique;
}

void NetworkableInfo::setForceNetworkableId(bool forceNetworkableId)
{
	m_forceNetworkableId = forceNetworkableId;
}

bool NetworkableInfo::getForceNetworkableId()
{
	return m_forceNetworkableId;
}

int32_t NetworkableInfo::getIsControlledBy()
{
	return m_isControlledBy;
}

void NetworkableInfo::setIsControlledBy(int32_t isControlledBy)
{
	m_isControlledBy = isControlledBy;
}

bool NetworkableInfo::getHasOrientation()
{
	return m_hasOrientation;
}

void NetworkableInfo::setHasOrientation(bool hasOrientation)
{
	m_hasOrientation = hasOrientation;
}

bool NetworkableInfo::getHasYaw()
{
	return m_hasYaw;
}

bool NetworkableInfo::getHasPitch()
{
	return m_hasPitch;
}

bool NetworkableInfo::getHasRoll()
{
	return m_hasRoll;
}

void NetworkableInfo::setHasYaw(bool hasYaw)
{
	m_hasYaw = hasYaw;
}

void NetworkableInfo::setHasPitch(bool hasPitch)
{
	m_hasPitch = hasPitch;
}

void NetworkableInfo::setHasRoll(bool hasRoll)
{
	m_hasRoll = hasRoll;
}
