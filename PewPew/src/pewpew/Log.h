#pragma once
#include "Core.h" 
#include "spdlog/spdlog.h"
#include <memory>
namespace PewPew {
	class PEW_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetCliendLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#define PEW_CORE_ERROR(...) ::PewPew::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PEW_CORE_WARN(...)  ::PewPew::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PEW_CORE_INFO(...)  ::PewPew::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PEW_CORE_TRACE(...) ::PewPew::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PEW_CORE_FATAL(...) ::PewPew::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define PEW_CLIENT_ERROR(...) ::PewPew::Log::GetCliendLogger()->error(__VA_ARGS__)
#define PEW_CLIENT_WARN(...)  ::PewPew::Log::GetCliendLogger()->warn(__VA_ARGS__)
#define PEW_CLIENT_INFO(...)  ::PewPew::Log::GetCliendLogger()->info(__VA_ARGS__)
#define PEW_CLIENT_TRACE(...) ::PewPew::Log::GetCliendLogger()->trace(__VA_ARGS__)
#define PEW_CLIENT_FATAL(...) ::PewPew::Log::GetCliendLogger()->fatal(__VA_ARGS__)

