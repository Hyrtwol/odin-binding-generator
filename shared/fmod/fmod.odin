package fmod

foreign import "fmodex_vc"

import _c "core:c"

_FMOD_H :: 1;
FMOD_VERSION :: 279600;
FMOD_CAPS_NONE :: 0;
FMOD_CAPS_HARDWARE :: 1;
FMOD_CAPS_HARDWARE_EMULATED :: 2;
FMOD_CAPS_OUTPUT_MULTICHANNEL :: 4;
FMOD_CAPS_OUTPUT_FORMAT_PCM8 :: 8;
FMOD_CAPS_OUTPUT_FORMAT_PCM16 :: 16;
FMOD_CAPS_OUTPUT_FORMAT_PCM24 :: 32;
FMOD_CAPS_OUTPUT_FORMAT_PCM32 :: 64;
FMOD_CAPS_OUTPUT_FORMAT_PCMFLOAT :: 128;
FMOD_CAPS_REVERB_LIMITED :: 8192;
FMOD_CAPS_LOOPBACK :: 16384;
FMOD_DEBUG_LEVEL_NONE :: 0;
FMOD_DEBUG_LEVEL_LOG :: 1;
FMOD_DEBUG_LEVEL_ERROR :: 2;
FMOD_DEBUG_LEVEL_WARNING :: 4;
FMOD_DEBUG_LEVEL_HINT :: 8;
FMOD_DEBUG_LEVEL_ALL :: 255;
FMOD_DEBUG_TYPE_MEMORY :: 256;
FMOD_DEBUG_TYPE_THREAD :: 512;
FMOD_DEBUG_TYPE_FILE :: 1024;
FMOD_DEBUG_TYPE_NET :: 2048;
FMOD_DEBUG_TYPE_EVENT :: 4096;
FMOD_DEBUG_TYPE_ALL :: 65535;
FMOD_DEBUG_DISPLAY_TIMESTAMPS :: 16777216;
FMOD_DEBUG_DISPLAY_LINENUMBERS :: 33554432;
FMOD_DEBUG_DISPLAY_COMPRESS :: 67108864;
FMOD_DEBUG_DISPLAY_THREAD :: 134217728;
FMOD_DEBUG_DISPLAY_ALL :: 251658240;
FMOD_DEBUG_ALL :: 4294967295;
FMOD_MEMORY_NORMAL :: 0;
FMOD_MEMORY_STREAM_FILE :: 1;
FMOD_MEMORY_STREAM_DECODE :: 2;
FMOD_MEMORY_SAMPLEDATA :: 4;
FMOD_MEMORY_DSP_OUTPUTBUFFER :: 8;
FMOD_MEMORY_XBOX360_PHYSICAL :: 1048576;
FMOD_MEMORY_PERSISTENT :: 2097152;
FMOD_MEMORY_SECONDARY :: 4194304;
FMOD_MEMORY_ALL :: 4294967295;
FMOD_INIT_NORMAL :: 0;
FMOD_INIT_STREAM_FROM_UPDATE :: 1;
FMOD_INIT_3D_RIGHTHANDED :: 2;
FMOD_INIT_SOFTWARE_DISABLE :: 4;
FMOD_INIT_OCCLUSION_LOWPASS :: 8;
FMOD_INIT_HRTF_LOWPASS :: 16;
FMOD_INIT_DISTANCE_FILTERING :: 512;
FMOD_INIT_REVERB_PREALLOCBUFFERS :: 64;
FMOD_INIT_ENABLE_PROFILE :: 32;
FMOD_INIT_VOL0_BECOMES_VIRTUAL :: 128;
FMOD_INIT_WASAPI_EXCLUSIVE :: 256;
FMOD_INIT_PS3_PREFERDTS :: 8388608;
FMOD_INIT_PS3_FORCE2CHLPCM :: 16777216;
FMOD_INIT_DISABLEDOLBY :: 1048576;
FMOD_INIT_SYSTEM_MUSICMUTENOTPAUSE :: 2097152;
FMOD_INIT_SYNCMIXERWITHUPDATE :: 4194304;
FMOD_INIT_GEOMETRY_USECLOSEST :: 67108864;
FMOD_INIT_DISABLE_MYEARS_AUTODETECT :: 134217728;
FMOD_INIT_PS3_DISABLEDTS :: 268435456;
FMOD_INIT_PS3_DISABLEDOLBYDIGITAL :: 536870912;
FMOD_INIT_7POINT1_DOLBYMAPPING :: 1073741824;
FMOD_DEFAULT :: 0;
FMOD_LOOP_OFF :: 1;
FMOD_LOOP_NORMAL :: 2;
FMOD_LOOP_BIDI :: 4;
FMOD_2D :: 8;
FMOD_3D :: 16;
FMOD_HARDWARE :: 32;
FMOD_SOFTWARE :: 64;
FMOD_CREATESTREAM :: 128;
FMOD_CREATESAMPLE :: 256;
FMOD_CREATECOMPRESSEDSAMPLE :: 512;
FMOD_OPENUSER :: 1024;
FMOD_OPENMEMORY :: 2048;
FMOD_OPENMEMORY_POINT :: 268435456;
FMOD_OPENRAW :: 4096;
FMOD_OPENONLY :: 8192;
FMOD_ACCURATETIME :: 16384;
FMOD_MPEGSEARCH :: 32768;
FMOD_NONBLOCKING :: 65536;
FMOD_UNIQUE :: 131072;
FMOD_3D_HEADRELATIVE :: 262144;
FMOD_3D_WORLDRELATIVE :: 524288;
FMOD_3D_INVERSEROLLOFF :: 1048576;
FMOD_3D_LINEARROLLOFF :: 2097152;
FMOD_3D_LINEARSQUAREROLLOFF :: 4194304;
FMOD_3D_CUSTOMROLLOFF :: 67108864;
FMOD_3D_IGNOREGEOMETRY :: 1073741824;
FMOD_UNICODE :: 16777216;
FMOD_IGNORETAGS :: 33554432;
FMOD_LOWMEM :: 134217728;
FMOD_LOADSECONDARYRAM :: 536870912;
FMOD_VIRTUAL_PLAYFROMSTART :: 2147483648;
FMOD_TIMEUNIT_MS :: 1;
FMOD_TIMEUNIT_PCM :: 2;
FMOD_TIMEUNIT_PCMBYTES :: 4;
FMOD_TIMEUNIT_RAWBYTES :: 8;
FMOD_TIMEUNIT_PCMFRACTION :: 16;
FMOD_TIMEUNIT_MODORDER :: 256;
FMOD_TIMEUNIT_MODROW :: 512;
FMOD_TIMEUNIT_MODPATTERN :: 1024;
FMOD_TIMEUNIT_SENTENCE_MS :: 65536;
FMOD_TIMEUNIT_SENTENCE_PCM :: 131072;
FMOD_TIMEUNIT_SENTENCE_PCMBYTES :: 262144;
FMOD_TIMEUNIT_SENTENCE :: 524288;
FMOD_TIMEUNIT_SENTENCE_SUBSOUND :: 1048576;
FMOD_TIMEUNIT_BUFFERED :: 268435456;
FMOD_REVERB_FLAGS_HIGHQUALITYREVERB :: 1024;
FMOD_REVERB_FLAGS_HIGHQUALITYDPL2REVERB :: 2048;
FMOD_REVERB_FLAGS_HARDWAREONLY :: 4096;
FMOD_REVERB_FLAGS_DEFAULT :: 0;
FMOD_REVERB_CHANNELFLAGS_INSTANCE0 :: 16;
FMOD_REVERB_CHANNELFLAGS_INSTANCE1 :: 32;
FMOD_REVERB_CHANNELFLAGS_INSTANCE2 :: 64;
FMOD_REVERB_CHANNELFLAGS_INSTANCE3 :: 128;
FMOD_REVERB_CHANNELFLAGS_DEFAULT :: 16;
__FMOD_EVENT_H__ :: 1;
FMOD_EVENT_VERSION :: 279600;
FMOD_EVENT_INIT_NORMAL :: 0;
FMOD_EVENT_INIT_USER_ASSETMANAGER :: 1;
FMOD_EVENT_INIT_FAIL_ON_MAXSTREAMS :: 2;
FMOD_EVENT_INIT_DONTUSENAMES :: 4;
FMOD_EVENT_INIT_UPPERCASE_FILENAMES :: 8;
FMOD_EVENT_INIT_LOWERCASE_FILENAMES :: 128;
FMOD_EVENT_INIT_SEARCH_PLUGINS :: 16;
FMOD_EVENT_INIT_USE_GUIDS :: 32;
FMOD_EVENT_INIT_DETAILED_SOUNDDEF_INFO :: 64;
FMOD_EVENT_INIT_RESETPARAMSTOMINIMUM :: 256;
FMOD_EVENT_INIT_ELEVATION_AFFECTS_LISTENER_ANGLE :: 512;
FMOD_EVENT_INIT_DONTUSELOWMEM :: 1024;
FMOD_EVENT_DEFAULT :: 0;
FMOD_EVENT_NONBLOCKING :: 1;
FMOD_EVENT_ERROR_ON_DISKACCESS :: 2;
FMOD_EVENT_INFOONLY :: 4;
FMOD_EVENT_USERDSP :: 8;
FMOD_EVENT_NONBLOCKING_THREAD0 :: 1;
FMOD_EVENT_NONBLOCKING_THREAD_MAX :: 5;
FMOD_EVENT_STATE_READY :: 1;
FMOD_EVENT_STATE_LOADING :: 2;
FMOD_EVENT_STATE_ERROR :: 4;
FMOD_EVENT_STATE_PLAYING :: 8;
FMOD_EVENT_STATE_CHANNELSACTIVE :: 16;
FMOD_EVENT_STATE_INFOONLY :: 32;
FMOD_EVENT_STATE_STARVING :: 64;
FMOD_EVENT_STATE_NEEDSTOLOAD :: 128;
__FMOD_EVENT_NET_H__ :: 1;
FMOD_EVENT_NET_VERSION :: 279600;
FMOD_EVENT_NET_PORT :: 17997;
_FMOD_ERRORS_H :: 1;
_FMOD_OUTPUT_H :: 1;

FMOD_BOOL :: _c.int;
FMOD_MODE :: _c.uint;
FMOD_TIMEUNIT :: _c.uint;
FMOD_INITFLAGS :: _c.uint;
FMOD_CAPS :: _c.uint;
FMOD_DEBUGLEVEL :: _c.uint;
FMOD_MEMORY_TYPE :: _c.uint;
FMOD_SYSTEM_CALLBACK :: #type proc(system : ^FMOD_SYSTEM, type : FMOD_SYSTEM_CALLBACKTYPE, commanddata1 : rawptr, commanddata2 : rawptr) -> FMOD_RESULT;
FMOD_CHANNEL_CALLBACK :: #type proc(channel : ^FMOD_CHANNEL, type : FMOD_CHANNEL_CALLBACKTYPE, commanddata1 : rawptr, commanddata2 : rawptr) -> FMOD_RESULT;
FMOD_SOUND_NONBLOCKCALLBACK :: #type proc(sound : ^FMOD_SOUND, result : FMOD_RESULT) -> FMOD_RESULT;
FMOD_SOUND_PCMREADCALLBACK :: #type proc(sound : ^FMOD_SOUND, data : rawptr, datalen : _c.uint) -> FMOD_RESULT;
FMOD_SOUND_PCMSETPOSCALLBACK :: #type proc(sound : ^FMOD_SOUND, subsound : _c.int, position : _c.uint, postype : _c.uint) -> FMOD_RESULT;
FMOD_FILE_OPENCALLBACK :: #type proc(name : cstring, unicode : _c.int, filesize : ^_c.uint, handle : ^rawptr, userdata : ^rawptr) -> FMOD_RESULT;
FMOD_FILE_CLOSECALLBACK :: #type proc(handle : rawptr, userdata : rawptr) -> FMOD_RESULT;
FMOD_FILE_READCALLBACK :: #type proc(handle : rawptr, buffer : rawptr, sizebytes : _c.uint, bytesread : ^_c.uint, userdata : rawptr) -> FMOD_RESULT;
FMOD_FILE_SEEKCALLBACK :: #type proc(handle : rawptr, pos : _c.uint, userdata : rawptr) -> FMOD_RESULT;
FMOD_FILE_ASYNCREADCALLBACK :: #type proc(info : ^FMOD_ASYNCREADINFO, userdata : rawptr) -> FMOD_RESULT;
FMOD_FILE_ASYNCCANCELCALLBACK :: #type proc(handle : rawptr, userdata : rawptr) -> FMOD_RESULT;
FMOD_MEMORY_ALLOCCALLBACK :: #type proc(size : _c.uint, type : _c.uint, sourcestr : cstring) -> rawptr;
FMOD_MEMORY_REALLOCCALLBACK :: #type proc(ptr : rawptr, size : _c.uint, type : _c.uint, sourcestr : cstring) -> rawptr;
FMOD_MEMORY_FREECALLBACK :: #type proc(ptr : rawptr, type : _c.uint, sourcestr : cstring);
FMOD_3D_ROLLOFFCALLBACK :: #type proc(channel : ^FMOD_CHANNEL, distance : _c.float) -> _c.float;
FMOD_EVENT_INITFLAGS :: _c.uint;
FMOD_EVENT_MODE :: _c.uint;
FMOD_EVENT_STATE :: _c.uint;
FMOD_MUSIC_ID :: _c.uint;
FMOD_MUSIC_CUE_ID :: _c.uint;
FMOD_MUSIC_PARAM_ID :: _c.uint;
FMOD_EVENT_CALLBACK :: #type proc(event : ^FMOD_EVENT, type : FMOD_EVENT_CALLBACKTYPE, param1 : rawptr, param2 : rawptr, userdata : rawptr) -> FMOD_RESULT;
FMOD_EVENTQUEUE_CALLBACK :: #type proc(type : FMOD_EVENTQUEUE_CALLBACKTYPE, queue : ^FMOD_EVENTQUEUE, entry : ^FMOD_EVENTQUEUEENTRY, callbackuserdata : rawptr) -> FMOD_RESULT;
FMOD_MUSIC_CALLBACK :: #type proc(type : FMOD_MUSIC_CALLBACKTYPE, param1 : rawptr, param2 : rawptr, userdata : rawptr) -> FMOD_RESULT;
FMOD_OUTPUT_GETNUMDRIVERSCALLBACK :: #type proc(output_state : ^FMOD_OUTPUT_STATE, numdrivers : ^_c.int) -> FMOD_RESULT;
FMOD_OUTPUT_GETDRIVERNAMECALLBACK :: #type proc(output_state : ^FMOD_OUTPUT_STATE, id : _c.int, name : cstring, namelen : _c.int) -> FMOD_RESULT;
FMOD_OUTPUT_GETDRIVERCAPSCALLBACK :: #type proc(output_state : ^FMOD_OUTPUT_STATE, id : _c.int, caps : ^_c.uint) -> FMOD_RESULT;
FMOD_OUTPUT_INITCALLBACK :: #type proc(output_state : ^FMOD_OUTPUT_STATE, selecteddriver : _c.int, flags : _c.uint, outputrate : ^_c.int, outputchannels : _c.int, outputformat : ^FMOD_SOUND_FORMAT, dspbufferlength : _c.int, dspnumbuffers : _c.int, extradriverdata : rawptr) -> FMOD_RESULT;
FMOD_OUTPUT_CLOSECALLBACK :: #type proc(output_state : ^FMOD_OUTPUT_STATE) -> FMOD_RESULT;
FMOD_OUTPUT_UPDATECALLBACK :: #type proc(output_state : ^FMOD_OUTPUT_STATE) -> FMOD_RESULT;
FMOD_OUTPUT_GETHANDLECALLBACK :: #type proc(output_state : ^FMOD_OUTPUT_STATE, handle : ^rawptr) -> FMOD_RESULT;
FMOD_OUTPUT_GETPOSITIONCALLBACK :: #type proc(output_state : ^FMOD_OUTPUT_STATE, pcm : ^_c.uint) -> FMOD_RESULT;
FMOD_OUTPUT_LOCKCALLBACK :: #type proc(output_state : ^FMOD_OUTPUT_STATE, offset : _c.uint, length : _c.uint, ptr1 : ^rawptr, ptr2 : ^rawptr, len1 : ^_c.uint, len2 : ^_c.uint) -> FMOD_RESULT;
FMOD_OUTPUT_UNLOCKCALLBACK :: #type proc(output_state : ^FMOD_OUTPUT_STATE, ptr1 : rawptr, ptr2 : rawptr, len1 : _c.uint, len2 : _c.uint) -> FMOD_RESULT;
FMOD_OUTPUT_READFROMMIXER :: #type proc(output_state : ^FMOD_OUTPUT_STATE, buffer : rawptr, length : _c.uint) -> FMOD_RESULT;

FMOD_RESULT :: enum i32 {
    FMOD_OK,
    FMOD_ERR_ALREADYLOCKED,
    FMOD_ERR_BADCOMMAND,
    FMOD_ERR_CDDA_DRIVERS,
    FMOD_ERR_CDDA_INIT,
    FMOD_ERR_CDDA_INVALID_DEVICE,
    FMOD_ERR_CDDA_NOAUDIO,
    FMOD_ERR_CDDA_NODEVICES,
    FMOD_ERR_CDDA_NODISC,
    FMOD_ERR_CDDA_READ,
    FMOD_ERR_CHANNEL_ALLOC,
    FMOD_ERR_CHANNEL_STOLEN,
    FMOD_ERR_COM,
    FMOD_ERR_DMA,
    FMOD_ERR_DSP_CONNECTION,
    FMOD_ERR_DSP_FORMAT,
    FMOD_ERR_DSP_NOTFOUND,
    FMOD_ERR_DSP_RUNNING,
    FMOD_ERR_DSP_TOOMANYCONNECTIONS,
    FMOD_ERR_FILE_BAD,
    FMOD_ERR_FILE_COULDNOTSEEK,
    FMOD_ERR_FILE_DISKEJECTED,
    FMOD_ERR_FILE_EOF,
    FMOD_ERR_FILE_NOTFOUND,
    FMOD_ERR_FILE_UNWANTED,
    FMOD_ERR_FORMAT,
    FMOD_ERR_HTTP,
    FMOD_ERR_HTTP_ACCESS,
    FMOD_ERR_HTTP_PROXY_AUTH,
    FMOD_ERR_HTTP_SERVER_ERROR,
    FMOD_ERR_HTTP_TIMEOUT,
    FMOD_ERR_INITIALIZATION,
    FMOD_ERR_INITIALIZED,
    FMOD_ERR_INTERNAL,
    FMOD_ERR_INVALID_ADDRESS,
    FMOD_ERR_INVALID_FLOAT,
    FMOD_ERR_INVALID_HANDLE,
    FMOD_ERR_INVALID_PARAM,
    FMOD_ERR_INVALID_POSITION,
    FMOD_ERR_INVALID_SPEAKER,
    FMOD_ERR_INVALID_SYNCPOINT,
    FMOD_ERR_INVALID_VECTOR,
    FMOD_ERR_MAXAUDIBLE,
    FMOD_ERR_MEMORY,
    FMOD_ERR_MEMORY_CANTPOINT,
    FMOD_ERR_MEMORY_SRAM,
    FMOD_ERR_NEEDS2D,
    FMOD_ERR_NEEDS3D,
    FMOD_ERR_NEEDSHARDWARE,
    FMOD_ERR_NEEDSSOFTWARE,
    FMOD_ERR_NET_CONNECT,
    FMOD_ERR_NET_SOCKET_ERROR,
    FMOD_ERR_NET_URL,
    FMOD_ERR_NET_WOULD_BLOCK,
    FMOD_ERR_NOTREADY,
    FMOD_ERR_OUTPUT_ALLOCATED,
    FMOD_ERR_OUTPUT_CREATEBUFFER,
    FMOD_ERR_OUTPUT_DRIVERCALL,
    FMOD_ERR_OUTPUT_ENUMERATION,
    FMOD_ERR_OUTPUT_FORMAT,
    FMOD_ERR_OUTPUT_INIT,
    FMOD_ERR_OUTPUT_NOHARDWARE,
    FMOD_ERR_OUTPUT_NOSOFTWARE,
    FMOD_ERR_PAN,
    FMOD_ERR_PLUGIN,
    FMOD_ERR_PLUGIN_INSTANCES,
    FMOD_ERR_PLUGIN_MISSING,
    FMOD_ERR_PLUGIN_RESOURCE,
    FMOD_ERR_PRELOADED,
    FMOD_ERR_PROGRAMMERSOUND,
    FMOD_ERR_RECORD,
    FMOD_ERR_REVERB_INSTANCE,
    FMOD_ERR_SUBSOUND_ALLOCATED,
    FMOD_ERR_SUBSOUND_CANTMOVE,
    FMOD_ERR_SUBSOUND_MODE,
    FMOD_ERR_SUBSOUNDS,
    FMOD_ERR_TAGNOTFOUND,
    FMOD_ERR_TOOMANYCHANNELS,
    FMOD_ERR_UNIMPLEMENTED,
    FMOD_ERR_UNINITIALIZED,
    FMOD_ERR_UNSUPPORTED,
    FMOD_ERR_UPDATE,
    FMOD_ERR_VERSION,
    FMOD_ERR_EVENT_FAILED,
    FMOD_ERR_EVENT_INFOONLY,
    FMOD_ERR_EVENT_INTERNAL,
    FMOD_ERR_EVENT_MAXSTREAMS,
    FMOD_ERR_EVENT_MISMATCH,
    FMOD_ERR_EVENT_NAMECONFLICT,
    FMOD_ERR_EVENT_NOTFOUND,
    FMOD_ERR_EVENT_NEEDSSIMPLE,
    FMOD_ERR_EVENT_GUIDCONFLICT,
    FMOD_ERR_EVENT_ALREADY_LOADED,
    FMOD_ERR_MUSIC_UNINITIALIZED,
    FMOD_ERR_MUSIC_NOTFOUND,
    FMOD_ERR_MUSIC_NOCALLBACK,
    FMOD_RESULT_FORCEINT = 65536,
};

FMOD_OUTPUTTYPE :: enum i32 {
    FMOD_OUTPUTTYPE_AUTODETECT,
    FMOD_OUTPUTTYPE_UNKNOWN,
    FMOD_OUTPUTTYPE_NOSOUND,
    FMOD_OUTPUTTYPE_WAVWRITER,
    FMOD_OUTPUTTYPE_NOSOUND_NRT,
    FMOD_OUTPUTTYPE_WAVWRITER_NRT,
    FMOD_OUTPUTTYPE_DSOUND,
    FMOD_OUTPUTTYPE_WINMM,
    FMOD_OUTPUTTYPE_WASAPI,
    FMOD_OUTPUTTYPE_ASIO,
    FMOD_OUTPUTTYPE_OSS,
    FMOD_OUTPUTTYPE_ALSA,
    FMOD_OUTPUTTYPE_ESD,
    FMOD_OUTPUTTYPE_PULSEAUDIO,
    FMOD_OUTPUTTYPE_COREAUDIO,
    FMOD_OUTPUTTYPE_XBOX360,
    FMOD_OUTPUTTYPE_PSP,
    FMOD_OUTPUTTYPE_PS3,
    FMOD_OUTPUTTYPE_NGP,
    FMOD_OUTPUTTYPE_WII,
    FMOD_OUTPUTTYPE_3DS,
    FMOD_OUTPUTTYPE_AUDIOTRACK,
    FMOD_OUTPUTTYPE_OPENSL,
    FMOD_OUTPUTTYPE_NACL,
    FMOD_OUTPUTTYPE_WIIU,
    FMOD_OUTPUTTYPE_ASOUND,
    FMOD_OUTPUTTYPE_AUDIOOUT,
    FMOD_OUTPUTTYPE_XAUDIO,
    FMOD_OUTPUTTYPE_MAX,
    FMOD_OUTPUTTYPE_FORCEINT = 65536,
};

FMOD_SPEAKERMODE :: enum i32 {
    FMOD_SPEAKERMODE_RAW,
    FMOD_SPEAKERMODE_MONO,
    FMOD_SPEAKERMODE_STEREO,
    FMOD_SPEAKERMODE_QUAD,
    FMOD_SPEAKERMODE_SURROUND,
    FMOD_SPEAKERMODE_5POINT1,
    FMOD_SPEAKERMODE_7POINT1,
    FMOD_SPEAKERMODE_SRS5_1_MATRIX,
    FMOD_SPEAKERMODE_DOLBY5_1_MATRIX,
    FMOD_SPEAKERMODE_MYEARS,
    FMOD_SPEAKERMODE_MAX,
    FMOD_SPEAKERMODE_FORCEINT = 65536,
};

FMOD_SPEAKER :: enum i32 {
    FMOD_SPEAKER_FRONT_LEFT,
    FMOD_SPEAKER_FRONT_RIGHT,
    FMOD_SPEAKER_FRONT_CENTER,
    FMOD_SPEAKER_LOW_FREQUENCY,
    FMOD_SPEAKER_BACK_LEFT,
    FMOD_SPEAKER_BACK_RIGHT,
    FMOD_SPEAKER_SIDE_LEFT,
    FMOD_SPEAKER_SIDE_RIGHT,
    FMOD_SPEAKER_MAX,
    FMOD_SPEAKER_MONO = 0,
    FMOD_SPEAKER_NULL = 65535,
    FMOD_SPEAKER_SBL = 6,
    FMOD_SPEAKER_SBR = 7,
    FMOD_SPEAKER_FORCEINT = 65536,
};

FMOD_PLUGINTYPE :: enum i32 {
    FMOD_PLUGINTYPE_OUTPUT,
    FMOD_PLUGINTYPE_CODEC,
    FMOD_PLUGINTYPE_DSP,
    FMOD_PLUGINTYPE_MAX,
    FMOD_PLUGINTYPE_FORCEINT = 65536,
};

FMOD_SOUND_TYPE :: enum i32 {
    FMOD_SOUND_TYPE_UNKNOWN,
    FMOD_SOUND_TYPE_AIFF,
    FMOD_SOUND_TYPE_ASF,
    FMOD_SOUND_TYPE_AT3,
    FMOD_SOUND_TYPE_CDDA,
    FMOD_SOUND_TYPE_DLS,
    FMOD_SOUND_TYPE_FLAC,
    FMOD_SOUND_TYPE_FSB,
    FMOD_SOUND_TYPE_GCADPCM,
    FMOD_SOUND_TYPE_IT,
    FMOD_SOUND_TYPE_MIDI,
    FMOD_SOUND_TYPE_MOD,
    FMOD_SOUND_TYPE_MPEG,
    FMOD_SOUND_TYPE_OGGVORBIS,
    FMOD_SOUND_TYPE_PLAYLIST,
    FMOD_SOUND_TYPE_RAW,
    FMOD_SOUND_TYPE_S3M,
    FMOD_SOUND_TYPE_SF2,
    FMOD_SOUND_TYPE_USER,
    FMOD_SOUND_TYPE_WAV,
    FMOD_SOUND_TYPE_XM,
    FMOD_SOUND_TYPE_XMA,
    FMOD_SOUND_TYPE_VAG,
    FMOD_SOUND_TYPE_AUDIOQUEUE,
    FMOD_SOUND_TYPE_XWMA,
    FMOD_SOUND_TYPE_BCWAV,
    FMOD_SOUND_TYPE_AT9,
    FMOD_SOUND_TYPE_VORBIS,
    FMOD_SOUND_TYPE_MEDIA_FOUNDATION,
    FMOD_SOUND_TYPE_MAX,
    FMOD_SOUND_TYPE_FORCEINT = 65536,
};

FMOD_SOUND_FORMAT :: enum i32 {
    FMOD_SOUND_FORMAT_NONE,
    FMOD_SOUND_FORMAT_PCM8,
    FMOD_SOUND_FORMAT_PCM16,
    FMOD_SOUND_FORMAT_PCM24,
    FMOD_SOUND_FORMAT_PCM32,
    FMOD_SOUND_FORMAT_PCMFLOAT,
    FMOD_SOUND_FORMAT_GCADPCM,
    FMOD_SOUND_FORMAT_IMAADPCM,
    FMOD_SOUND_FORMAT_VAG,
    FMOD_SOUND_FORMAT_HEVAG,
    FMOD_SOUND_FORMAT_XMA,
    FMOD_SOUND_FORMAT_MPEG,
    FMOD_SOUND_FORMAT_CELT,
    FMOD_SOUND_FORMAT_AT9,
    FMOD_SOUND_FORMAT_XWMA,
    FMOD_SOUND_FORMAT_VORBIS,
    FMOD_SOUND_FORMAT_MAX,
    FMOD_SOUND_FORMAT_FORCEINT = 65536,
};

FMOD_OPENSTATE :: enum i32 {
    FMOD_OPENSTATE_READY = 0,
    FMOD_OPENSTATE_LOADING,
    FMOD_OPENSTATE_ERROR,
    FMOD_OPENSTATE_CONNECTING,
    FMOD_OPENSTATE_BUFFERING,
    FMOD_OPENSTATE_SEEKING,
    FMOD_OPENSTATE_PLAYING,
    FMOD_OPENSTATE_SETPOSITION,
    FMOD_OPENSTATE_MAX,
    FMOD_OPENSTATE_FORCEINT = 65536,
};

FMOD_SOUNDGROUP_BEHAVIOR :: enum i32 {
    FMOD_SOUNDGROUP_BEHAVIOR_FAIL,
    FMOD_SOUNDGROUP_BEHAVIOR_MUTE,
    FMOD_SOUNDGROUP_BEHAVIOR_STEALLOWEST,
    FMOD_SOUNDGROUP_BEHAVIOR_MAX,
    FMOD_SOUNDGROUP_BEHAVIOR_FORCEINT = 65536,
};

FMOD_CHANNEL_CALLBACKTYPE :: enum i32 {
    FMOD_CHANNEL_CALLBACKTYPE_END,
    FMOD_CHANNEL_CALLBACKTYPE_VIRTUALVOICE,
    FMOD_CHANNEL_CALLBACKTYPE_SYNCPOINT,
    FMOD_CHANNEL_CALLBACKTYPE_OCCLUSION,
    FMOD_CHANNEL_CALLBACKTYPE_MAX,
    FMOD_CHANNEL_CALLBACKTYPE_FORCEINT = 65536,
};

FMOD_SYSTEM_CALLBACKTYPE :: enum i32 {
    FMOD_SYSTEM_CALLBACKTYPE_DEVICELISTCHANGED,
    FMOD_SYSTEM_CALLBACKTYPE_DEVICELOST,
    FMOD_SYSTEM_CALLBACKTYPE_MEMORYALLOCATIONFAILED,
    FMOD_SYSTEM_CALLBACKTYPE_THREADCREATED,
    FMOD_SYSTEM_CALLBACKTYPE_BADDSPCONNECTION,
    FMOD_SYSTEM_CALLBACKTYPE_BADDSPLEVEL,
    FMOD_SYSTEM_CALLBACKTYPE_THREADDESTROYED,
    FMOD_SYSTEM_CALLBACKTYPE_MAX,
    FMOD_SYSTEM_CALLBACKTYPE_FORCEINT = 65536,
};

FMOD_DSP_FFT_WINDOW :: enum i32 {
    FMOD_DSP_FFT_WINDOW_RECT,
    FMOD_DSP_FFT_WINDOW_TRIANGLE,
    FMOD_DSP_FFT_WINDOW_HAMMING,
    FMOD_DSP_FFT_WINDOW_HANNING,
    FMOD_DSP_FFT_WINDOW_BLACKMAN,
    FMOD_DSP_FFT_WINDOW_BLACKMANHARRIS,
    FMOD_DSP_FFT_WINDOW_MAX,
    FMOD_DSP_FFT_WINDOW_FORCEINT = 65536,
};

FMOD_DSP_RESAMPLER :: enum i32 {
    FMOD_DSP_RESAMPLER_NOINTERP,
    FMOD_DSP_RESAMPLER_LINEAR,
    FMOD_DSP_RESAMPLER_CUBIC,
    FMOD_DSP_RESAMPLER_SPLINE,
    FMOD_DSP_RESAMPLER_MAX,
    FMOD_DSP_RESAMPLER_FORCEINT = 65536,
};

FMOD_TAGTYPE :: enum i32 {
    FMOD_TAGTYPE_UNKNOWN = 0,
    FMOD_TAGTYPE_ID3V1,
    FMOD_TAGTYPE_ID3V2,
    FMOD_TAGTYPE_VORBISCOMMENT,
    FMOD_TAGTYPE_SHOUTCAST,
    FMOD_TAGTYPE_ICECAST,
    FMOD_TAGTYPE_ASF,
    FMOD_TAGTYPE_MIDI,
    FMOD_TAGTYPE_PLAYLIST,
    FMOD_TAGTYPE_FMOD,
    FMOD_TAGTYPE_USER,
    FMOD_TAGTYPE_MAX,
    FMOD_TAGTYPE_FORCEINT = 65536,
};

FMOD_TAGDATATYPE :: enum i32 {
    FMOD_TAGDATATYPE_BINARY = 0,
    FMOD_TAGDATATYPE_INT,
    FMOD_TAGDATATYPE_FLOAT,
    FMOD_TAGDATATYPE_STRING,
    FMOD_TAGDATATYPE_STRING_UTF16,
    FMOD_TAGDATATYPE_STRING_UTF16BE,
    FMOD_TAGDATATYPE_STRING_UTF8,
    FMOD_TAGDATATYPE_CDTOC,
    FMOD_TAGDATATYPE_MAX,
    FMOD_TAGDATATYPE_FORCEINT = 65536,
};

FMOD_DELAYTYPE :: enum i32 {
    FMOD_DELAYTYPE_END_MS,
    FMOD_DELAYTYPE_DSPCLOCK_START,
    FMOD_DELAYTYPE_DSPCLOCK_END,
    FMOD_DELAYTYPE_DSPCLOCK_PAUSE,
    FMOD_DELAYTYPE_MAX,
    FMOD_DELAYTYPE_FORCEINT = 65536,
};

FMOD_SPEAKERMAPTYPE :: enum i32 {
    FMOD_SPEAKERMAPTYPE_DEFAULT,
    FMOD_SPEAKERMAPTYPE_ALLMONO,
    FMOD_SPEAKERMAPTYPE_ALLSTEREO,
    FMOD_SPEAKERMAPTYPE_51_PROTOOLS,
};

FMOD_CHANNELINDEX :: enum i32 {
    FMOD_CHANNEL_FREE = -1,
    FMOD_CHANNEL_REUSE = -2,
};

FMOD_EVENT_PROPERTY :: enum i32 {
    FMOD_EVENTPROPERTY_NAME = 0,
    FMOD_EVENTPROPERTY_VOLUME,
    FMOD_EVENTPROPERTY_VOLUMERANDOMIZATION,
    FMOD_EVENTPROPERTY_PITCH,
    FMOD_EVENTPROPERTY_PITCH_OCTAVES,
    FMOD_EVENTPROPERTY_PITCH_SEMITONES,
    FMOD_EVENTPROPERTY_PITCH_TONES,
    FMOD_EVENTPROPERTY_PITCHRANDOMIZATION,
    FMOD_EVENTPROPERTY_PITCHRANDOMIZATION_OCTAVES,
    FMOD_EVENTPROPERTY_PITCHRANDOMIZATION_SEMITONES,
    FMOD_EVENTPROPERTY_PITCHRANDOMIZATION_TONES,
    FMOD_EVENTPROPERTY_PRIORITY,
    FMOD_EVENTPROPERTY_MAX_PLAYBACKS,
    FMOD_EVENTPROPERTY_MAX_PLAYBACKS_BEHAVIOR,
    FMOD_EVENTPROPERTY_MODE,
    FMOD_EVENTPROPERTY_3D_IGNORE_GEOMETRY,
    FMOD_EVENTPROPERTY_3D_ROLLOFF,
    FMOD_EVENTPROPERTY_3D_MINDISTANCE,
    FMOD_EVENTPROPERTY_3D_MAXDISTANCE,
    FMOD_EVENTPROPERTY_3D_POSITION,
    FMOD_EVENTPROPERTY_3D_CONEINSIDEANGLE,
    FMOD_EVENTPROPERTY_3D_CONEOUTSIDEANGLE,
    FMOD_EVENTPROPERTY_3D_CONEOUTSIDEVOLUME,
    FMOD_EVENTPROPERTY_3D_DOPPLERSCALE,
    FMOD_EVENTPROPERTY_3D_SPEAKERSPREAD,
    FMOD_EVENTPROPERTY_3D_PANLEVEL,
    FMOD_EVENTPROPERTY_SPEAKER_L,
    FMOD_EVENTPROPERTY_SPEAKER_C,
    FMOD_EVENTPROPERTY_SPEAKER_R,
    FMOD_EVENTPROPERTY_SPEAKER_LS,
    FMOD_EVENTPROPERTY_SPEAKER_RS,
    FMOD_EVENTPROPERTY_SPEAKER_LR,
    FMOD_EVENTPROPERTY_SPEAKER_RR,
    FMOD_EVENTPROPERTY_SPEAKER_LFE,
    FMOD_EVENTPROPERTY_REVERBWETLEVEL,
    FMOD_EVENTPROPERTY_ONESHOT,
    FMOD_EVENTPROPERTY_FADEIN,
    FMOD_EVENTPROPERTY_FADEOUT,
    FMOD_EVENTPROPERTY_REVERBDRYLEVEL,
    FMOD_EVENTPROPERTY_TIMEOFFSET,
    FMOD_EVENTPROPERTY_SPAWNINTENSITY,
    FMOD_EVENTPROPERTY_SPAWNINTENSITY_RANDOMIZATION,
    FMOD_EVENTPROPERTY_WII_CONTROLLERSPEAKERS,
    FMOD_EVENTPROPERTY_3D_POSRANDOMIZATION_MIN,
    FMOD_EVENTPROPERTY_3D_POSRANDOMIZATION_MAX,
    FMOD_EVENTPROPERTY_EVENTTYPE,
    FMOD_EVENTPROPERTY_STEAL_PRIORITY,
    FMOD_EVENTPROPERTY_EFFECTS_AFFECT_REVERB,
    FMOD_EVENTPROPERTY_WILL_TERMINATE,
    FMOD_EVENTPROPERTY_DSPCLOCKSTART_HI,
    FMOD_EVENTPROPERTY_DSPCLOCKSTART_LO,
    FMOD_EVENTPROPERTY_3D_AUTO_DISTANCE_FILTERING,
    FMOD_EVENTPROPERTY_3D_AUTO_DISTANCE_CENTER_FREQ,
    FMOD_EVENTPROPERTY_USER_BASE,
};

FMOD_EVENTPROPERTY_TYPE :: enum i32 {
    FMOD_EVENTPROPERTY_TYPE_INT = 0,
    FMOD_EVENTPROPERTY_TYPE_FLOAT,
    FMOD_EVENTPROPERTY_TYPE_STRING,
};

FMOD_EVENT_PITCHUNITS :: enum i32 {
    FMOD_EVENT_PITCHUNITS_RAW = 0,
    FMOD_EVENT_PITCHUNITS_OCTAVES,
    FMOD_EVENT_PITCHUNITS_SEMITONES,
    FMOD_EVENT_PITCHUNITS_TONES,
};

FMOD_EVENT_RESOURCE :: enum i32 {
    FMOD_EVENT_RESOURCE_STREAMS_AND_SAMPLES,
    FMOD_EVENT_RESOURCE_STREAMS,
    FMOD_EVENT_RESOURCE_SAMPLES,
};

FMOD_EVENT_CALLBACKTYPE :: enum i32 {
    FMOD_EVENT_CALLBACKTYPE_SYNCPOINT,
    FMOD_EVENT_CALLBACKTYPE_SOUNDDEF_START,
    FMOD_EVENT_CALLBACKTYPE_SOUNDDEF_END,
    FMOD_EVENT_CALLBACKTYPE_STOLEN,
    FMOD_EVENT_CALLBACKTYPE_EVENTFINISHED,
    FMOD_EVENT_CALLBACKTYPE_NET_MODIFIED,
    FMOD_EVENT_CALLBACKTYPE_SOUNDDEF_CREATE,
    FMOD_EVENT_CALLBACKTYPE_SOUNDDEF_RELEASE,
    FMOD_EVENT_CALLBACKTYPE_SOUNDDEF_INFO,
    FMOD_EVENT_CALLBACKTYPE_EVENTSTARTED,
    FMOD_EVENT_CALLBACKTYPE_SOUNDDEF_SELECTINDEX,
    FMOD_EVENT_CALLBACKTYPE_OCCLUSION,
    FMOD_EVENT_CALLBACKTYPE_MAXSTREAMS,
};

FMOD_EVENT_SOUNDDEF_ENTRYTYPE :: enum i32 {
    FMOD_EVENT_SOUNDDEF_ENTRYTYPE_WAVETABLE,
    FMOD_EVENT_SOUNDDEF_ENTRYTYPE_OSCILLATOR,
    FMOD_EVENT_SOUNDDEF_ENTRYTYPE_NULL,
    FMOD_EVENT_SOUNDDEF_ENTRYTYPE_PROGRAMMER,
};

FMOD_EVENTQUEUE_CALLBACKTYPE :: enum i32 {
    FMOD_EVENTQUEUE_CALLBACKTYPE_PREPARE,
    FMOD_EVENTQUEUE_CALLBACKTYPE_ABOUTTOPLAY,
    FMOD_EVENTQUEUE_CALLBACKTYPE_FINISHED,
    FMOD_EVENTQUEUE_CALLBACKTYPE_EXPIRED,
};

FMOD_MUSIC_CALLBACKTYPE :: enum i32 {
    FMOD_MUSIC_CALLBACKTYPE_SEGMENT_START,
    FMOD_MUSIC_CALLBACKTYPE_SEGMENT_END,
    FMOD_MUSIC_CALLBACKTYPE_SAMPLE_CREATE,
    FMOD_MUSIC_CALLBACKTYPE_SAMPLE_RELEASE,
    FMOD_MUSIC_CALLBACKTYPE_CHANNEL_CREATED,
    FMOD_MUSIC_CALLBACKTYPE_CHANNEL_DESTROYED,
    FMOD_MUSIC_CALLBACKTYPE_RESET,
    FMOD_MUSIC_CALLBACKTYPE_BEAT,
};

FMOD_SYSTEM :: struct {};

FMOD_SOUND :: struct {};

FMOD_CHANNEL :: struct {};

FMOD_CHANNELGROUP :: struct {};

FMOD_SOUNDGROUP :: struct {};

FMOD_REVERB :: struct {};

FMOD_DSP :: struct {};

FMOD_DSPCONNECTION :: struct {};

FMOD_POLYGON :: struct {};

FMOD_GEOMETRY :: struct {};

FMOD_SYNCPOINT :: struct {};

FMOD_VECTOR :: struct {
    x : _c.float,
    y : _c.float,
    z : _c.float,
};

FMOD_GUID :: struct {
    Data1 : _c.uint,
    Data2 : _c.ushort,
    Data3 : _c.ushort,
    Data4 : [8]_c.uchar,
};

FMOD_ASYNCREADINFO :: struct {
    handle : rawptr,
    offset : _c.uint,
    sizebytes : _c.uint,
    priority : _c.int,
    buffer : rawptr,
    bytesread : _c.uint,
    result : FMOD_RESULT,
    userdata : rawptr,
};

FMOD_TAG :: struct {
    type : FMOD_TAGTYPE,
    datatype : FMOD_TAGDATATYPE,
    name : cstring,
    data : rawptr,
    datalen : _c.uint,
    updated : _c.int,
};

FMOD_CDTOC :: struct {
    numtracks : _c.int,
    min : [100]_c.int,
    sec : [100]_c.int,
    frame : [100]_c.int,
};

FMOD_CREATESOUNDEXINFO :: struct {
    cbsize : _c.int,
    length : _c.uint,
    fileoffset : _c.uint,
    numchannels : _c.int,
    defaultfrequency : _c.int,
    format : FMOD_SOUND_FORMAT,
    decodebuffersize : _c.uint,
    initialsubsound : _c.int,
    numsubsounds : _c.int,
    inclusionlist : ^_c.int,
    inclusionlistnum : _c.int,
    pcmreadcallback : FMOD_SOUND_PCMREADCALLBACK,
    pcmsetposcallback : FMOD_SOUND_PCMSETPOSCALLBACK,
    nonblockcallback : FMOD_SOUND_NONBLOCKCALLBACK,
    dlsname : cstring,
    encryptionkey : cstring,
    maxpolyphony : _c.int,
    userdata : rawptr,
    suggestedsoundtype : FMOD_SOUND_TYPE,
    useropen : FMOD_FILE_OPENCALLBACK,
    userclose : FMOD_FILE_CLOSECALLBACK,
    userread : FMOD_FILE_READCALLBACK,
    userseek : FMOD_FILE_SEEKCALLBACK,
    userasyncread : FMOD_FILE_ASYNCREADCALLBACK,
    userasynccancel : FMOD_FILE_ASYNCCANCELCALLBACK,
    speakermap : FMOD_SPEAKERMAPTYPE,
    initialsoundgroup : ^FMOD_SOUNDGROUP,
    initialseekposition : _c.uint,
    initialseekpostype : _c.uint,
    ignoresetfilesystem : _c.int,
    cddaforceaspi : _c.int,
    audioqueuepolicy : _c.uint,
    minmidigranularity : _c.uint,
    nonblockthreadid : _c.int,
};

FMOD_REVERB_PROPERTIES :: struct {
    Instance : _c.int,
    Environment : _c.int,
    EnvDiffusion : _c.float,
    Room : _c.int,
    RoomHF : _c.int,
    RoomLF : _c.int,
    DecayTime : _c.float,
    DecayHFRatio : _c.float,
    DecayLFRatio : _c.float,
    Reflections : _c.int,
    ReflectionsDelay : _c.float,
    Reverb : _c.int,
    ReverbDelay : _c.float,
    ModulationTime : _c.float,
    ModulationDepth : _c.float,
    HFReference : _c.float,
    LFReference : _c.float,
    Diffusion : _c.float,
    Density : _c.float,
    Flags : _c.uint,
};

FMOD_REVERB_CHANNELPROPERTIES :: struct {
    Direct : _c.int,
    Room : _c.int,
    Flags : _c.uint,
    ConnectionPoint : ^FMOD_DSP,
};

FMOD_ADVANCEDSETTINGS :: struct {
    cbsize : _c.int,
    maxMPEGcodecs : _c.int,
    maxADPCMcodecs : _c.int,
    maxXMAcodecs : _c.int,
    maxCELTcodecs : _c.int,
    maxVORBIScodecs : _c.int,
    maxAT9Codecs : _c.int,
    maxPCMcodecs : _c.int,
    ASIONumChannels : _c.int,
    ASIOChannelList : ^cstring,
    ASIOSpeakerList : ^FMOD_SPEAKER,
    max3DReverbDSPs : _c.int,
    HRTFMinAngle : _c.float,
    HRTFMaxAngle : _c.float,
    HRTFFreq : _c.float,
    vol0virtualvol : _c.float,
    eventqueuesize : _c.int,
    defaultDecodeBufferSize : _c.uint,
    debugLogFilename : cstring,
    profileport : _c.ushort,
    geometryMaxFadeTime : _c.uint,
    maxSpectrumWaveDataBuffers : _c.uint,
    musicSystemCacheDelay : _c.uint,
    distanceFilterCenterFreq : _c.float,
    stackSizeStream : _c.uint,
    stackSizeNonBlocking : _c.uint,
    stackSizeMixer : _c.uint,
};

FMOD_EVENTSYSTEM :: struct {};

FMOD_EVENTPROJECT :: struct {};

FMOD_EVENTGROUP :: struct {};

FMOD_EVENTCATEGORY :: struct {};

FMOD_EVENT :: struct {};

FMOD_EVENTPARAMETER :: struct {};

FMOD_EVENTREVERB :: struct {};

FMOD_EVENTQUEUE :: struct {};

FMOD_EVENTQUEUEENTRY :: struct {};

FMOD_MUSICPROMPT :: struct {};

FMOD_MUSICSYSTEM :: struct {};

FMOD_EVENT_WAVEBANKINFO :: struct {
    name : [256]_c.char,
    streamrefcnt : _c.int,
    samplerefcnt : _c.int,
    numstreams : _c.int,
    maxstreams : _c.int,
    streamsinuse : _c.int,
    streammemory : _c.uint,
    samplememory : _c.uint,
    type : _c.int,
};

FMOD_EVENT_SYSTEMINFO :: struct {
    numevents : _c.int,
    numinstances : _c.int,
    maxwavebanks : _c.int,
    wavebankinfo : ^FMOD_EVENT_WAVEBANKINFO,
    numplayingevents : _c.int,
    playingevents : ^^FMOD_EVENT,
    numloadsqueued : [5]_c.int,
};

FMOD_EVENT_PROJECTINFO :: struct {
    index : _c.int,
    name : [256]_c.char,
    numevents : _c.int,
    numinstances : _c.int,
    maxwavebanks : _c.int,
    wavebankinfo : ^FMOD_EVENT_WAVEBANKINFO,
    numplayingevents : _c.int,
    playingevents : ^^FMOD_EVENT,
};

FMOD_EVENT_INFO :: struct {
    memoryused : _c.int,
    positionms : _c.int,
    lengthms : _c.int,
    channelsplaying : _c.int,
    instancesactive : _c.int,
    maxwavebanks : _c.int,
    wavebankinfo : ^FMOD_EVENT_WAVEBANKINFO,
    projectid : _c.uint,
    systemid : _c.uint,
    audibility : _c.float,
    numinstances : _c.int,
    instances : ^^FMOD_EVENT,
    guid : ^FMOD_GUID,
};

FMOD_EVENT_SOUNDDEFINFO :: struct {
    name : cstring,
    numentries : _c.int,
    entrynames : ^cstring,
    entrytypes : ^FMOD_EVENT_SOUNDDEF_ENTRYTYPE,
};

FMOD_EVENT_LOADINFO :: struct {
    size : _c.uint,
    encryptionkey : cstring,
    sounddefentrylimit : _c.float,
    loadfrommemory_length : _c.uint,
    override_category_vals : _c.int,
    sizeof_instancepool_simple : _c.uint,
};

FMOD_MUSIC_INFO :: struct {
    starving : _c.int,
    all_samples_loaded : _c.int,
};

FMOD_MUSIC_ENTITY :: struct {
    name : cstring,
    id : _c.uint,
};

FMOD_MUSIC_ITERATOR :: struct {
    value : ^FMOD_MUSIC_ENTITY,
    filter : cstring,
};

FMOD_MUSIC_SAMPLE_INFO :: struct {
    segment_id : _c.uint,
    index : _c.uint,
    filename : cstring,
};

FMOD_MUSIC_SEGMENT_INFO :: struct {
    segment_id : _c.uint,
    theme_id : _c.uint,
};

FMOD_OUTPUT_STATE :: struct {
    plugindata : rawptr,
    readfrommixer : FMOD_OUTPUT_READFROMMIXER,
};

FMOD_OUTPUT_DESCRIPTION :: struct {
    name : cstring,
    version : _c.uint,
    polling : _c.int,
    getnumdrivers : FMOD_OUTPUT_GETNUMDRIVERSCALLBACK,
    getdrivername : FMOD_OUTPUT_GETDRIVERNAMECALLBACK,
    getdrivercaps : FMOD_OUTPUT_GETDRIVERCAPSCALLBACK,
    init : FMOD_OUTPUT_INITCALLBACK,
    close : FMOD_OUTPUT_CLOSECALLBACK,
    update : FMOD_OUTPUT_UPDATECALLBACK,
    gethandle : FMOD_OUTPUT_GETHANDLECALLBACK,
    getposition : FMOD_OUTPUT_GETPOSITIONCALLBACK,
    lock : FMOD_OUTPUT_LOCKCALLBACK,
    unlock : FMOD_OUTPUT_UNLOCKCALLBACK,
};

@(default_calling_convention="c")
foreign fmodex_vc {

    @(link_name="FMOD_Memory_Initialize")
    FMOD_Memory_Initialize :: proc(poolmem : rawptr, poollen : _c.int, useralloc : FMOD_MEMORY_ALLOCCALLBACK, userrealloc : FMOD_MEMORY_REALLOCCALLBACK, userfree : FMOD_MEMORY_FREECALLBACK, memtypeflags : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Memory_GetStats")
    FMOD_Memory_GetStats :: proc(currentalloced : ^_c.int, maxalloced : ^_c.int, blocking : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Debug_SetLevel")
    FMOD_Debug_SetLevel :: proc(level : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Debug_GetLevel")
    FMOD_Debug_GetLevel :: proc(level : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_File_SetDiskBusy")
    FMOD_File_SetDiskBusy :: proc(busy : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_File_GetDiskBusy")
    FMOD_File_GetDiskBusy :: proc(busy : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_Create")
    FMOD_System_Create :: proc(system : ^^FMOD_SYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_Release")
    FMOD_System_Release :: proc(system : ^FMOD_SYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetOutput")
    FMOD_System_SetOutput :: proc(system : ^FMOD_SYSTEM, output : FMOD_OUTPUTTYPE) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetOutput")
    FMOD_System_GetOutput :: proc(system : ^FMOD_SYSTEM, output : ^FMOD_OUTPUTTYPE) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetNumDrivers")
    FMOD_System_GetNumDrivers :: proc(system : ^FMOD_SYSTEM, numdrivers : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetDriverInfo")
    FMOD_System_GetDriverInfo :: proc(system : ^FMOD_SYSTEM, id : _c.int, name : cstring, namelen : _c.int, guid : ^FMOD_GUID) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetDriverInfoW")
    FMOD_System_GetDriverInfoW :: proc(system : ^FMOD_SYSTEM, id : _c.int, name : ^_c.short, namelen : _c.int, guid : ^FMOD_GUID) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetDriverCaps")
    FMOD_System_GetDriverCaps :: proc(system : ^FMOD_SYSTEM, id : _c.int, caps : ^_c.uint, controlpaneloutputrate : ^_c.int, controlpanelspeakermode : ^FMOD_SPEAKERMODE) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetDriver")
    FMOD_System_SetDriver :: proc(system : ^FMOD_SYSTEM, driver : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetDriver")
    FMOD_System_GetDriver :: proc(system : ^FMOD_SYSTEM, driver : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetHardwareChannels")
    FMOD_System_SetHardwareChannels :: proc(system : ^FMOD_SYSTEM, numhardwarechannels : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetSoftwareChannels")
    FMOD_System_SetSoftwareChannels :: proc(system : ^FMOD_SYSTEM, numsoftwarechannels : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetSoftwareChannels")
    FMOD_System_GetSoftwareChannels :: proc(system : ^FMOD_SYSTEM, numsoftwarechannels : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetSoftwareFormat")
    FMOD_System_SetSoftwareFormat :: proc(system : ^FMOD_SYSTEM, samplerate : _c.int, format : FMOD_SOUND_FORMAT, numoutputchannels : _c.int, maxinputchannels : _c.int, resamplemethod : FMOD_DSP_RESAMPLER) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetSoftwareFormat")
    FMOD_System_GetSoftwareFormat :: proc(system : ^FMOD_SYSTEM, samplerate : ^_c.int, format : ^FMOD_SOUND_FORMAT, numoutputchannels : ^_c.int, maxinputchannels : ^_c.int, resamplemethod : ^FMOD_DSP_RESAMPLER, bits : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetDSPBufferSize")
    FMOD_System_SetDSPBufferSize :: proc(system : ^FMOD_SYSTEM, bufferlength : _c.uint, numbuffers : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetDSPBufferSize")
    FMOD_System_GetDSPBufferSize :: proc(system : ^FMOD_SYSTEM, bufferlength : ^_c.uint, numbuffers : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetFileSystem")
    FMOD_System_SetFileSystem :: proc(system : ^FMOD_SYSTEM, useropen : FMOD_FILE_OPENCALLBACK, userclose : FMOD_FILE_CLOSECALLBACK, userread : FMOD_FILE_READCALLBACK, userseek : FMOD_FILE_SEEKCALLBACK, userasyncread : FMOD_FILE_ASYNCREADCALLBACK, userasynccancel : FMOD_FILE_ASYNCCANCELCALLBACK, blockalign : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_AttachFileSystem")
    FMOD_System_AttachFileSystem :: proc(system : ^FMOD_SYSTEM, useropen : FMOD_FILE_OPENCALLBACK, userclose : FMOD_FILE_CLOSECALLBACK, userread : FMOD_FILE_READCALLBACK, userseek : FMOD_FILE_SEEKCALLBACK) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetAdvancedSettings")
    FMOD_System_SetAdvancedSettings :: proc(system : ^FMOD_SYSTEM, settings : ^FMOD_ADVANCEDSETTINGS) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetAdvancedSettings")
    FMOD_System_GetAdvancedSettings :: proc(system : ^FMOD_SYSTEM, settings : ^FMOD_ADVANCEDSETTINGS) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetSpeakerMode")
    FMOD_System_SetSpeakerMode :: proc(system : ^FMOD_SYSTEM, speakermode : FMOD_SPEAKERMODE) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetSpeakerMode")
    FMOD_System_GetSpeakerMode :: proc(system : ^FMOD_SYSTEM, speakermode : ^FMOD_SPEAKERMODE) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetCallback")
    FMOD_System_SetCallback :: proc(system : ^FMOD_SYSTEM, callback : FMOD_SYSTEM_CALLBACK) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetPluginPath")
    FMOD_System_SetPluginPath :: proc(system : ^FMOD_SYSTEM, path : cstring) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_LoadPlugin")
    FMOD_System_LoadPlugin :: proc(system : ^FMOD_SYSTEM, filename : cstring, handle : ^_c.uint, priority : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_UnloadPlugin")
    FMOD_System_UnloadPlugin :: proc(system : ^FMOD_SYSTEM, handle : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetNumPlugins")
    FMOD_System_GetNumPlugins :: proc(system : ^FMOD_SYSTEM, plugintype : FMOD_PLUGINTYPE, numplugins : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetPluginHandle")
    FMOD_System_GetPluginHandle :: proc(system : ^FMOD_SYSTEM, plugintype : FMOD_PLUGINTYPE, index : _c.int, handle : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetPluginInfo")
    FMOD_System_GetPluginInfo :: proc(system : ^FMOD_SYSTEM, handle : _c.uint, plugintype : ^FMOD_PLUGINTYPE, name : cstring, namelen : _c.int, version : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetOutputByPlugin")
    FMOD_System_SetOutputByPlugin :: proc(system : ^FMOD_SYSTEM, handle : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetOutputByPlugin")
    FMOD_System_GetOutputByPlugin :: proc(system : ^FMOD_SYSTEM, handle : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_CreateDSPByPlugin")
    FMOD_System_CreateDSPByPlugin :: proc(system : ^FMOD_SYSTEM, handle : _c.uint, dsp : ^^FMOD_DSP) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_RegisterCodec")
    FMOD_System_RegisterCodec :: proc(system : ^FMOD_SYSTEM, description : ^FMOD_CODEC_DESCRIPTION, handle : ^_c.uint, priority : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_RegisterDSP")
    FMOD_System_RegisterDSP :: proc(system : ^FMOD_SYSTEM, description : ^FMOD_DSP_DESCRIPTION, handle : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_Init")
    FMOD_System_Init :: proc(system : ^FMOD_SYSTEM, maxchannels : _c.int, flags : _c.uint, extradriverdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_Close")
    FMOD_System_Close :: proc(system : ^FMOD_SYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_Update")
    FMOD_System_Update :: proc(system : ^FMOD_SYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_Set3DSettings")
    FMOD_System_Set3DSettings :: proc(system : ^FMOD_SYSTEM, dopplerscale : _c.float, distancefactor : _c.float, rolloffscale : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_Get3DSettings")
    FMOD_System_Get3DSettings :: proc(system : ^FMOD_SYSTEM, dopplerscale : ^_c.float, distancefactor : ^_c.float, rolloffscale : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_Set3DNumListeners")
    FMOD_System_Set3DNumListeners :: proc(system : ^FMOD_SYSTEM, numlisteners : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_Get3DNumListeners")
    FMOD_System_Get3DNumListeners :: proc(system : ^FMOD_SYSTEM, numlisteners : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_Set3DListenerAttributes")
    FMOD_System_Set3DListenerAttributes :: proc(system : ^FMOD_SYSTEM, listener : _c.int, pos : ^FMOD_VECTOR, vel : ^FMOD_VECTOR, forward : ^FMOD_VECTOR, up : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_Get3DListenerAttributes")
    FMOD_System_Get3DListenerAttributes :: proc(system : ^FMOD_SYSTEM, listener : _c.int, pos : ^FMOD_VECTOR, vel : ^FMOD_VECTOR, forward : ^FMOD_VECTOR, up : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_Set3DRolloffCallback")
    FMOD_System_Set3DRolloffCallback :: proc(system : ^FMOD_SYSTEM, callback : FMOD_3D_ROLLOFFCALLBACK) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_Set3DSpeakerPosition")
    FMOD_System_Set3DSpeakerPosition :: proc(system : ^FMOD_SYSTEM, speaker : FMOD_SPEAKER, x : _c.float, y : _c.float, active : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_Get3DSpeakerPosition")
    FMOD_System_Get3DSpeakerPosition :: proc(system : ^FMOD_SYSTEM, speaker : FMOD_SPEAKER, x : ^_c.float, y : ^_c.float, active : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetStreamBufferSize")
    FMOD_System_SetStreamBufferSize :: proc(system : ^FMOD_SYSTEM, filebuffersize : _c.uint, filebuffersizetype : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetStreamBufferSize")
    FMOD_System_GetStreamBufferSize :: proc(system : ^FMOD_SYSTEM, filebuffersize : ^_c.uint, filebuffersizetype : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetVersion")
    FMOD_System_GetVersion :: proc(system : ^FMOD_SYSTEM, version : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetOutputHandle")
    FMOD_System_GetOutputHandle :: proc(system : ^FMOD_SYSTEM, handle : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetChannelsPlaying")
    FMOD_System_GetChannelsPlaying :: proc(system : ^FMOD_SYSTEM, channels : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetHardwareChannels")
    FMOD_System_GetHardwareChannels :: proc(system : ^FMOD_SYSTEM, numhardwarechannels : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetCPUUsage")
    FMOD_System_GetCPUUsage :: proc(system : ^FMOD_SYSTEM, dsp : ^_c.float, stream : ^_c.float, geometry : ^_c.float, update : ^_c.float, total : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetSoundRAM")
    FMOD_System_GetSoundRAM :: proc(system : ^FMOD_SYSTEM, currentalloced : ^_c.int, maxalloced : ^_c.int, total : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetNumCDROMDrives")
    FMOD_System_GetNumCDROMDrives :: proc(system : ^FMOD_SYSTEM, numdrives : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetCDROMDriveName")
    FMOD_System_GetCDROMDriveName :: proc(system : ^FMOD_SYSTEM, drive : _c.int, drivename : cstring, drivenamelen : _c.int, scsiname : cstring, scsinamelen : _c.int, devicename : cstring, devicenamelen : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetSpectrum")
    FMOD_System_GetSpectrum :: proc(system : ^FMOD_SYSTEM, spectrumarray : ^_c.float, numvalues : _c.int, channeloffset : _c.int, windowtype : FMOD_DSP_FFT_WINDOW) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetWaveData")
    FMOD_System_GetWaveData :: proc(system : ^FMOD_SYSTEM, wavearray : ^_c.float, numvalues : _c.int, channeloffset : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_CreateSound")
    FMOD_System_CreateSound :: proc(system : ^FMOD_SYSTEM, name_or_data : cstring, mode : _c.uint, exinfo : ^FMOD_CREATESOUNDEXINFO, sound : ^^FMOD_SOUND) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_CreateStream")
    FMOD_System_CreateStream :: proc(system : ^FMOD_SYSTEM, name_or_data : cstring, mode : _c.uint, exinfo : ^FMOD_CREATESOUNDEXINFO, sound : ^^FMOD_SOUND) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_CreateDSP")
    FMOD_System_CreateDSP :: proc(system : ^FMOD_SYSTEM, description : ^FMOD_DSP_DESCRIPTION, dsp : ^^FMOD_DSP) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_CreateDSPByType")
    FMOD_System_CreateDSPByType :: proc(system : ^FMOD_SYSTEM, type : FMOD_DSP_TYPE, dsp : ^^FMOD_DSP) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_CreateChannelGroup")
    FMOD_System_CreateChannelGroup :: proc(system : ^FMOD_SYSTEM, name : cstring, channelgroup : ^^FMOD_CHANNELGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_CreateSoundGroup")
    FMOD_System_CreateSoundGroup :: proc(system : ^FMOD_SYSTEM, name : cstring, soundgroup : ^^FMOD_SOUNDGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_CreateReverb")
    FMOD_System_CreateReverb :: proc(system : ^FMOD_SYSTEM, reverb : ^^FMOD_REVERB) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_PlaySound")
    FMOD_System_PlaySound :: proc(system : ^FMOD_SYSTEM, channelid : FMOD_CHANNELINDEX, sound : ^FMOD_SOUND, paused : _c.int, channel : ^^FMOD_CHANNEL) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_PlayDSP")
    FMOD_System_PlayDSP :: proc(system : ^FMOD_SYSTEM, channelid : FMOD_CHANNELINDEX, dsp : ^FMOD_DSP, paused : _c.int, channel : ^^FMOD_CHANNEL) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetChannel")
    FMOD_System_GetChannel :: proc(system : ^FMOD_SYSTEM, channelid : _c.int, channel : ^^FMOD_CHANNEL) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetMasterChannelGroup")
    FMOD_System_GetMasterChannelGroup :: proc(system : ^FMOD_SYSTEM, channelgroup : ^^FMOD_CHANNELGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetMasterSoundGroup")
    FMOD_System_GetMasterSoundGroup :: proc(system : ^FMOD_SYSTEM, soundgroup : ^^FMOD_SOUNDGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetReverbProperties")
    FMOD_System_SetReverbProperties :: proc(system : ^FMOD_SYSTEM, prop : ^FMOD_REVERB_PROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetReverbProperties")
    FMOD_System_GetReverbProperties :: proc(system : ^FMOD_SYSTEM, prop : ^FMOD_REVERB_PROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetReverbAmbientProperties")
    FMOD_System_SetReverbAmbientProperties :: proc(system : ^FMOD_SYSTEM, prop : ^FMOD_REVERB_PROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetReverbAmbientProperties")
    FMOD_System_GetReverbAmbientProperties :: proc(system : ^FMOD_SYSTEM, prop : ^FMOD_REVERB_PROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetDSPHead")
    FMOD_System_GetDSPHead :: proc(system : ^FMOD_SYSTEM, dsp : ^^FMOD_DSP) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_AddDSP")
    FMOD_System_AddDSP :: proc(system : ^FMOD_SYSTEM, dsp : ^FMOD_DSP, connection : ^^FMOD_DSPCONNECTION) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_LockDSP")
    FMOD_System_LockDSP :: proc(system : ^FMOD_SYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_UnlockDSP")
    FMOD_System_UnlockDSP :: proc(system : ^FMOD_SYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetDSPClock")
    FMOD_System_GetDSPClock :: proc(system : ^FMOD_SYSTEM, hi : ^_c.uint, lo : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetRecordNumDrivers")
    FMOD_System_GetRecordNumDrivers :: proc(system : ^FMOD_SYSTEM, numdrivers : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetRecordDriverInfo")
    FMOD_System_GetRecordDriverInfo :: proc(system : ^FMOD_SYSTEM, id : _c.int, name : cstring, namelen : _c.int, guid : ^FMOD_GUID) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetRecordDriverInfoW")
    FMOD_System_GetRecordDriverInfoW :: proc(system : ^FMOD_SYSTEM, id : _c.int, name : ^_c.short, namelen : _c.int, guid : ^FMOD_GUID) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetRecordDriverCaps")
    FMOD_System_GetRecordDriverCaps :: proc(system : ^FMOD_SYSTEM, id : _c.int, caps : ^_c.uint, minfrequency : ^_c.int, maxfrequency : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetRecordPosition")
    FMOD_System_GetRecordPosition :: proc(system : ^FMOD_SYSTEM, id : _c.int, position : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_RecordStart")
    FMOD_System_RecordStart :: proc(system : ^FMOD_SYSTEM, id : _c.int, sound : ^FMOD_SOUND, loop : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_RecordStop")
    FMOD_System_RecordStop :: proc(system : ^FMOD_SYSTEM, id : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_IsRecording")
    FMOD_System_IsRecording :: proc(system : ^FMOD_SYSTEM, id : _c.int, recording : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_CreateGeometry")
    FMOD_System_CreateGeometry :: proc(system : ^FMOD_SYSTEM, maxpolygons : _c.int, maxvertices : _c.int, geometry : ^^FMOD_GEOMETRY) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetGeometrySettings")
    FMOD_System_SetGeometrySettings :: proc(system : ^FMOD_SYSTEM, maxworldsize : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetGeometrySettings")
    FMOD_System_GetGeometrySettings :: proc(system : ^FMOD_SYSTEM, maxworldsize : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_LoadGeometry")
    FMOD_System_LoadGeometry :: proc(system : ^FMOD_SYSTEM, data : rawptr, datasize : _c.int, geometry : ^^FMOD_GEOMETRY) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetGeometryOcclusion")
    FMOD_System_GetGeometryOcclusion :: proc(system : ^FMOD_SYSTEM, listener : ^FMOD_VECTOR, source : ^FMOD_VECTOR, direct : ^_c.float, reverb : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetNetworkProxy")
    FMOD_System_SetNetworkProxy :: proc(system : ^FMOD_SYSTEM, proxy : cstring) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetNetworkProxy")
    FMOD_System_GetNetworkProxy :: proc(system : ^FMOD_SYSTEM, proxy : cstring, proxylen : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetNetworkTimeout")
    FMOD_System_SetNetworkTimeout :: proc(system : ^FMOD_SYSTEM, timeout : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetNetworkTimeout")
    FMOD_System_GetNetworkTimeout :: proc(system : ^FMOD_SYSTEM, timeout : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_SetUserData")
    FMOD_System_SetUserData :: proc(system : ^FMOD_SYSTEM, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetUserData")
    FMOD_System_GetUserData :: proc(system : ^FMOD_SYSTEM, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_System_GetMemoryInfo")
    FMOD_System_GetMemoryInfo :: proc(system : ^FMOD_SYSTEM, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_Release")
    FMOD_Sound_Release :: proc(sound : ^FMOD_SOUND) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetSystemObject")
    FMOD_Sound_GetSystemObject :: proc(sound : ^FMOD_SOUND, system : ^^FMOD_SYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_Lock")
    FMOD_Sound_Lock :: proc(sound : ^FMOD_SOUND, offset : _c.uint, length : _c.uint, ptr1 : ^rawptr, ptr2 : ^rawptr, len1 : ^_c.uint, len2 : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_Unlock")
    FMOD_Sound_Unlock :: proc(sound : ^FMOD_SOUND, ptr1 : rawptr, ptr2 : rawptr, len1 : _c.uint, len2 : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_SetDefaults")
    FMOD_Sound_SetDefaults :: proc(sound : ^FMOD_SOUND, frequency : _c.float, volume : _c.float, pan : _c.float, priority : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetDefaults")
    FMOD_Sound_GetDefaults :: proc(sound : ^FMOD_SOUND, frequency : ^_c.float, volume : ^_c.float, pan : ^_c.float, priority : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_SetVariations")
    FMOD_Sound_SetVariations :: proc(sound : ^FMOD_SOUND, frequencyvar : _c.float, volumevar : _c.float, panvar : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetVariations")
    FMOD_Sound_GetVariations :: proc(sound : ^FMOD_SOUND, frequencyvar : ^_c.float, volumevar : ^_c.float, panvar : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_Set3DMinMaxDistance")
    FMOD_Sound_Set3DMinMaxDistance :: proc(sound : ^FMOD_SOUND, min : _c.float, max : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_Get3DMinMaxDistance")
    FMOD_Sound_Get3DMinMaxDistance :: proc(sound : ^FMOD_SOUND, min : ^_c.float, max : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_Set3DConeSettings")
    FMOD_Sound_Set3DConeSettings :: proc(sound : ^FMOD_SOUND, insideconeangle : _c.float, outsideconeangle : _c.float, outsidevolume : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_Get3DConeSettings")
    FMOD_Sound_Get3DConeSettings :: proc(sound : ^FMOD_SOUND, insideconeangle : ^_c.float, outsideconeangle : ^_c.float, outsidevolume : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_Set3DCustomRolloff")
    FMOD_Sound_Set3DCustomRolloff :: proc(sound : ^FMOD_SOUND, points : ^FMOD_VECTOR, numpoints : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_Get3DCustomRolloff")
    FMOD_Sound_Get3DCustomRolloff :: proc(sound : ^FMOD_SOUND, points : ^^FMOD_VECTOR, numpoints : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_SetSubSound")
    FMOD_Sound_SetSubSound :: proc(sound : ^FMOD_SOUND, index : _c.int, subsound : ^FMOD_SOUND) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetSubSound")
    FMOD_Sound_GetSubSound :: proc(sound : ^FMOD_SOUND, index : _c.int, subsound : ^^FMOD_SOUND) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_SetSubSoundSentence")
    FMOD_Sound_SetSubSoundSentence :: proc(sound : ^FMOD_SOUND, subsoundlist : ^_c.int, numsubsounds : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetName")
    FMOD_Sound_GetName :: proc(sound : ^FMOD_SOUND, name : cstring, namelen : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetLength")
    FMOD_Sound_GetLength :: proc(sound : ^FMOD_SOUND, length : ^_c.uint, lengthtype : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetFormat")
    FMOD_Sound_GetFormat :: proc(sound : ^FMOD_SOUND, type : ^FMOD_SOUND_TYPE, format : ^FMOD_SOUND_FORMAT, channels : ^_c.int, bits : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetNumSubSounds")
    FMOD_Sound_GetNumSubSounds :: proc(sound : ^FMOD_SOUND, numsubsounds : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetNumTags")
    FMOD_Sound_GetNumTags :: proc(sound : ^FMOD_SOUND, numtags : ^_c.int, numtagsupdated : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetTag")
    FMOD_Sound_GetTag :: proc(sound : ^FMOD_SOUND, name : cstring, index : _c.int, tag : ^FMOD_TAG) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetOpenState")
    FMOD_Sound_GetOpenState :: proc(sound : ^FMOD_SOUND, openstate : ^FMOD_OPENSTATE, percentbuffered : ^_c.uint, starving : ^_c.int, diskbusy : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_ReadData")
    FMOD_Sound_ReadData :: proc(sound : ^FMOD_SOUND, buffer : rawptr, lenbytes : _c.uint, read : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_SeekData")
    FMOD_Sound_SeekData :: proc(sound : ^FMOD_SOUND, pcm : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_SetSoundGroup")
    FMOD_Sound_SetSoundGroup :: proc(sound : ^FMOD_SOUND, soundgroup : ^FMOD_SOUNDGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetSoundGroup")
    FMOD_Sound_GetSoundGroup :: proc(sound : ^FMOD_SOUND, soundgroup : ^^FMOD_SOUNDGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetNumSyncPoints")
    FMOD_Sound_GetNumSyncPoints :: proc(sound : ^FMOD_SOUND, numsyncpoints : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetSyncPoint")
    FMOD_Sound_GetSyncPoint :: proc(sound : ^FMOD_SOUND, index : _c.int, point : ^^FMOD_SYNCPOINT) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetSyncPointInfo")
    FMOD_Sound_GetSyncPointInfo :: proc(sound : ^FMOD_SOUND, point : ^FMOD_SYNCPOINT, name : cstring, namelen : _c.int, offset : ^_c.uint, offsettype : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_AddSyncPoint")
    FMOD_Sound_AddSyncPoint :: proc(sound : ^FMOD_SOUND, offset : _c.uint, offsettype : _c.uint, name : cstring, point : ^^FMOD_SYNCPOINT) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_DeleteSyncPoint")
    FMOD_Sound_DeleteSyncPoint :: proc(sound : ^FMOD_SOUND, point : ^FMOD_SYNCPOINT) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_SetMode")
    FMOD_Sound_SetMode :: proc(sound : ^FMOD_SOUND, mode : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetMode")
    FMOD_Sound_GetMode :: proc(sound : ^FMOD_SOUND, mode : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_SetLoopCount")
    FMOD_Sound_SetLoopCount :: proc(sound : ^FMOD_SOUND, loopcount : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetLoopCount")
    FMOD_Sound_GetLoopCount :: proc(sound : ^FMOD_SOUND, loopcount : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_SetLoopPoints")
    FMOD_Sound_SetLoopPoints :: proc(sound : ^FMOD_SOUND, loopstart : _c.uint, loopstarttype : _c.uint, loopend : _c.uint, loopendtype : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetLoopPoints")
    FMOD_Sound_GetLoopPoints :: proc(sound : ^FMOD_SOUND, loopstart : ^_c.uint, loopstarttype : _c.uint, loopend : ^_c.uint, loopendtype : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetMusicNumChannels")
    FMOD_Sound_GetMusicNumChannels :: proc(sound : ^FMOD_SOUND, numchannels : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_SetMusicChannelVolume")
    FMOD_Sound_SetMusicChannelVolume :: proc(sound : ^FMOD_SOUND, channel : _c.int, volume : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetMusicChannelVolume")
    FMOD_Sound_GetMusicChannelVolume :: proc(sound : ^FMOD_SOUND, channel : _c.int, volume : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_SetMusicSpeed")
    FMOD_Sound_SetMusicSpeed :: proc(sound : ^FMOD_SOUND, speed : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetMusicSpeed")
    FMOD_Sound_GetMusicSpeed :: proc(sound : ^FMOD_SOUND, speed : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_SetUserData")
    FMOD_Sound_SetUserData :: proc(sound : ^FMOD_SOUND, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetUserData")
    FMOD_Sound_GetUserData :: proc(sound : ^FMOD_SOUND, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_Sound_GetMemoryInfo")
    FMOD_Sound_GetMemoryInfo :: proc(sound : ^FMOD_SOUND, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetSystemObject")
    FMOD_Channel_GetSystemObject :: proc(channel : ^FMOD_CHANNEL, system : ^^FMOD_SYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Stop")
    FMOD_Channel_Stop :: proc(channel : ^FMOD_CHANNEL) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetPaused")
    FMOD_Channel_SetPaused :: proc(channel : ^FMOD_CHANNEL, paused : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetPaused")
    FMOD_Channel_GetPaused :: proc(channel : ^FMOD_CHANNEL, paused : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetVolume")
    FMOD_Channel_SetVolume :: proc(channel : ^FMOD_CHANNEL, volume : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetVolume")
    FMOD_Channel_GetVolume :: proc(channel : ^FMOD_CHANNEL, volume : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetFrequency")
    FMOD_Channel_SetFrequency :: proc(channel : ^FMOD_CHANNEL, frequency : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetFrequency")
    FMOD_Channel_GetFrequency :: proc(channel : ^FMOD_CHANNEL, frequency : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetPan")
    FMOD_Channel_SetPan :: proc(channel : ^FMOD_CHANNEL, pan : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetPan")
    FMOD_Channel_GetPan :: proc(channel : ^FMOD_CHANNEL, pan : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetDelay")
    FMOD_Channel_SetDelay :: proc(channel : ^FMOD_CHANNEL, delaytype : FMOD_DELAYTYPE, delayhi : _c.uint, delaylo : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetDelay")
    FMOD_Channel_GetDelay :: proc(channel : ^FMOD_CHANNEL, delaytype : FMOD_DELAYTYPE, delayhi : ^_c.uint, delaylo : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetSpeakerMix")
    FMOD_Channel_SetSpeakerMix :: proc(channel : ^FMOD_CHANNEL, frontleft : _c.float, frontright : _c.float, center : _c.float, lfe : _c.float, backleft : _c.float, backright : _c.float, sideleft : _c.float, sideright : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetSpeakerMix")
    FMOD_Channel_GetSpeakerMix :: proc(channel : ^FMOD_CHANNEL, frontleft : ^_c.float, frontright : ^_c.float, center : ^_c.float, lfe : ^_c.float, backleft : ^_c.float, backright : ^_c.float, sideleft : ^_c.float, sideright : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetSpeakerLevels")
    FMOD_Channel_SetSpeakerLevels :: proc(channel : ^FMOD_CHANNEL, speaker : FMOD_SPEAKER, levels : ^_c.float, numlevels : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetSpeakerLevels")
    FMOD_Channel_GetSpeakerLevels :: proc(channel : ^FMOD_CHANNEL, speaker : FMOD_SPEAKER, levels : ^_c.float, numlevels : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetInputChannelMix")
    FMOD_Channel_SetInputChannelMix :: proc(channel : ^FMOD_CHANNEL, levels : ^_c.float, numlevels : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetInputChannelMix")
    FMOD_Channel_GetInputChannelMix :: proc(channel : ^FMOD_CHANNEL, levels : ^_c.float, numlevels : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetMute")
    FMOD_Channel_SetMute :: proc(channel : ^FMOD_CHANNEL, mute : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetMute")
    FMOD_Channel_GetMute :: proc(channel : ^FMOD_CHANNEL, mute : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetPriority")
    FMOD_Channel_SetPriority :: proc(channel : ^FMOD_CHANNEL, priority : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetPriority")
    FMOD_Channel_GetPriority :: proc(channel : ^FMOD_CHANNEL, priority : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetPosition")
    FMOD_Channel_SetPosition :: proc(channel : ^FMOD_CHANNEL, position : _c.uint, postype : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetPosition")
    FMOD_Channel_GetPosition :: proc(channel : ^FMOD_CHANNEL, position : ^_c.uint, postype : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetReverbProperties")
    FMOD_Channel_SetReverbProperties :: proc(channel : ^FMOD_CHANNEL, prop : ^FMOD_REVERB_CHANNELPROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetReverbProperties")
    FMOD_Channel_GetReverbProperties :: proc(channel : ^FMOD_CHANNEL, prop : ^FMOD_REVERB_CHANNELPROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetLowPassGain")
    FMOD_Channel_SetLowPassGain :: proc(channel : ^FMOD_CHANNEL, gain : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetLowPassGain")
    FMOD_Channel_GetLowPassGain :: proc(channel : ^FMOD_CHANNEL, gain : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetChannelGroup")
    FMOD_Channel_SetChannelGroup :: proc(channel : ^FMOD_CHANNEL, channelgroup : ^FMOD_CHANNELGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetChannelGroup")
    FMOD_Channel_GetChannelGroup :: proc(channel : ^FMOD_CHANNEL, channelgroup : ^^FMOD_CHANNELGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetCallback")
    FMOD_Channel_SetCallback :: proc(channel : ^FMOD_CHANNEL, callback : FMOD_CHANNEL_CALLBACK) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Set3DAttributes")
    FMOD_Channel_Set3DAttributes :: proc(channel : ^FMOD_CHANNEL, pos : ^FMOD_VECTOR, vel : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Get3DAttributes")
    FMOD_Channel_Get3DAttributes :: proc(channel : ^FMOD_CHANNEL, pos : ^FMOD_VECTOR, vel : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Set3DMinMaxDistance")
    FMOD_Channel_Set3DMinMaxDistance :: proc(channel : ^FMOD_CHANNEL, mindistance : _c.float, maxdistance : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Get3DMinMaxDistance")
    FMOD_Channel_Get3DMinMaxDistance :: proc(channel : ^FMOD_CHANNEL, mindistance : ^_c.float, maxdistance : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Set3DConeSettings")
    FMOD_Channel_Set3DConeSettings :: proc(channel : ^FMOD_CHANNEL, insideconeangle : _c.float, outsideconeangle : _c.float, outsidevolume : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Get3DConeSettings")
    FMOD_Channel_Get3DConeSettings :: proc(channel : ^FMOD_CHANNEL, insideconeangle : ^_c.float, outsideconeangle : ^_c.float, outsidevolume : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Set3DConeOrientation")
    FMOD_Channel_Set3DConeOrientation :: proc(channel : ^FMOD_CHANNEL, orientation : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Get3DConeOrientation")
    FMOD_Channel_Get3DConeOrientation :: proc(channel : ^FMOD_CHANNEL, orientation : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Set3DCustomRolloff")
    FMOD_Channel_Set3DCustomRolloff :: proc(channel : ^FMOD_CHANNEL, points : ^FMOD_VECTOR, numpoints : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Get3DCustomRolloff")
    FMOD_Channel_Get3DCustomRolloff :: proc(channel : ^FMOD_CHANNEL, points : ^^FMOD_VECTOR, numpoints : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Set3DOcclusion")
    FMOD_Channel_Set3DOcclusion :: proc(channel : ^FMOD_CHANNEL, directocclusion : _c.float, reverbocclusion : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Get3DOcclusion")
    FMOD_Channel_Get3DOcclusion :: proc(channel : ^FMOD_CHANNEL, directocclusion : ^_c.float, reverbocclusion : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Set3DSpread")
    FMOD_Channel_Set3DSpread :: proc(channel : ^FMOD_CHANNEL, angle : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Get3DSpread")
    FMOD_Channel_Get3DSpread :: proc(channel : ^FMOD_CHANNEL, angle : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Set3DPanLevel")
    FMOD_Channel_Set3DPanLevel :: proc(channel : ^FMOD_CHANNEL, level : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Get3DPanLevel")
    FMOD_Channel_Get3DPanLevel :: proc(channel : ^FMOD_CHANNEL, level : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Set3DDopplerLevel")
    FMOD_Channel_Set3DDopplerLevel :: proc(channel : ^FMOD_CHANNEL, level : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Get3DDopplerLevel")
    FMOD_Channel_Get3DDopplerLevel :: proc(channel : ^FMOD_CHANNEL, level : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Set3DDistanceFilter")
    FMOD_Channel_Set3DDistanceFilter :: proc(channel : ^FMOD_CHANNEL, custom : _c.int, customLevel : _c.float, centerFreq : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_Get3DDistanceFilter")
    FMOD_Channel_Get3DDistanceFilter :: proc(channel : ^FMOD_CHANNEL, custom : ^_c.int, customLevel : ^_c.float, centerFreq : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetDSPHead")
    FMOD_Channel_GetDSPHead :: proc(channel : ^FMOD_CHANNEL, dsp : ^^FMOD_DSP) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_AddDSP")
    FMOD_Channel_AddDSP :: proc(channel : ^FMOD_CHANNEL, dsp : ^FMOD_DSP, connection : ^^FMOD_DSPCONNECTION) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_IsPlaying")
    FMOD_Channel_IsPlaying :: proc(channel : ^FMOD_CHANNEL, isplaying : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_IsVirtual")
    FMOD_Channel_IsVirtual :: proc(channel : ^FMOD_CHANNEL, isvirtual : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetAudibility")
    FMOD_Channel_GetAudibility :: proc(channel : ^FMOD_CHANNEL, audibility : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetCurrentSound")
    FMOD_Channel_GetCurrentSound :: proc(channel : ^FMOD_CHANNEL, sound : ^^FMOD_SOUND) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetSpectrum")
    FMOD_Channel_GetSpectrum :: proc(channel : ^FMOD_CHANNEL, spectrumarray : ^_c.float, numvalues : _c.int, channeloffset : _c.int, windowtype : FMOD_DSP_FFT_WINDOW) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetWaveData")
    FMOD_Channel_GetWaveData :: proc(channel : ^FMOD_CHANNEL, wavearray : ^_c.float, numvalues : _c.int, channeloffset : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetIndex")
    FMOD_Channel_GetIndex :: proc(channel : ^FMOD_CHANNEL, index : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetMode")
    FMOD_Channel_SetMode :: proc(channel : ^FMOD_CHANNEL, mode : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetMode")
    FMOD_Channel_GetMode :: proc(channel : ^FMOD_CHANNEL, mode : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetLoopCount")
    FMOD_Channel_SetLoopCount :: proc(channel : ^FMOD_CHANNEL, loopcount : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetLoopCount")
    FMOD_Channel_GetLoopCount :: proc(channel : ^FMOD_CHANNEL, loopcount : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetLoopPoints")
    FMOD_Channel_SetLoopPoints :: proc(channel : ^FMOD_CHANNEL, loopstart : _c.uint, loopstarttype : _c.uint, loopend : _c.uint, loopendtype : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetLoopPoints")
    FMOD_Channel_GetLoopPoints :: proc(channel : ^FMOD_CHANNEL, loopstart : ^_c.uint, loopstarttype : _c.uint, loopend : ^_c.uint, loopendtype : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_SetUserData")
    FMOD_Channel_SetUserData :: proc(channel : ^FMOD_CHANNEL, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetUserData")
    FMOD_Channel_GetUserData :: proc(channel : ^FMOD_CHANNEL, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_Channel_GetMemoryInfo")
    FMOD_Channel_GetMemoryInfo :: proc(channel : ^FMOD_CHANNEL, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_Release")
    FMOD_ChannelGroup_Release :: proc(channelgroup : ^FMOD_CHANNELGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetSystemObject")
    FMOD_ChannelGroup_GetSystemObject :: proc(channelgroup : ^FMOD_CHANNELGROUP, system : ^^FMOD_SYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_SetVolume")
    FMOD_ChannelGroup_SetVolume :: proc(channelgroup : ^FMOD_CHANNELGROUP, volume : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetVolume")
    FMOD_ChannelGroup_GetVolume :: proc(channelgroup : ^FMOD_CHANNELGROUP, volume : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_SetPitch")
    FMOD_ChannelGroup_SetPitch :: proc(channelgroup : ^FMOD_CHANNELGROUP, pitch : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetPitch")
    FMOD_ChannelGroup_GetPitch :: proc(channelgroup : ^FMOD_CHANNELGROUP, pitch : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_Set3DOcclusion")
    FMOD_ChannelGroup_Set3DOcclusion :: proc(channelgroup : ^FMOD_CHANNELGROUP, directocclusion : _c.float, reverbocclusion : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_Get3DOcclusion")
    FMOD_ChannelGroup_Get3DOcclusion :: proc(channelgroup : ^FMOD_CHANNELGROUP, directocclusion : ^_c.float, reverbocclusion : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_SetPaused")
    FMOD_ChannelGroup_SetPaused :: proc(channelgroup : ^FMOD_CHANNELGROUP, paused : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetPaused")
    FMOD_ChannelGroup_GetPaused :: proc(channelgroup : ^FMOD_CHANNELGROUP, paused : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_SetMute")
    FMOD_ChannelGroup_SetMute :: proc(channelgroup : ^FMOD_CHANNELGROUP, mute : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetMute")
    FMOD_ChannelGroup_GetMute :: proc(channelgroup : ^FMOD_CHANNELGROUP, mute : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_Stop")
    FMOD_ChannelGroup_Stop :: proc(channelgroup : ^FMOD_CHANNELGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_OverrideVolume")
    FMOD_ChannelGroup_OverrideVolume :: proc(channelgroup : ^FMOD_CHANNELGROUP, volume : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_OverrideFrequency")
    FMOD_ChannelGroup_OverrideFrequency :: proc(channelgroup : ^FMOD_CHANNELGROUP, frequency : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_OverridePan")
    FMOD_ChannelGroup_OverridePan :: proc(channelgroup : ^FMOD_CHANNELGROUP, pan : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_OverrideReverbProperties")
    FMOD_ChannelGroup_OverrideReverbProperties :: proc(channelgroup : ^FMOD_CHANNELGROUP, prop : ^FMOD_REVERB_CHANNELPROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_Override3DAttributes")
    FMOD_ChannelGroup_Override3DAttributes :: proc(channelgroup : ^FMOD_CHANNELGROUP, pos : ^FMOD_VECTOR, vel : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_OverrideSpeakerMix")
    FMOD_ChannelGroup_OverrideSpeakerMix :: proc(channelgroup : ^FMOD_CHANNELGROUP, frontleft : _c.float, frontright : _c.float, center : _c.float, lfe : _c.float, backleft : _c.float, backright : _c.float, sideleft : _c.float, sideright : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_AddGroup")
    FMOD_ChannelGroup_AddGroup :: proc(channelgroup : ^FMOD_CHANNELGROUP, group : ^FMOD_CHANNELGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetNumGroups")
    FMOD_ChannelGroup_GetNumGroups :: proc(channelgroup : ^FMOD_CHANNELGROUP, numgroups : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetGroup")
    FMOD_ChannelGroup_GetGroup :: proc(channelgroup : ^FMOD_CHANNELGROUP, index : _c.int, group : ^^FMOD_CHANNELGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetParentGroup")
    FMOD_ChannelGroup_GetParentGroup :: proc(channelgroup : ^FMOD_CHANNELGROUP, group : ^^FMOD_CHANNELGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetDSPHead")
    FMOD_ChannelGroup_GetDSPHead :: proc(channelgroup : ^FMOD_CHANNELGROUP, dsp : ^^FMOD_DSP) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_AddDSP")
    FMOD_ChannelGroup_AddDSP :: proc(channelgroup : ^FMOD_CHANNELGROUP, dsp : ^FMOD_DSP, connection : ^^FMOD_DSPCONNECTION) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetName")
    FMOD_ChannelGroup_GetName :: proc(channelgroup : ^FMOD_CHANNELGROUP, name : cstring, namelen : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetNumChannels")
    FMOD_ChannelGroup_GetNumChannels :: proc(channelgroup : ^FMOD_CHANNELGROUP, numchannels : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetChannel")
    FMOD_ChannelGroup_GetChannel :: proc(channelgroup : ^FMOD_CHANNELGROUP, index : _c.int, channel : ^^FMOD_CHANNEL) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetSpectrum")
    FMOD_ChannelGroup_GetSpectrum :: proc(channelgroup : ^FMOD_CHANNELGROUP, spectrumarray : ^_c.float, numvalues : _c.int, channeloffset : _c.int, windowtype : FMOD_DSP_FFT_WINDOW) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetWaveData")
    FMOD_ChannelGroup_GetWaveData :: proc(channelgroup : ^FMOD_CHANNELGROUP, wavearray : ^_c.float, numvalues : _c.int, channeloffset : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_SetUserData")
    FMOD_ChannelGroup_SetUserData :: proc(channelgroup : ^FMOD_CHANNELGROUP, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetUserData")
    FMOD_ChannelGroup_GetUserData :: proc(channelgroup : ^FMOD_CHANNELGROUP, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_ChannelGroup_GetMemoryInfo")
    FMOD_ChannelGroup_GetMemoryInfo :: proc(channelgroup : ^FMOD_CHANNELGROUP, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_Release")
    FMOD_SoundGroup_Release :: proc(soundgroup : ^FMOD_SOUNDGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_GetSystemObject")
    FMOD_SoundGroup_GetSystemObject :: proc(soundgroup : ^FMOD_SOUNDGROUP, system : ^^FMOD_SYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_SetMaxAudible")
    FMOD_SoundGroup_SetMaxAudible :: proc(soundgroup : ^FMOD_SOUNDGROUP, maxaudible : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_GetMaxAudible")
    FMOD_SoundGroup_GetMaxAudible :: proc(soundgroup : ^FMOD_SOUNDGROUP, maxaudible : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_SetMaxAudibleBehavior")
    FMOD_SoundGroup_SetMaxAudibleBehavior :: proc(soundgroup : ^FMOD_SOUNDGROUP, behavior : FMOD_SOUNDGROUP_BEHAVIOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_GetMaxAudibleBehavior")
    FMOD_SoundGroup_GetMaxAudibleBehavior :: proc(soundgroup : ^FMOD_SOUNDGROUP, behavior : ^FMOD_SOUNDGROUP_BEHAVIOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_SetMuteFadeSpeed")
    FMOD_SoundGroup_SetMuteFadeSpeed :: proc(soundgroup : ^FMOD_SOUNDGROUP, speed : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_GetMuteFadeSpeed")
    FMOD_SoundGroup_GetMuteFadeSpeed :: proc(soundgroup : ^FMOD_SOUNDGROUP, speed : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_SetVolume")
    FMOD_SoundGroup_SetVolume :: proc(soundgroup : ^FMOD_SOUNDGROUP, volume : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_GetVolume")
    FMOD_SoundGroup_GetVolume :: proc(soundgroup : ^FMOD_SOUNDGROUP, volume : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_Stop")
    FMOD_SoundGroup_Stop :: proc(soundgroup : ^FMOD_SOUNDGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_GetName")
    FMOD_SoundGroup_GetName :: proc(soundgroup : ^FMOD_SOUNDGROUP, name : cstring, namelen : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_GetNumSounds")
    FMOD_SoundGroup_GetNumSounds :: proc(soundgroup : ^FMOD_SOUNDGROUP, numsounds : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_GetSound")
    FMOD_SoundGroup_GetSound :: proc(soundgroup : ^FMOD_SOUNDGROUP, index : _c.int, sound : ^^FMOD_SOUND) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_GetNumPlaying")
    FMOD_SoundGroup_GetNumPlaying :: proc(soundgroup : ^FMOD_SOUNDGROUP, numplaying : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_SetUserData")
    FMOD_SoundGroup_SetUserData :: proc(soundgroup : ^FMOD_SOUNDGROUP, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_GetUserData")
    FMOD_SoundGroup_GetUserData :: proc(soundgroup : ^FMOD_SOUNDGROUP, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_SoundGroup_GetMemoryInfo")
    FMOD_SoundGroup_GetMemoryInfo :: proc(soundgroup : ^FMOD_SOUNDGROUP, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_Release")
    FMOD_DSP_Release :: proc(dsp : ^FMOD_DSP) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetSystemObject")
    FMOD_DSP_GetSystemObject :: proc(dsp : ^FMOD_DSP, system : ^^FMOD_SYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_AddInput")
    FMOD_DSP_AddInput :: proc(dsp : ^FMOD_DSP, target : ^FMOD_DSP, connection : ^^FMOD_DSPCONNECTION) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_DisconnectFrom")
    FMOD_DSP_DisconnectFrom :: proc(dsp : ^FMOD_DSP, target : ^FMOD_DSP) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_DisconnectAll")
    FMOD_DSP_DisconnectAll :: proc(dsp : ^FMOD_DSP, inputs : _c.int, outputs : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_Remove")
    FMOD_DSP_Remove :: proc(dsp : ^FMOD_DSP) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetNumInputs")
    FMOD_DSP_GetNumInputs :: proc(dsp : ^FMOD_DSP, numinputs : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetNumOutputs")
    FMOD_DSP_GetNumOutputs :: proc(dsp : ^FMOD_DSP, numoutputs : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetInput")
    FMOD_DSP_GetInput :: proc(dsp : ^FMOD_DSP, index : _c.int, input : ^^FMOD_DSP, inputconnection : ^^FMOD_DSPCONNECTION) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetOutput")
    FMOD_DSP_GetOutput :: proc(dsp : ^FMOD_DSP, index : _c.int, output : ^^FMOD_DSP, outputconnection : ^^FMOD_DSPCONNECTION) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_SetActive")
    FMOD_DSP_SetActive :: proc(dsp : ^FMOD_DSP, active : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetActive")
    FMOD_DSP_GetActive :: proc(dsp : ^FMOD_DSP, active : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_SetBypass")
    FMOD_DSP_SetBypass :: proc(dsp : ^FMOD_DSP, bypass : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetBypass")
    FMOD_DSP_GetBypass :: proc(dsp : ^FMOD_DSP, bypass : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_SetSpeakerActive")
    FMOD_DSP_SetSpeakerActive :: proc(dsp : ^FMOD_DSP, speaker : FMOD_SPEAKER, active : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetSpeakerActive")
    FMOD_DSP_GetSpeakerActive :: proc(dsp : ^FMOD_DSP, speaker : FMOD_SPEAKER, active : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_Reset")
    FMOD_DSP_Reset :: proc(dsp : ^FMOD_DSP) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_SetParameter")
    FMOD_DSP_SetParameter :: proc(dsp : ^FMOD_DSP, index : _c.int, value : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetParameter")
    FMOD_DSP_GetParameter :: proc(dsp : ^FMOD_DSP, index : _c.int, value : ^_c.float, valuestr : cstring, valuestrlen : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetNumParameters")
    FMOD_DSP_GetNumParameters :: proc(dsp : ^FMOD_DSP, numparams : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetParameterInfo")
    FMOD_DSP_GetParameterInfo :: proc(dsp : ^FMOD_DSP, index : _c.int, name : cstring, label : cstring, description : cstring, descriptionlen : _c.int, min : ^_c.float, max : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_ShowConfigDialog")
    FMOD_DSP_ShowConfigDialog :: proc(dsp : ^FMOD_DSP, hwnd : rawptr, show : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetInfo")
    FMOD_DSP_GetInfo :: proc(dsp : ^FMOD_DSP, name : cstring, version : ^_c.uint, channels : ^_c.int, configwidth : ^_c.int, configheight : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetType")
    FMOD_DSP_GetType :: proc(dsp : ^FMOD_DSP, type : ^FMOD_DSP_TYPE) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_SetDefaults")
    FMOD_DSP_SetDefaults :: proc(dsp : ^FMOD_DSP, frequency : _c.float, volume : _c.float, pan : _c.float, priority : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetDefaults")
    FMOD_DSP_GetDefaults :: proc(dsp : ^FMOD_DSP, frequency : ^_c.float, volume : ^_c.float, pan : ^_c.float, priority : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_SetUserData")
    FMOD_DSP_SetUserData :: proc(dsp : ^FMOD_DSP, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetUserData")
    FMOD_DSP_GetUserData :: proc(dsp : ^FMOD_DSP, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSP_GetMemoryInfo")
    FMOD_DSP_GetMemoryInfo :: proc(dsp : ^FMOD_DSP, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSPConnection_GetInput")
    FMOD_DSPConnection_GetInput :: proc(dspconnection : ^FMOD_DSPCONNECTION, input : ^^FMOD_DSP) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSPConnection_GetOutput")
    FMOD_DSPConnection_GetOutput :: proc(dspconnection : ^FMOD_DSPCONNECTION, output : ^^FMOD_DSP) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSPConnection_SetMix")
    FMOD_DSPConnection_SetMix :: proc(dspconnection : ^FMOD_DSPCONNECTION, volume : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSPConnection_GetMix")
    FMOD_DSPConnection_GetMix :: proc(dspconnection : ^FMOD_DSPCONNECTION, volume : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSPConnection_SetLevels")
    FMOD_DSPConnection_SetLevels :: proc(dspconnection : ^FMOD_DSPCONNECTION, speaker : FMOD_SPEAKER, levels : ^_c.float, numlevels : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSPConnection_GetLevels")
    FMOD_DSPConnection_GetLevels :: proc(dspconnection : ^FMOD_DSPCONNECTION, speaker : FMOD_SPEAKER, levels : ^_c.float, numlevels : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSPConnection_SetUserData")
    FMOD_DSPConnection_SetUserData :: proc(dspconnection : ^FMOD_DSPCONNECTION, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSPConnection_GetUserData")
    FMOD_DSPConnection_GetUserData :: proc(dspconnection : ^FMOD_DSPCONNECTION, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_DSPConnection_GetMemoryInfo")
    FMOD_DSPConnection_GetMemoryInfo :: proc(dspconnection : ^FMOD_DSPCONNECTION, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_Release")
    FMOD_Geometry_Release :: proc(geometry : ^FMOD_GEOMETRY) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_AddPolygon")
    FMOD_Geometry_AddPolygon :: proc(geometry : ^FMOD_GEOMETRY, directocclusion : _c.float, reverbocclusion : _c.float, doublesided : _c.int, numvertices : _c.int, vertices : ^FMOD_VECTOR, polygonindex : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_GetNumPolygons")
    FMOD_Geometry_GetNumPolygons :: proc(geometry : ^FMOD_GEOMETRY, numpolygons : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_GetMaxPolygons")
    FMOD_Geometry_GetMaxPolygons :: proc(geometry : ^FMOD_GEOMETRY, maxpolygons : ^_c.int, maxvertices : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_GetPolygonNumVertices")
    FMOD_Geometry_GetPolygonNumVertices :: proc(geometry : ^FMOD_GEOMETRY, index : _c.int, numvertices : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_SetPolygonVertex")
    FMOD_Geometry_SetPolygonVertex :: proc(geometry : ^FMOD_GEOMETRY, index : _c.int, vertexindex : _c.int, vertex : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_GetPolygonVertex")
    FMOD_Geometry_GetPolygonVertex :: proc(geometry : ^FMOD_GEOMETRY, index : _c.int, vertexindex : _c.int, vertex : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_SetPolygonAttributes")
    FMOD_Geometry_SetPolygonAttributes :: proc(geometry : ^FMOD_GEOMETRY, index : _c.int, directocclusion : _c.float, reverbocclusion : _c.float, doublesided : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_GetPolygonAttributes")
    FMOD_Geometry_GetPolygonAttributes :: proc(geometry : ^FMOD_GEOMETRY, index : _c.int, directocclusion : ^_c.float, reverbocclusion : ^_c.float, doublesided : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_SetActive")
    FMOD_Geometry_SetActive :: proc(geometry : ^FMOD_GEOMETRY, active : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_GetActive")
    FMOD_Geometry_GetActive :: proc(geometry : ^FMOD_GEOMETRY, active : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_SetRotation")
    FMOD_Geometry_SetRotation :: proc(geometry : ^FMOD_GEOMETRY, forward : ^FMOD_VECTOR, up : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_GetRotation")
    FMOD_Geometry_GetRotation :: proc(geometry : ^FMOD_GEOMETRY, forward : ^FMOD_VECTOR, up : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_SetPosition")
    FMOD_Geometry_SetPosition :: proc(geometry : ^FMOD_GEOMETRY, position : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_GetPosition")
    FMOD_Geometry_GetPosition :: proc(geometry : ^FMOD_GEOMETRY, position : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_SetScale")
    FMOD_Geometry_SetScale :: proc(geometry : ^FMOD_GEOMETRY, scale : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_GetScale")
    FMOD_Geometry_GetScale :: proc(geometry : ^FMOD_GEOMETRY, scale : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_Save")
    FMOD_Geometry_Save :: proc(geometry : ^FMOD_GEOMETRY, data : rawptr, datasize : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_SetUserData")
    FMOD_Geometry_SetUserData :: proc(geometry : ^FMOD_GEOMETRY, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_GetUserData")
    FMOD_Geometry_GetUserData :: proc(geometry : ^FMOD_GEOMETRY, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_Geometry_GetMemoryInfo")
    FMOD_Geometry_GetMemoryInfo :: proc(geometry : ^FMOD_GEOMETRY, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_Reverb_Release")
    FMOD_Reverb_Release :: proc(reverb : ^FMOD_REVERB) -> FMOD_RESULT ---;

    @(link_name="FMOD_Reverb_Set3DAttributes")
    FMOD_Reverb_Set3DAttributes :: proc(reverb : ^FMOD_REVERB, position : ^FMOD_VECTOR, mindistance : _c.float, maxdistance : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Reverb_Get3DAttributes")
    FMOD_Reverb_Get3DAttributes :: proc(reverb : ^FMOD_REVERB, position : ^FMOD_VECTOR, mindistance : ^_c.float, maxdistance : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Reverb_SetProperties")
    FMOD_Reverb_SetProperties :: proc(reverb : ^FMOD_REVERB, properties : ^FMOD_REVERB_PROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_Reverb_GetProperties")
    FMOD_Reverb_GetProperties :: proc(reverb : ^FMOD_REVERB, properties : ^FMOD_REVERB_PROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_Reverb_SetActive")
    FMOD_Reverb_SetActive :: proc(reverb : ^FMOD_REVERB, active : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Reverb_GetActive")
    FMOD_Reverb_GetActive :: proc(reverb : ^FMOD_REVERB, active : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Reverb_SetUserData")
    FMOD_Reverb_SetUserData :: proc(reverb : ^FMOD_REVERB, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_Reverb_GetUserData")
    FMOD_Reverb_GetUserData :: proc(reverb : ^FMOD_REVERB, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_Reverb_GetMemoryInfo")
    FMOD_Reverb_GetMemoryInfo :: proc(reverb : ^FMOD_REVERB, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_Create")
    FMOD_EventSystem_Create :: proc(eventsystem : ^^FMOD_EVENTSYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_Init")
    FMOD_EventSystem_Init :: proc(eventsystem : ^FMOD_EVENTSYSTEM, maxchannels : _c.int, flags : _c.uint, extradriverdata : rawptr, eventflags : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_Release")
    FMOD_EventSystem_Release :: proc(eventsystem : ^FMOD_EVENTSYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_Update")
    FMOD_EventSystem_Update :: proc(eventsystem : ^FMOD_EVENTSYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_SetMediaPath")
    FMOD_EventSystem_SetMediaPath :: proc(eventsystem : ^FMOD_EVENTSYSTEM, path : cstring) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_SetPluginPath")
    FMOD_EventSystem_SetPluginPath :: proc(eventsystem : ^FMOD_EVENTSYSTEM, path : cstring) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetVersion")
    FMOD_EventSystem_GetVersion :: proc(eventsystem : ^FMOD_EVENTSYSTEM, version : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetInfo")
    FMOD_EventSystem_GetInfo :: proc(eventsystem : ^FMOD_EVENTSYSTEM, info : ^FMOD_EVENT_SYSTEMINFO) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetSystemObject")
    FMOD_EventSystem_GetSystemObject :: proc(eventsystem : ^FMOD_EVENTSYSTEM, system : ^^FMOD_SYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetMusicSystem")
    FMOD_EventSystem_GetMusicSystem :: proc(eventsystem : ^FMOD_EVENTSYSTEM, musicsystem : ^^FMOD_MUSICSYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_SetLanguage")
    FMOD_EventSystem_SetLanguage :: proc(eventsystem : ^FMOD_EVENTSYSTEM, language : cstring) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetLanguage")
    FMOD_EventSystem_GetLanguage :: proc(eventsystem : ^FMOD_EVENTSYSTEM, language : cstring) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_RegisterDSP")
    FMOD_EventSystem_RegisterDSP :: proc(eventsystem : ^FMOD_EVENTSYSTEM, description : ^FMOD_DSP_DESCRIPTION, handle : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_Load")
    FMOD_EventSystem_Load :: proc(eventsystem : ^FMOD_EVENTSYSTEM, name_or_data : cstring, loadinfo : ^FMOD_EVENT_LOADINFO, project : ^^FMOD_EVENTPROJECT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_Unload")
    FMOD_EventSystem_Unload :: proc(eventsystem : ^FMOD_EVENTSYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetProject")
    FMOD_EventSystem_GetProject :: proc(eventsystem : ^FMOD_EVENTSYSTEM, name : cstring, project : ^^FMOD_EVENTPROJECT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetProjectByIndex")
    FMOD_EventSystem_GetProjectByIndex :: proc(eventsystem : ^FMOD_EVENTSYSTEM, index : _c.int, project : ^^FMOD_EVENTPROJECT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetNumProjects")
    FMOD_EventSystem_GetNumProjects :: proc(eventsystem : ^FMOD_EVENTSYSTEM, numprojects : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetCategory")
    FMOD_EventSystem_GetCategory :: proc(eventsystem : ^FMOD_EVENTSYSTEM, name : cstring, category : ^^FMOD_EVENTCATEGORY) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetCategoryByIndex")
    FMOD_EventSystem_GetCategoryByIndex :: proc(eventsystem : ^FMOD_EVENTSYSTEM, index : _c.int, category : ^^FMOD_EVENTCATEGORY) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetMusicCategory")
    FMOD_EventSystem_GetMusicCategory :: proc(eventsystem : ^FMOD_EVENTSYSTEM, category : ^^FMOD_EVENTCATEGORY) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetNumCategories")
    FMOD_EventSystem_GetNumCategories :: proc(eventsystem : ^FMOD_EVENTSYSTEM, numcategories : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetGroup")
    FMOD_EventSystem_GetGroup :: proc(eventsystem : ^FMOD_EVENTSYSTEM, name : cstring, cacheevents : _c.int, group : ^^FMOD_EVENTGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetEvent")
    FMOD_EventSystem_GetEvent :: proc(eventsystem : ^FMOD_EVENTSYSTEM, name : cstring, mode : _c.uint, event : ^^FMOD_EVENT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetEventBySystemID")
    FMOD_EventSystem_GetEventBySystemID :: proc(eventsystem : ^FMOD_EVENTSYSTEM, systemid : _c.uint, mode : _c.uint, event : ^^FMOD_EVENT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetEventByGUID")
    FMOD_EventSystem_GetEventByGUID :: proc(eventsystem : ^FMOD_EVENTSYSTEM, guid : ^FMOD_GUID, mode : _c.uint, event : ^^FMOD_EVENT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetEventByGUIDString")
    FMOD_EventSystem_GetEventByGUIDString :: proc(eventsystem : ^FMOD_EVENTSYSTEM, guid : cstring, mode : _c.uint, event : ^^FMOD_EVENT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetNumEvents")
    FMOD_EventSystem_GetNumEvents :: proc(eventsystem : ^FMOD_EVENTSYSTEM, numevents : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_SetReverbProperties")
    FMOD_EventSystem_SetReverbProperties :: proc(eventsystem : ^FMOD_EVENTSYSTEM, props : ^FMOD_REVERB_PROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetReverbProperties")
    FMOD_EventSystem_GetReverbProperties :: proc(eventsystem : ^FMOD_EVENTSYSTEM, props : ^FMOD_REVERB_PROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetReverbPreset")
    FMOD_EventSystem_GetReverbPreset :: proc(eventsystem : ^FMOD_EVENTSYSTEM, name : cstring, props : ^FMOD_REVERB_PROPERTIES, index : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetReverbPresetByIndex")
    FMOD_EventSystem_GetReverbPresetByIndex :: proc(eventsystem : ^FMOD_EVENTSYSTEM, index : _c.int, props : ^FMOD_REVERB_PROPERTIES, name : ^cstring) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetNumReverbPresets")
    FMOD_EventSystem_GetNumReverbPresets :: proc(eventsystem : ^FMOD_EVENTSYSTEM, numpresets : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_CreateReverb")
    FMOD_EventSystem_CreateReverb :: proc(eventsystem : ^FMOD_EVENTSYSTEM, reverb : ^^FMOD_EVENTREVERB) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_SetReverbAmbientProperties")
    FMOD_EventSystem_SetReverbAmbientProperties :: proc(eventsystem : ^FMOD_EVENTSYSTEM, props : ^FMOD_REVERB_PROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetReverbAmbientProperties")
    FMOD_EventSystem_GetReverbAmbientProperties :: proc(eventsystem : ^FMOD_EVENTSYSTEM, props : ^FMOD_REVERB_PROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_CreateEventQueue")
    FMOD_EventSystem_CreateEventQueue :: proc(eventsystem : ^FMOD_EVENTSYSTEM, queue : ^^FMOD_EVENTQUEUE) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_CreateEventQueueEntry")
    FMOD_EventSystem_CreateEventQueueEntry :: proc(eventsystem : ^FMOD_EVENTSYSTEM, event : ^FMOD_EVENT, entry : ^^FMOD_EVENTQUEUEENTRY) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_Set3DNumListeners")
    FMOD_EventSystem_Set3DNumListeners :: proc(eventsystem : ^FMOD_EVENTSYSTEM, numlisteners : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_Get3DNumListeners")
    FMOD_EventSystem_Get3DNumListeners :: proc(eventsystem : ^FMOD_EVENTSYSTEM, numlisteners : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_Set3DListenerAttributes")
    FMOD_EventSystem_Set3DListenerAttributes :: proc(eventsystem : ^FMOD_EVENTSYSTEM, listener : _c.int, pos : ^FMOD_VECTOR, vel : ^FMOD_VECTOR, forward : ^FMOD_VECTOR, up : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_Get3DListenerAttributes")
    FMOD_EventSystem_Get3DListenerAttributes :: proc(eventsystem : ^FMOD_EVENTSYSTEM, listener : _c.int, pos : ^FMOD_VECTOR, vel : ^FMOD_VECTOR, forward : ^FMOD_VECTOR, up : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_SetUserData")
    FMOD_EventSystem_SetUserData :: proc(eventsystem : ^FMOD_EVENTSYSTEM, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetUserData")
    FMOD_EventSystem_GetUserData :: proc(eventsystem : ^FMOD_EVENTSYSTEM, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_PreloadFSB")
    FMOD_EventSystem_PreloadFSB :: proc(eventsystem : ^FMOD_EVENTSYSTEM, filename : cstring, streaminstance : _c.int, sound : ^FMOD_SOUND, unloadprevious : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_UnloadFSB")
    FMOD_EventSystem_UnloadFSB :: proc(eventsystem : ^FMOD_EVENTSYSTEM, filename : cstring, streaminstance : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventSystem_GetMemoryInfo")
    FMOD_EventSystem_GetMemoryInfo :: proc(eventsystem : ^FMOD_EVENTSYSTEM, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventProject_Release")
    FMOD_EventProject_Release :: proc(eventproject : ^FMOD_EVENTPROJECT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventProject_GetInfo")
    FMOD_EventProject_GetInfo :: proc(eventproject : ^FMOD_EVENTPROJECT, info : ^FMOD_EVENT_PROJECTINFO) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventProject_GetGroup")
    FMOD_EventProject_GetGroup :: proc(eventproject : ^FMOD_EVENTPROJECT, name : cstring, cacheevents : _c.int, group : ^^FMOD_EVENTGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventProject_GetGroupByIndex")
    FMOD_EventProject_GetGroupByIndex :: proc(eventproject : ^FMOD_EVENTPROJECT, index : _c.int, cacheevents : _c.int, group : ^^FMOD_EVENTGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventProject_GetNumGroups")
    FMOD_EventProject_GetNumGroups :: proc(eventproject : ^FMOD_EVENTPROJECT, numgroups : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventProject_GetEvent")
    FMOD_EventProject_GetEvent :: proc(eventproject : ^FMOD_EVENTPROJECT, name : cstring, mode : _c.uint, event : ^^FMOD_EVENT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventProject_GetEventByProjectID")
    FMOD_EventProject_GetEventByProjectID :: proc(eventproject : ^FMOD_EVENTPROJECT, projectid : _c.uint, mode : _c.uint, event : ^^FMOD_EVENT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventProject_GetNumEvents")
    FMOD_EventProject_GetNumEvents :: proc(eventproject : ^FMOD_EVENTPROJECT, numevents : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventProject_LoadSampleData")
    FMOD_EventProject_LoadSampleData :: proc(eventproject : ^FMOD_EVENTPROJECT, eventid_array : ^_c.int, sizeof_eventid_array : _c.int, groupname_array : ^cstring, sizeof_groupname_array : _c.int, eventmode : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventProject_StopAllEvents")
    FMOD_EventProject_StopAllEvents :: proc(eventproject : ^FMOD_EVENTPROJECT, immediate : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventProject_CancelAllLoads")
    FMOD_EventProject_CancelAllLoads :: proc(eventproject : ^FMOD_EVENTPROJECT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventProject_SetUserData")
    FMOD_EventProject_SetUserData :: proc(eventproject : ^FMOD_EVENTPROJECT, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventProject_GetUserData")
    FMOD_EventProject_GetUserData :: proc(eventproject : ^FMOD_EVENTPROJECT, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventProject_GetMemoryInfo")
    FMOD_EventProject_GetMemoryInfo :: proc(eventproject : ^FMOD_EVENTPROJECT, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetInfo")
    FMOD_EventGroup_GetInfo :: proc(eventgroup : ^FMOD_EVENTGROUP, index : ^_c.int, name : ^cstring) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_LoadEventData")
    FMOD_EventGroup_LoadEventData :: proc(eventgroup : ^FMOD_EVENTGROUP, resource : FMOD_EVENT_RESOURCE, mode : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_FreeEventData")
    FMOD_EventGroup_FreeEventData :: proc(eventgroup : ^FMOD_EVENTGROUP, event : ^FMOD_EVENT, waituntilready : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetGroup")
    FMOD_EventGroup_GetGroup :: proc(eventgroup : ^FMOD_EVENTGROUP, name : cstring, cacheevents : _c.int, group : ^^FMOD_EVENTGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetGroupByIndex")
    FMOD_EventGroup_GetGroupByIndex :: proc(eventgroup : ^FMOD_EVENTGROUP, index : _c.int, cacheevents : _c.int, group : ^^FMOD_EVENTGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetParentGroup")
    FMOD_EventGroup_GetParentGroup :: proc(eventgroup : ^FMOD_EVENTGROUP, group : ^^FMOD_EVENTGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetParentProject")
    FMOD_EventGroup_GetParentProject :: proc(eventgroup : ^FMOD_EVENTGROUP, project : ^^FMOD_EVENTPROJECT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetNumGroups")
    FMOD_EventGroup_GetNumGroups :: proc(eventgroup : ^FMOD_EVENTGROUP, numgroups : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetEvent")
    FMOD_EventGroup_GetEvent :: proc(eventgroup : ^FMOD_EVENTGROUP, name : cstring, mode : _c.uint, event : ^^FMOD_EVENT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetEventByIndex")
    FMOD_EventGroup_GetEventByIndex :: proc(eventgroup : ^FMOD_EVENTGROUP, index : _c.int, mode : _c.uint, event : ^^FMOD_EVENT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetNumEvents")
    FMOD_EventGroup_GetNumEvents :: proc(eventgroup : ^FMOD_EVENTGROUP, numevents : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetProperty")
    FMOD_EventGroup_GetProperty :: proc(eventgroup : ^FMOD_EVENTGROUP, propertyname : cstring, value : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetPropertyByIndex")
    FMOD_EventGroup_GetPropertyByIndex :: proc(eventgroup : ^FMOD_EVENTGROUP, propertyindex : _c.int, value : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetNumProperties")
    FMOD_EventGroup_GetNumProperties :: proc(eventgroup : ^FMOD_EVENTGROUP, numproperties : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetState")
    FMOD_EventGroup_GetState :: proc(eventgroup : ^FMOD_EVENTGROUP, state : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_SetUserData")
    FMOD_EventGroup_SetUserData :: proc(eventgroup : ^FMOD_EVENTGROUP, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetUserData")
    FMOD_EventGroup_GetUserData :: proc(eventgroup : ^FMOD_EVENTGROUP, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventGroup_GetMemoryInfo")
    FMOD_EventGroup_GetMemoryInfo :: proc(eventgroup : ^FMOD_EVENTGROUP, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_GetInfo")
    FMOD_EventCategory_GetInfo :: proc(eventcategory : ^FMOD_EVENTCATEGORY, index : ^_c.int, name : ^cstring) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_GetCategory")
    FMOD_EventCategory_GetCategory :: proc(eventcategory : ^FMOD_EVENTCATEGORY, name : cstring, category : ^^FMOD_EVENTCATEGORY) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_GetCategoryByIndex")
    FMOD_EventCategory_GetCategoryByIndex :: proc(eventcategory : ^FMOD_EVENTCATEGORY, index : _c.int, category : ^^FMOD_EVENTCATEGORY) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_GetNumCategories")
    FMOD_EventCategory_GetNumCategories :: proc(eventcategory : ^FMOD_EVENTCATEGORY, numcategories : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_GetEventByIndex")
    FMOD_EventCategory_GetEventByIndex :: proc(eventcategory : ^FMOD_EVENTCATEGORY, index : _c.int, mode : _c.uint, event : ^^FMOD_EVENT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_GetNumEvents")
    FMOD_EventCategory_GetNumEvents :: proc(eventcategory : ^FMOD_EVENTCATEGORY, numevents : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_GetParentCategory")
    FMOD_EventCategory_GetParentCategory :: proc(eventcategory : ^FMOD_EVENTCATEGORY, category : ^^FMOD_EVENTCATEGORY) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_StopAllEvents")
    FMOD_EventCategory_StopAllEvents :: proc(eventcategory : ^FMOD_EVENTCATEGORY) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_SetVolume")
    FMOD_EventCategory_SetVolume :: proc(eventcategory : ^FMOD_EVENTCATEGORY, volume : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_GetVolume")
    FMOD_EventCategory_GetVolume :: proc(eventcategory : ^FMOD_EVENTCATEGORY, volume : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_SetPitch")
    FMOD_EventCategory_SetPitch :: proc(eventcategory : ^FMOD_EVENTCATEGORY, pitch : _c.float, units : FMOD_EVENT_PITCHUNITS) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_GetPitch")
    FMOD_EventCategory_GetPitch :: proc(eventcategory : ^FMOD_EVENTCATEGORY, pitch : ^_c.float, units : FMOD_EVENT_PITCHUNITS) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_SetPaused")
    FMOD_EventCategory_SetPaused :: proc(eventcategory : ^FMOD_EVENTCATEGORY, paused : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_GetPaused")
    FMOD_EventCategory_GetPaused :: proc(eventcategory : ^FMOD_EVENTCATEGORY, paused : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_SetMute")
    FMOD_EventCategory_SetMute :: proc(eventcategory : ^FMOD_EVENTCATEGORY, mute : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_GetMute")
    FMOD_EventCategory_GetMute :: proc(eventcategory : ^FMOD_EVENTCATEGORY, mute : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_GetChannelGroup")
    FMOD_EventCategory_GetChannelGroup :: proc(eventcategory : ^FMOD_EVENTCATEGORY, channelgroup : ^^FMOD_CHANNELGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_SetUserData")
    FMOD_EventCategory_SetUserData :: proc(eventcategory : ^FMOD_EVENTCATEGORY, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_GetUserData")
    FMOD_EventCategory_GetUserData :: proc(eventcategory : ^FMOD_EVENTCATEGORY, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventCategory_GetMemoryInfo")
    FMOD_EventCategory_GetMemoryInfo :: proc(eventcategory : ^FMOD_EVENTCATEGORY, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_Release")
    FMOD_Event_Release :: proc(event : ^FMOD_EVENT, freeeventdata : _c.int, waituntilready : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_Start")
    FMOD_Event_Start :: proc(event : ^FMOD_EVENT) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_Stop")
    FMOD_Event_Stop :: proc(event : ^FMOD_EVENT, immediate : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetInfo")
    FMOD_Event_GetInfo :: proc(event : ^FMOD_EVENT, index : ^_c.int, name : ^cstring, info : ^FMOD_EVENT_INFO) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetState")
    FMOD_Event_GetState :: proc(event : ^FMOD_EVENT, state : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetParentGroup")
    FMOD_Event_GetParentGroup :: proc(event : ^FMOD_EVENT, group : ^^FMOD_EVENTGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetChannelGroup")
    FMOD_Event_GetChannelGroup :: proc(event : ^FMOD_EVENT, channelgroup : ^^FMOD_CHANNELGROUP) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_SetCallback")
    FMOD_Event_SetCallback :: proc(event : ^FMOD_EVENT, callback : FMOD_EVENT_CALLBACK, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetParameter")
    FMOD_Event_GetParameter :: proc(event : ^FMOD_EVENT, name : cstring, parameter : ^^FMOD_EVENTPARAMETER) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetParameterByIndex")
    FMOD_Event_GetParameterByIndex :: proc(event : ^FMOD_EVENT, index : _c.int, parameter : ^^FMOD_EVENTPARAMETER) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetNumParameters")
    FMOD_Event_GetNumParameters :: proc(event : ^FMOD_EVENT, numparameters : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetProperty")
    FMOD_Event_GetProperty :: proc(event : ^FMOD_EVENT, propertyname : cstring, value : rawptr, this_instance : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetPropertyByIndex")
    FMOD_Event_GetPropertyByIndex :: proc(event : ^FMOD_EVENT, propertyindex : _c.int, value : rawptr, this_instance : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_SetProperty")
    FMOD_Event_SetProperty :: proc(event : ^FMOD_EVENT, propertyname : cstring, value : rawptr, this_instance : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_SetPropertyByIndex")
    FMOD_Event_SetPropertyByIndex :: proc(event : ^FMOD_EVENT, propertyindex : _c.int, value : rawptr, this_instance : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetNumProperties")
    FMOD_Event_GetNumProperties :: proc(event : ^FMOD_EVENT, numproperties : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetPropertyInfo")
    FMOD_Event_GetPropertyInfo :: proc(event : ^FMOD_EVENT, propertyindex : ^_c.int, propertyname : ^cstring, type : ^FMOD_EVENTPROPERTY_TYPE) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetCategory")
    FMOD_Event_GetCategory :: proc(event : ^FMOD_EVENT, category : ^^FMOD_EVENTCATEGORY) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_SetVolume")
    FMOD_Event_SetVolume :: proc(event : ^FMOD_EVENT, volume : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetVolume")
    FMOD_Event_GetVolume :: proc(event : ^FMOD_EVENT, volume : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_SetPitch")
    FMOD_Event_SetPitch :: proc(event : ^FMOD_EVENT, pitch : _c.float, units : FMOD_EVENT_PITCHUNITS) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetPitch")
    FMOD_Event_GetPitch :: proc(event : ^FMOD_EVENT, pitch : ^_c.float, units : FMOD_EVENT_PITCHUNITS) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_SetPaused")
    FMOD_Event_SetPaused :: proc(event : ^FMOD_EVENT, paused : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetPaused")
    FMOD_Event_GetPaused :: proc(event : ^FMOD_EVENT, paused : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_SetMute")
    FMOD_Event_SetMute :: proc(event : ^FMOD_EVENT, mute : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetMute")
    FMOD_Event_GetMute :: proc(event : ^FMOD_EVENT, mute : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_Set3DAttributes")
    FMOD_Event_Set3DAttributes :: proc(event : ^FMOD_EVENT, position : ^FMOD_VECTOR, velocity : ^FMOD_VECTOR, orientation : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_Get3DAttributes")
    FMOD_Event_Get3DAttributes :: proc(event : ^FMOD_EVENT, position : ^FMOD_VECTOR, velocity : ^FMOD_VECTOR, orientation : ^FMOD_VECTOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_Set3DOcclusion")
    FMOD_Event_Set3DOcclusion :: proc(event : ^FMOD_EVENT, directocclusion : _c.float, reverbocclusion : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_Get3DOcclusion")
    FMOD_Event_Get3DOcclusion :: proc(event : ^FMOD_EVENT, directocclusion : ^_c.float, reverbocclusion : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_SetReverbProperties")
    FMOD_Event_SetReverbProperties :: proc(event : ^FMOD_EVENT, props : ^FMOD_REVERB_CHANNELPROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetReverbProperties")
    FMOD_Event_GetReverbProperties :: proc(event : ^FMOD_EVENT, props : ^FMOD_REVERB_CHANNELPROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_SetUserData")
    FMOD_Event_SetUserData :: proc(event : ^FMOD_EVENT, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetUserData")
    FMOD_Event_GetUserData :: proc(event : ^FMOD_EVENT, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_Event_GetMemoryInfo")
    FMOD_Event_GetMemoryInfo :: proc(event : ^FMOD_EVENT, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventParameter_GetInfo")
    FMOD_EventParameter_GetInfo :: proc(eventparameter : ^FMOD_EVENTPARAMETER, index : ^_c.int, name : ^cstring) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventParameter_GetRange")
    FMOD_EventParameter_GetRange :: proc(eventparameter : ^FMOD_EVENTPARAMETER, rangemin : ^_c.float, rangemax : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventParameter_SetValue")
    FMOD_EventParameter_SetValue :: proc(eventparameter : ^FMOD_EVENTPARAMETER, value : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventParameter_GetValue")
    FMOD_EventParameter_GetValue :: proc(eventparameter : ^FMOD_EVENTPARAMETER, value : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventParameter_SetVelocity")
    FMOD_EventParameter_SetVelocity :: proc(eventparameter : ^FMOD_EVENTPARAMETER, value : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventParameter_GetVelocity")
    FMOD_EventParameter_GetVelocity :: proc(eventparameter : ^FMOD_EVENTPARAMETER, value : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventParameter_SetSeekSpeed")
    FMOD_EventParameter_SetSeekSpeed :: proc(eventparameter : ^FMOD_EVENTPARAMETER, value : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventParameter_GetSeekSpeed")
    FMOD_EventParameter_GetSeekSpeed :: proc(eventparameter : ^FMOD_EVENTPARAMETER, value : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventParameter_SetUserData")
    FMOD_EventParameter_SetUserData :: proc(eventparameter : ^FMOD_EVENTPARAMETER, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventParameter_GetUserData")
    FMOD_EventParameter_GetUserData :: proc(eventparameter : ^FMOD_EVENTPARAMETER, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventParameter_KeyOff")
    FMOD_EventParameter_KeyOff :: proc(eventparameter : ^FMOD_EVENTPARAMETER) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventParameter_DisableAutomation")
    FMOD_EventParameter_DisableAutomation :: proc(eventparameter : ^FMOD_EVENTPARAMETER, disable : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventParameter_GetMemoryInfo")
    FMOD_EventParameter_GetMemoryInfo :: proc(eventparameter : ^FMOD_EVENTPARAMETER, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventReverb_Release")
    FMOD_EventReverb_Release :: proc(eventreverb : ^FMOD_EVENTREVERB) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventReverb_Set3DAttributes")
    FMOD_EventReverb_Set3DAttributes :: proc(eventreverb : ^FMOD_EVENTREVERB, position : ^FMOD_VECTOR, mindistance : _c.float, maxdistance : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventReverb_Get3DAttributes")
    FMOD_EventReverb_Get3DAttributes :: proc(eventreverb : ^FMOD_EVENTREVERB, position : ^FMOD_VECTOR, mindistance : ^_c.float, maxdistance : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventReverb_SetProperties")
    FMOD_EventReverb_SetProperties :: proc(eventreverb : ^FMOD_EVENTREVERB, props : ^FMOD_REVERB_PROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventReverb_GetProperties")
    FMOD_EventReverb_GetProperties :: proc(eventreverb : ^FMOD_EVENTREVERB, props : ^FMOD_REVERB_PROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventReverb_SetActive")
    FMOD_EventReverb_SetActive :: proc(eventreverb : ^FMOD_EVENTREVERB, active : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventReverb_GetActive")
    FMOD_EventReverb_GetActive :: proc(eventreverb : ^FMOD_EVENTREVERB, active : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventReverb_SetUserData")
    FMOD_EventReverb_SetUserData :: proc(eventreverb : ^FMOD_EVENTREVERB, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventReverb_GetUserData")
    FMOD_EventReverb_GetUserData :: proc(eventreverb : ^FMOD_EVENTREVERB, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventReverb_GetMemoryInfo")
    FMOD_EventReverb_GetMemoryInfo :: proc(eventreverb : ^FMOD_EVENTREVERB, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_Release")
    FMOD_EventQueue_Release :: proc(eventqueue : ^FMOD_EVENTQUEUE) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_Add")
    FMOD_EventQueue_Add :: proc(eventqueue : ^FMOD_EVENTQUEUE, entry : ^FMOD_EVENTQUEUEENTRY, allow_duplicates : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_Remove")
    FMOD_EventQueue_Remove :: proc(eventqueue : ^FMOD_EVENTQUEUE, entry : ^FMOD_EVENTQUEUEENTRY) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_RemoveHead")
    FMOD_EventQueue_RemoveHead :: proc(eventqueue : ^FMOD_EVENTQUEUE) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_Clear")
    FMOD_EventQueue_Clear :: proc(eventqueue : ^FMOD_EVENTQUEUE, stopallevents : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_FindFirstEntry")
    FMOD_EventQueue_FindFirstEntry :: proc(eventqueue : ^FMOD_EVENTQUEUE, entry : ^^FMOD_EVENTQUEUEENTRY) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_FindNextEntry")
    FMOD_EventQueue_FindNextEntry :: proc(eventqueue : ^FMOD_EVENTQUEUE, entry : ^^FMOD_EVENTQUEUEENTRY) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_SetPaused")
    FMOD_EventQueue_SetPaused :: proc(eventqueue : ^FMOD_EVENTQUEUE, paused : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_GetPaused")
    FMOD_EventQueue_GetPaused :: proc(eventqueue : ^FMOD_EVENTQUEUE, paused : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_IncludeDuckingCategory")
    FMOD_EventQueue_IncludeDuckingCategory :: proc(eventqueue : ^FMOD_EVENTQUEUE, category : ^FMOD_EVENTCATEGORY, ducked_volume : _c.float, unducked_volume : _c.float, duck_time : _c.uint, unduck_time : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_ExcludeDuckingCategory")
    FMOD_EventQueue_ExcludeDuckingCategory :: proc(eventqueue : ^FMOD_EVENTQUEUE, category : ^FMOD_EVENTCATEGORY) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_SetCallback")
    FMOD_EventQueue_SetCallback :: proc(eventqueue : ^FMOD_EVENTQUEUE, callback : FMOD_EVENTQUEUE_CALLBACK, callbackuserdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_SetUserData")
    FMOD_EventQueue_SetUserData :: proc(eventqueue : ^FMOD_EVENTQUEUE, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_GetUserData")
    FMOD_EventQueue_GetUserData :: proc(eventqueue : ^FMOD_EVENTQUEUE, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_Dump")
    FMOD_EventQueue_Dump :: proc(eventqueue : ^FMOD_EVENTQUEUE) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueue_GetMemoryInfo")
    FMOD_EventQueue_GetMemoryInfo :: proc(eventqueue : ^FMOD_EVENTQUEUE, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_Release")
    FMOD_EventQueueEntry_Release :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_GetInfoOnlyEvent")
    FMOD_EventQueueEntry_GetInfoOnlyEvent :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, infoonlyevent : ^^FMOD_EVENT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_GetRealEvent")
    FMOD_EventQueueEntry_GetRealEvent :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, realevent : ^^FMOD_EVENT) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_SetPriority")
    FMOD_EventQueueEntry_SetPriority :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, priority : _c.uchar) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_GetPriority")
    FMOD_EventQueueEntry_GetPriority :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, priority : ^_c.uchar) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_SetExpiryTime")
    FMOD_EventQueueEntry_SetExpiryTime :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, expirytime : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_GetExpiryTime")
    FMOD_EventQueueEntry_GetExpiryTime :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, expirytime : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_SetDelayTime")
    FMOD_EventQueueEntry_SetDelayTime :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, delay : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_GetDelayTime")
    FMOD_EventQueueEntry_GetDelayTime :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, delay : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_SetInterrupt")
    FMOD_EventQueueEntry_SetInterrupt :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, interrupt : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_GetInterrupt")
    FMOD_EventQueueEntry_GetInterrupt :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, interrupt : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_SetCrossfadeTime")
    FMOD_EventQueueEntry_SetCrossfadeTime :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, crossfade : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_GetCrossfadeTime")
    FMOD_EventQueueEntry_GetCrossfadeTime :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, crossfade : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_SetUserData")
    FMOD_EventQueueEntry_SetUserData :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_GetUserData")
    FMOD_EventQueueEntry_GetUserData :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, userdata : ^rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_EventQueueEntry_GetMemoryInfo")
    FMOD_EventQueueEntry_GetMemoryInfo :: proc(eventqueueentry : ^FMOD_EVENTQUEUEENTRY, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_Reset")
    FMOD_MusicSystem_Reset :: proc(musicsystem : ^FMOD_MUSICSYSTEM) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_SetVolume")
    FMOD_MusicSystem_SetVolume :: proc(musicsystem : ^FMOD_MUSICSYSTEM, volume : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_GetVolume")
    FMOD_MusicSystem_GetVolume :: proc(musicsystem : ^FMOD_MUSICSYSTEM, volume : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_SetReverbProperties")
    FMOD_MusicSystem_SetReverbProperties :: proc(musicsystem : ^FMOD_MUSICSYSTEM, props : ^FMOD_REVERB_CHANNELPROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_GetReverbProperties")
    FMOD_MusicSystem_GetReverbProperties :: proc(musicsystem : ^FMOD_MUSICSYSTEM, props : ^FMOD_REVERB_CHANNELPROPERTIES) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_SetPaused")
    FMOD_MusicSystem_SetPaused :: proc(musicsystem : ^FMOD_MUSICSYSTEM, paused : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_GetPaused")
    FMOD_MusicSystem_GetPaused :: proc(musicsystem : ^FMOD_MUSICSYSTEM, paused : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_SetMute")
    FMOD_MusicSystem_SetMute :: proc(musicsystem : ^FMOD_MUSICSYSTEM, mute : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_GetMute")
    FMOD_MusicSystem_GetMute :: proc(musicsystem : ^FMOD_MUSICSYSTEM, mute : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_GetInfo")
    FMOD_MusicSystem_GetInfo :: proc(musicsystem : ^FMOD_MUSICSYSTEM, info : ^FMOD_MUSIC_INFO) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_PromptCue")
    FMOD_MusicSystem_PromptCue :: proc(musicsystem : ^FMOD_MUSICSYSTEM, id : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_PrepareCue")
    FMOD_MusicSystem_PrepareCue :: proc(musicsystem : ^FMOD_MUSICSYSTEM, id : _c.uint, prompt : ^^FMOD_MUSICPROMPT) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_GetParameterValue")
    FMOD_MusicSystem_GetParameterValue :: proc(musicsystem : ^FMOD_MUSICSYSTEM, id : _c.uint, parameter : ^_c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_SetParameterValue")
    FMOD_MusicSystem_SetParameterValue :: proc(musicsystem : ^FMOD_MUSICSYSTEM, id : _c.uint, parameter : _c.float) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_GetCues")
    FMOD_MusicSystem_GetCues :: proc(musicsystem : ^FMOD_MUSICSYSTEM, it : ^FMOD_MUSIC_ITERATOR, filter : cstring) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_GetNextCue")
    FMOD_MusicSystem_GetNextCue :: proc(musicsystem : ^FMOD_MUSICSYSTEM, it : ^FMOD_MUSIC_ITERATOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_GetParameters")
    FMOD_MusicSystem_GetParameters :: proc(musicsystem : ^FMOD_MUSICSYSTEM, it : ^FMOD_MUSIC_ITERATOR, filter : cstring) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_GetNextParameter")
    FMOD_MusicSystem_GetNextParameter :: proc(musicsystem : ^FMOD_MUSICSYSTEM, it : ^FMOD_MUSIC_ITERATOR) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_LoadSoundData")
    FMOD_MusicSystem_LoadSoundData :: proc(musicsystem : ^FMOD_MUSICSYSTEM, resource : FMOD_EVENT_RESOURCE, mode : _c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_FreeSoundData")
    FMOD_MusicSystem_FreeSoundData :: proc(musicsystem : ^FMOD_MUSICSYSTEM, waituntilready : _c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_SetCallback")
    FMOD_MusicSystem_SetCallback :: proc(musicsystem : ^FMOD_MUSICSYSTEM, callback : FMOD_MUSIC_CALLBACK, userdata : rawptr) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicSystem_GetMemoryInfo")
    FMOD_MusicSystem_GetMemoryInfo :: proc(musicsystem : ^FMOD_MUSICSYSTEM, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicPrompt_Release")
    FMOD_MusicPrompt_Release :: proc(musicprompt : ^FMOD_MUSICPROMPT) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicPrompt_Begin")
    FMOD_MusicPrompt_Begin :: proc(musicprompt : ^FMOD_MUSICPROMPT) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicPrompt_End")
    FMOD_MusicPrompt_End :: proc(musicprompt : ^FMOD_MUSICPROMPT) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicPrompt_IsActive")
    FMOD_MusicPrompt_IsActive :: proc(musicprompt : ^FMOD_MUSICPROMPT, active : ^_c.int) -> FMOD_RESULT ---;

    @(link_name="FMOD_MusicPrompt_GetMemoryInfo")
    FMOD_MusicPrompt_GetMemoryInfo :: proc(musicprompt : ^FMOD_MUSICPROMPT, memorybits : _c.uint, event_memorybits : _c.uint, memoryused : ^_c.uint, memoryused_details : ^FMOD_MEMORY_USAGE_DETAILS) -> FMOD_RESULT ---;

    @(link_name="FMOD_NetEventSystem_Init")
    FMOD_NetEventSystem_Init :: proc(eventsystem : ^FMOD_EVENTSYSTEM, port : _c.ushort) -> FMOD_RESULT ---;

    @(link_name="FMOD_NetEventSystem_Update")
    FMOD_NetEventSystem_Update :: proc() -> FMOD_RESULT ---;

    @(link_name="FMOD_NetEventSystem_Shutdown")
    FMOD_NetEventSystem_Shutdown :: proc() -> FMOD_RESULT ---;

    @(link_name="FMOD_NetEventSystem_GetVersion")
    FMOD_NetEventSystem_GetVersion :: proc(version : ^_c.uint) -> FMOD_RESULT ---;

    @(link_name="FMOD_ErrorString")
    FMOD_ErrorString :: proc(errcode : FMOD_RESULT) -> cstring ---;

}
