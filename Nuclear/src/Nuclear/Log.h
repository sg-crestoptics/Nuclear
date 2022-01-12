#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Nuclear {

	class NUCLEAR_API Log
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

// Core log macros
#define NC_CORE_ERROR(...)		::Nuclear::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NC_CORE_WARN(...)		::Nuclear::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NC_CORE_INFO(...)		::Nuclear::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NC_CORE_TRACE(...)		::Nuclear::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NC_CORE_FATAL(...)		::Nuclear::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define NC_ERROR(...)			::Nuclear::Log::GetClientLogger()->error(__VA_ARGS__)
#define NC_WARN(...)			::Nuclear::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NC_INFO(...)			::Nuclear::Log::GetClientLogger()->info(__VA_ARGS__)
#define NC_TRACE(...)			::Nuclear::Log::GetClientLogger()->trace(__VA_ARGS__)
#define NC_FATAL(...)			::Nuclear::Log::GetClientLogger()->fatal(__VA_ARGS__)

