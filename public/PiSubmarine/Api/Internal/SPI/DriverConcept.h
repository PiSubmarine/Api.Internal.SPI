#pragma once

#include <cstdint>
#include "PiSubmarine/Api/Internal/SPI/Callback.h"

namespace PiSubmarine::Api::Internal::SPI
{
	template<typename T>
	concept DriverConcept = requires(T driver, uint8_t* txData, uint8_t* rxData, size_t len)
	{
		{ driver.WriteRead(txData, rxData, len) } -> std::same_as<bool>;
	};

}