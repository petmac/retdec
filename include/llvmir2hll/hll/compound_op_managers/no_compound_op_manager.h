/**
* @file include/llvmir2hll/hll/compound_op_managers/no_compound_op_manager.h
* @brief A compound operator manager that turns off all compound
*        optimizations.
* @copyright (c) 2017 Avast Software, licensed under the MIT license
*/

#ifndef LLVMIR2HLL_HLL_COMPOUND_OP_MANAGERS_NO_COMPOUND_OP_MANAGER_H
#define LLVMIR2HLL_HLL_COMPOUND_OP_MANAGERS_NO_COMPOUND_OP_MANAGER_H

#include "llvmir2hll/hll/compound_op_manager.h"

namespace llvmir2hll {

/**
* @brief Compound operator manager that turns off all compound optimizations.
*
* This is a concrete compound operator manager which should not be subclassed.
*/
class NoCompoundOpManager final: public CompoundOpManager {
public:
	NoCompoundOpManager();

	virtual ~NoCompoundOpManager() override;

	virtual std::string getId() const override;
};

} // namespace llvmir2hll

#endif
