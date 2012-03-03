#pragma once

namespace Sogl {

// No reason to use cmath's powerful pow() to do a simple ^2,
// that would be like dropping a nuke on a fly to kill it
#define POWER2(x) x * x


};
