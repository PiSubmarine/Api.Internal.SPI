#pragma once

#include "PiSubmarine/Api/Internal/SPI/Callback.h"

namespace PiSubmarine::Api::Internal::SPI
{
	template<typename T>
	concept DriverConcept = requires(T driver, uint8_t * txData, uint8_t * rxData, size_t len, Callback callback)
	{
		{ driver.Write(txData, len) } -> std::same_as<bool>;
		{ driver.Read(rxData, len) } -> std::same_as<bool>;
		{ driver.WriteAsync(txData, len, callback) } -> std::same_as<bool>;
		{ driver.ReadAsync(rxData, len, callback) } -> std::same_as<bool>;
	};

}