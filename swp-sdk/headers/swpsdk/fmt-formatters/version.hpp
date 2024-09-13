#pragma once

#include "../version.hpp"
#include <format>
#include <fmt/format.h>

template<>
struct std::formatter<swpsdk::version> : formatter<std::string>
{
    auto format(const swpsdk::version& _value, format_context& ctx) const -> decltype(ctx.out())
    {
        return format_to(ctx.out(), "{}.{}.{}.{}", _value.major, _value.minor, _value.patch, _value.build);
    }
};