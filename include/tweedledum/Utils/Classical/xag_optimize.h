/*------------------------------------------------------------------------------
| Part of Tweedledum Project.  This file is distributed under the MIT License.
| See accompanying file /LICENSE for details.
*-----------------------------------------------------------------------------*/
#pragma once

#include <mockturtle/networks/xag.hpp>

// TODO: Find a better place to put this?!
// It's a bit annoying that mockturtle don't default flows

namespace mockturtle {
template<class Ntk>
struct free_xor_cost {
    uint32_t operator()(Ntk const& ntk, node<Ntk> const& n) const
    {
        return ntk.is_xor(n) ? 0 : 1;
    }
};
} // namespace mockturtle

namespace tweedledum {

void xag_optimize(mockturtle::xag_network& xag);

} // namespace tweedledum
