/*
 * Copyright (C) 2017 The LineageOS Project
 * Copyright (C) 2017 TeamNexus
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SAMSUNG_AUDIO_COMMON_H
#define SAMSUNG_AUDIO_COMMON_H

#include <zero-helpers.h>
#include <telephony/ril.h>

/*
 * Sound card specific defines.
 *
 * This is an example configuration for a WolfsonMicro WM1814 sound card.
 * Codec: Vegas
 *
 * If you driver does not support one of the devices, the id should not be
 * defined.
 */

#define MIXER_CARD 0
#define SOUND_CARD 0

/* Playback */
#define SOUND_DEEP_BUFFER_DEVICE 3
#define SOUND_PLAYBACK_DEVICE 6
#define SOUND_PLAYBACK_SCO_DEVICE 2

/* Capture */
#define SOUND_CAPTURE_DEVICE 0
#define SOUND_CAPTURE_SCO_DEVICE 2

/* Voice calls */
#define SOUND_PLAYBACK_VOICE_DEVICE 1
#define SOUND_CAPTURE_VOICE_DEVICE 1

/* Wideband AMR callback */
#ifdef RIL_UNSOL_SNDMGR_WB_AMR_REPORT
  #undef RIL_UNSOL_SNDMGR_WB_AMR_REPORT
#endif

#define RIL_UNSOL_SNDMGR_WB_AMR_REPORT RIL_UNSOL_WB_AMR_STATE

/* DSP offload */
#define SOUND_COMPRESS_OFFLOAD_DEVICE 11

/* Unusupported
#define SOUND_CAPTURE_LOOPBACK_AEC_DEVICE 1
#define SOUND_CAPTURE_HOTWORD_DEVICE 0
*/

/*
 * If the device has stereo speakers and the speakers are arranged on
 * different sides of the device you can activate this feature by
 * setting it to 1.
 */
#define SWAP_SPEAKER_ON_SCREEN_ROTATION 0

/*
 * You can that this to 1 if your kernel supports irq affinity for
 * fast mode. See /proc/asound/irq_affinity
 */
#define SUPPORTS_IRQ_AFFINITY 0

/*
 * ril_set_call_clock_sync() may cause unknown problems with the call-mic.
 * Uncomment this to disable the support for it.
 */
#define DISABLE_CALL_CLOCK_SYNC

/*
 * The Wolfson/Cirruslogic chips need to shutdown the DAPM route completely
 * to be able to load a new firmware. Some of these chips need a delay after
 * shutodown to full poweroff the DSPs.
 *
 * A good value to start with is 10ms:
 *
 * #define DSP_POWEROFF_DELAY 10 * 1000
 */
/* #define DSP_POWEROFF_DELAY 0 */

/*
 * Runtime audience support detection
 */
#define AUDIENCE_SUPPORTED  zero_audio_supports_audience
__maybe_unused
static bool zero_audio_supports_audience() {
	enum zero_model model = zero_model_read();
	switch (model) {
		case TMOBILE:
		case CANADA:
			return true;
		default:
			return false;
	}
}

/*
 * Runtime mixer paths file selection routine
 */
#define MIXER_PATHS_FILE_ROUTINE  zero_audio_select_mixer_paths
__maybe_unused
static bool zero_audio_select_mixer_paths(char *path) {
	if (AUDIENCE_SUPPORTED())
		strcpy(path, "/vendor/etc/mixer_paths-audience.xml");
	else
		strcpy(path, "/vendor/etc/mixer_paths.xml");

	return true;
}

#define MIXER_PATH_MAX_LENGTH 255
#define MIXER_XML_PATH "mixer_paths.xml" 

#endif // SAMSUNG_AUDIO_COMMON_H
