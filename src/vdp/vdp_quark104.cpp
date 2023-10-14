#include "Arduino.h"

// VDP uses various functions before their definition, so here
// vdp-console8.h gives those functions prototypes to avoid errors
#include "vdp_quark104.h"

// VDP version-agnostic getters :)
fabgl::SoundGenerator *getVDPSoundGenerator() {
	return &SoundGenerator;
}

#include "vdp-quark104/video.ino"
