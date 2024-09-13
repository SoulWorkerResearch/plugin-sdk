#pragma once

#include <filesystem>
#include <format>
#include <fmt/format.h>

template<>
struct std::formatter<std::filesystem::directory_entry> : formatter<std::string>
{
    auto format(const std::filesystem::directory_entry& _value, format_context& ctx) const -> decltype(ctx.out())
    {
        return format_to(ctx.out(), "{}", _value.path().string());
    }
};

