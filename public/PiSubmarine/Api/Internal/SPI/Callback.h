#pragma once

#include <cstdint>
#include <functional>

namespace PiSubmarine::Api::Internal::SPI
{
	using Callback = std::function<void(bool)>;
}