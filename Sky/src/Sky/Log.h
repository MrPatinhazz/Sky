#pragma once

#include "Core.h"

#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Sky {
	class SKY_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core log macros
#define SKY_CORE_TRACE(...) ::Sky::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SKY_CORE_INFO(...)	::Sky::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SKY_CORE_WARN(...)	::Sky::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SKY_CORE_ERROR(...) ::Sky::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SKY_CORE_CRITICAL(...) ::Sky::Log::GetCoreLogger()->critical(__VA_ARGS__)

//Client log macros
#define SKY_TRACE(...) ::Sky::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SKY_INFO(...)	::Sky::Log::GetClientLogger()->info(__VA_ARGS__)
#define SKY_WARN(...)	::Sky::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SKY_ERROR(...) ::Sky::Log::GetClientLogger()->error(__VA_ARGS__)
#define SKY_CRITICAL(...) ::Sky::Log::GetClientLogger()->critical(__VA_ARGS__)

