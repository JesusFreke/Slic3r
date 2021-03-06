#ifndef slic3r_PresetHints_hpp_
#define slic3r_PresetHints_hpp_

#include <string>

#include "PresetBundle.hpp"

namespace Slic3r {

// GUI utility functions to produce hint messages from the current profile.
class PresetHints
{
public:
    // Produce a textual description of the cooling logic of a currently active filament.
    static std::string cooling_description(const Preset &preset);
    // Produce a textual description of the maximum flow achived for the current configuration
    // (the current printer, filament and print settigns).
    // This description will be useful for getting a gut feeling for the maximum volumetric
    // print speed achievable with the extruder.
    static std::string maximum_volumetric_flow_description(const PresetBundle &preset_bundle);
};

} // namespace Slic3r

#endif /* slic3r_PresetHints_hpp_ */
