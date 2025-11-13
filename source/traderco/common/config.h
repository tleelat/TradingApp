/**
 *
 *  TraderCo - Common
 *
 *  Copyright (c) 2024 My New Project
 *  @file config.h
 *  @brief Helpers for loading configuration from environment variables with sensible defaults.
 *  @author My New Project Team
 *  @date 2024.11.13
 *
 */

#pragma once

#include <cstdlib>
#include <string>
#include <string_view>

namespace Config
{
/**
 * @brief Load a configuration value from an environment variable or return a placeholder.
 * @param env_var Name of the environment variable to read.
 * @param fallback Placeholder value to return when the environment variable is unset or empty.
 * @return Resolved configuration value as a std::string.
 */
inline std::string load_env_or_default(const char* env_var, std::string_view fallback) {
    if (env_var == nullptr) {
        return std::string(fallback);
    }
    if (const char* value = std::getenv(env_var); value != nullptr && *value != '\0') {
        return std::string(value);
    }
    return std::string(fallback);
}

/**
 * @brief Load an integer configuration value from an environment variable or return a fallback.
 * @param env_var Name of the environment variable to read.
 * @param fallback Default integer value to use when the environment variable is unset, empty, or invalid.
 * @return Resolved configuration value as an integer.
 */
inline int load_env_or_default(const char* env_var, int fallback) {
    if (env_var == nullptr) {
        return fallback;
    }
    if (const char* value = std::getenv(env_var); value != nullptr && *value != '\0') {
        try {
            return std::stoi(value);
        } catch (...) {
            return fallback;
        }
    }
    return fallback;
}
}

