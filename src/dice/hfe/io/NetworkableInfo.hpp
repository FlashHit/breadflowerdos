#pragma once

#include <dice/hfe/io/INetworkableInfo.hpp>

namespace dice::hfe::io
{
	enum class PredictionMode;

	class NetworkableInfo : INetworkableInfo
	{
	public:
		char _0x08[0x04];
		int32_t m_refCount;
		int32_t m_isControlledBy;
		bool m_hasOrientation;
		bool m_hasYaw;
		bool m_hasPitch;
		bool m_hasRoll;
		bool m_isUnique;
		float m_basePriority;
		bool m_forceNetworkableId;
		int32_t m_id;
		PredictionMode m_predictionMode;
		std::string m_name;


	public:
		NetworkableInfo();

		virtual void addRef() override;
		virtual uint32_t getRef() override;
		virtual uint32_t release() override;
		virtual NetworkableInfo* queryInterface(uint32_t) override;

		virtual void setName(const std::string&) override;
		virtual const std::string& getName() override;
		virtual int32_t getID() override;
		virtual void setID(int32_t) override;
		virtual void setPredictionMode(PredictionMode) override;
		virtual PredictionMode getPredictionMode() override;
		virtual void setBasePriority(float) override;
		virtual float getBasePriority() override;
		virtual void setIsUnique(bool) override;
		virtual bool getIsUnique() override;
		virtual void setForceNetworkableId(bool) override;
		virtual bool getForceNetworkableId() override;

		virtual ~NetworkableInfo() = default;
		virtual int32_t getIsControlledBy();
		virtual void setIsControlledBy(int32_t);
		virtual bool getHasOrientation();
		virtual void setHasOrientation(bool);
		virtual bool getHasYaw();
		virtual bool getHasPitch();
		virtual bool getHasRoll();
		virtual void setHasYaw(bool);
		virtual void setHasPitch(bool);
		virtual void setHasRoll(bool);
	}
#if defined(_WIN32)
	// TODO: Win32 static_assert
#else
	static_assert(sizeof(NetworkableInfo) == 0x38); // bf2: 007c508f
	static_assert(offsetof(NetworkableInfo, m_refCount) == 0x0C);
	static_assert(offsetof(NetworkableInfo, m_isControlledBy) == 0x10);
	static_assert(offsetof(NetworkableInfo, m_isUnique) == 0x18);
	static_assert(offsetof(NetworkableInfo, m_basePriority) == 0x1C);
	static_assert(offsetof(NetworkableInfo, m_forceNetworkableId) == 0x20);
	static_assert(offsetof(NetworkableInfo, m_id) == 0x24);
	static_assert(offsetof(NetworkableInfo, m_predictionMode) == 0x28);
	static_assert(offsetof(NetworkableInfo, m_name) == 0x30);
#endif
}
