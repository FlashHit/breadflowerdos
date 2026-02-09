#pragma once

#include <dice/hfe/IBase.hpp>
#include <string>

namespace dice::hfe::io
{
	enum class PredictionMode;

	const uint32_t IID_INetworkableInfo = 0xBB1FD9FC;

	class INetworkableInfo : public IBase
	{
	public:
		virtual void setName(const std::string&) = 0;
		virtual const std::string& getName() = 0;
		virtual int32_t getID() = 0;
		virtual void setID(int32_t) = 0;
		virtual void setPredictionMode(PredictionMode) = 0;
		virtual PredictionMode getPredictionMode() = 0;
		virtual void setBasePriority(float) = 0;
		virtual float getBasePriority() = 0;
		virtual void setIsUnique(bool) = 0;
		virtual bool getIsUnique() = 0;
		virtual void setForceNetworkableId(bool) = 0;
		virtual bool getForceNetworkableId() = 0;
	};
}	 // namespace dice::hfe::io
