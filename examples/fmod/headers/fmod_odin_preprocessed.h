





















































typedef int                       FMOD_BOOL;
typedef struct FMOD_SYSTEM        FMOD_SYSTEM;
typedef struct FMOD_SOUND         FMOD_SOUND;
typedef struct FMOD_CHANNEL       FMOD_CHANNEL;
typedef struct FMOD_CHANNELGROUP  FMOD_CHANNELGROUP;
typedef struct FMOD_SOUNDGROUP    FMOD_SOUNDGROUP;
typedef struct FMOD_REVERB        FMOD_REVERB;
typedef struct FMOD_DSP           FMOD_DSP;
typedef struct FMOD_DSPCONNECTION FMOD_DSPCONNECTION;
typedef struct FMOD_POLYGON		  FMOD_POLYGON;
typedef struct FMOD_GEOMETRY	  FMOD_GEOMETRY;
typedef struct FMOD_SYNCPOINT	  FMOD_SYNCPOINT;
typedef unsigned int              FMOD_MODE;
typedef unsigned int              FMOD_TIMEUNIT;
typedef unsigned int              FMOD_INITFLAGS;
typedef unsigned int              FMOD_CAPS;
typedef unsigned int              FMOD_DEBUGLEVEL;
typedef unsigned int              FMOD_MEMORY_TYPE;


typedef enum
{
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

    FMOD_RESULT_FORCEINT = 65536    
} FMOD_RESULT;



typedef struct
{
	float x;        
    float y;        
    float z;        
} FMOD_VECTOR;


typedef struct
{
    unsigned int   Data1;       
    unsigned short Data2;       
    unsigned short Data3;       
    unsigned char  Data4[8];    
} FMOD_GUID;


typedef struct
{
    void           *handle;         
    unsigned int    offset;         
    unsigned int    sizebytes;      
    int             priority;       

    void           *buffer;         
    unsigned int    bytesread;      
    FMOD_RESULT     result;         

    void           *userdata;       
} FMOD_ASYNCREADINFO;



typedef enum
{
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
    FMOD_OUTPUTTYPE_FORCEINT = 65536 
} FMOD_OUTPUTTYPE;




















































typedef enum
{
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
    FMOD_SPEAKERMODE_FORCEINT = 65536  
} FMOD_SPEAKERMODE;



typedef enum
{
    FMOD_SPEAKER_FRONT_LEFT,
    FMOD_SPEAKER_FRONT_RIGHT,
    FMOD_SPEAKER_FRONT_CENTER,
    FMOD_SPEAKER_LOW_FREQUENCY,
    FMOD_SPEAKER_BACK_LEFT,
    FMOD_SPEAKER_BACK_RIGHT,
    FMOD_SPEAKER_SIDE_LEFT,
    FMOD_SPEAKER_SIDE_RIGHT,

    FMOD_SPEAKER_MAX,                                       
    FMOD_SPEAKER_MONO        = FMOD_SPEAKER_FRONT_LEFT,     
    FMOD_SPEAKER_NULL        = 65535,                       
    FMOD_SPEAKER_SBL         = FMOD_SPEAKER_SIDE_LEFT,      
    FMOD_SPEAKER_SBR         = FMOD_SPEAKER_SIDE_RIGHT,     
    FMOD_SPEAKER_FORCEINT    = 65536                        
} FMOD_SPEAKER;



typedef enum
{
    FMOD_PLUGINTYPE_OUTPUT,          
    FMOD_PLUGINTYPE_CODEC,           
    FMOD_PLUGINTYPE_DSP,             

    FMOD_PLUGINTYPE_MAX,             
    FMOD_PLUGINTYPE_FORCEINT = 65536 
} FMOD_PLUGINTYPE;




























typedef enum
{
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
    FMOD_SOUND_TYPE_FORCEINT = 65536 
} FMOD_SOUND_TYPE;



typedef enum
{
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
    FMOD_SOUND_FORMAT_FORCEINT = 65536  
} FMOD_SOUND_FORMAT;








































typedef enum
{
    FMOD_OPENSTATE_READY = 0,       
    FMOD_OPENSTATE_LOADING,         
    FMOD_OPENSTATE_ERROR,           
    FMOD_OPENSTATE_CONNECTING,      
    FMOD_OPENSTATE_BUFFERING,       
    FMOD_OPENSTATE_SEEKING,         
    FMOD_OPENSTATE_PLAYING,         
    FMOD_OPENSTATE_SETPOSITION,     

    FMOD_OPENSTATE_MAX,             
    FMOD_OPENSTATE_FORCEINT = 65536 
} FMOD_OPENSTATE;



typedef enum
{
    FMOD_SOUNDGROUP_BEHAVIOR_FAIL,              
    FMOD_SOUNDGROUP_BEHAVIOR_MUTE,              
    FMOD_SOUNDGROUP_BEHAVIOR_STEALLOWEST,       

    FMOD_SOUNDGROUP_BEHAVIOR_MAX,               
    FMOD_SOUNDGROUP_BEHAVIOR_FORCEINT = 65536   
} FMOD_SOUNDGROUP_BEHAVIOR;



typedef enum
{
    FMOD_CHANNEL_CALLBACKTYPE_END,                  
    FMOD_CHANNEL_CALLBACKTYPE_VIRTUALVOICE,         
    FMOD_CHANNEL_CALLBACKTYPE_SYNCPOINT,            
    FMOD_CHANNEL_CALLBACKTYPE_OCCLUSION,            

    FMOD_CHANNEL_CALLBACKTYPE_MAX,                  
    FMOD_CHANNEL_CALLBACKTYPE_FORCEINT = 65536      
} FMOD_CHANNEL_CALLBACKTYPE;



typedef enum
{
    FMOD_SYSTEM_CALLBACKTYPE_DEVICELISTCHANGED,         
    FMOD_SYSTEM_CALLBACKTYPE_DEVICELOST,                
    FMOD_SYSTEM_CALLBACKTYPE_MEMORYALLOCATIONFAILED,    
    FMOD_SYSTEM_CALLBACKTYPE_THREADCREATED,             
    FMOD_SYSTEM_CALLBACKTYPE_BADDSPCONNECTION,          
    FMOD_SYSTEM_CALLBACKTYPE_BADDSPLEVEL,               
    FMOD_SYSTEM_CALLBACKTYPE_THREADDESTROYED,           

    FMOD_SYSTEM_CALLBACKTYPE_MAX,                       
    FMOD_SYSTEM_CALLBACKTYPE_FORCEINT = 65536           
} FMOD_SYSTEM_CALLBACKTYPE;



typedef FMOD_RESULT (*FMOD_SYSTEM_CALLBACK)       (FMOD_SYSTEM *system, FMOD_SYSTEM_CALLBACKTYPE type, void *commanddata1, void *commanddata2);

typedef FMOD_RESULT (*FMOD_CHANNEL_CALLBACK)      (FMOD_CHANNEL *channel, FMOD_CHANNEL_CALLBACKTYPE type, void *commanddata1, void *commanddata2);

typedef FMOD_RESULT (*FMOD_SOUND_NONBLOCKCALLBACK)(FMOD_SOUND *sound, FMOD_RESULT result);
typedef FMOD_RESULT (*FMOD_SOUND_PCMREADCALLBACK)(FMOD_SOUND *sound, void *data, unsigned int datalen);
typedef FMOD_RESULT (*FMOD_SOUND_PCMSETPOSCALLBACK)(FMOD_SOUND *sound, int subsound, unsigned int position, FMOD_TIMEUNIT postype);

typedef FMOD_RESULT (*FMOD_FILE_OPENCALLBACK)     (const char *name, int unicode, unsigned int *filesize, void **handle, void **userdata);
typedef FMOD_RESULT (*FMOD_FILE_CLOSECALLBACK)    (void *handle, void *userdata);
typedef FMOD_RESULT (*FMOD_FILE_READCALLBACK)     (void *handle, void *buffer, unsigned int sizebytes, unsigned int *bytesread, void *userdata);
typedef FMOD_RESULT (*FMOD_FILE_SEEKCALLBACK)     (void *handle, unsigned int pos, void *userdata);
typedef FMOD_RESULT (*FMOD_FILE_ASYNCREADCALLBACK)(FMOD_ASYNCREADINFO *info, void *userdata);
typedef FMOD_RESULT (*FMOD_FILE_ASYNCCANCELCALLBACK)(void *handle, void *userdata);

typedef void *      (*FMOD_MEMORY_ALLOCCALLBACK)  (unsigned int size, FMOD_MEMORY_TYPE type, const char *sourcestr);
typedef void *      (*FMOD_MEMORY_REALLOCCALLBACK)(void *ptr, unsigned int size, FMOD_MEMORY_TYPE type, const char *sourcestr);
typedef void        (*FMOD_MEMORY_FREECALLBACK)   (void *ptr, FMOD_MEMORY_TYPE type, const char *sourcestr);

typedef float       (*FMOD_3D_ROLLOFFCALLBACK)    (FMOD_CHANNEL *channel, float distance);



typedef enum
{
    FMOD_DSP_FFT_WINDOW_RECT,            
    FMOD_DSP_FFT_WINDOW_TRIANGLE,        
    FMOD_DSP_FFT_WINDOW_HAMMING,         
    FMOD_DSP_FFT_WINDOW_HANNING,         
    FMOD_DSP_FFT_WINDOW_BLACKMAN,        
    FMOD_DSP_FFT_WINDOW_BLACKMANHARRIS,  

    FMOD_DSP_FFT_WINDOW_MAX,             
    FMOD_DSP_FFT_WINDOW_FORCEINT = 65536 
} FMOD_DSP_FFT_WINDOW;



typedef enum
{
    FMOD_DSP_RESAMPLER_NOINTERP,        
    FMOD_DSP_RESAMPLER_LINEAR,          
    FMOD_DSP_RESAMPLER_CUBIC,           
    FMOD_DSP_RESAMPLER_SPLINE,          

    FMOD_DSP_RESAMPLER_MAX,             
    FMOD_DSP_RESAMPLER_FORCEINT = 65536 
} FMOD_DSP_RESAMPLER;



typedef enum
{
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
    FMOD_TAGTYPE_FORCEINT = 65536   
} FMOD_TAGTYPE;



typedef enum
{
    FMOD_TAGDATATYPE_BINARY = 0,
    FMOD_TAGDATATYPE_INT,
    FMOD_TAGDATATYPE_FLOAT,
    FMOD_TAGDATATYPE_STRING,
    FMOD_TAGDATATYPE_STRING_UTF16,
    FMOD_TAGDATATYPE_STRING_UTF16BE,
    FMOD_TAGDATATYPE_STRING_UTF8,
    FMOD_TAGDATATYPE_CDTOC,

    FMOD_TAGDATATYPE_MAX,               
    FMOD_TAGDATATYPE_FORCEINT = 65536   
} FMOD_TAGDATATYPE;



typedef enum
{
    FMOD_DELAYTYPE_END_MS,              
    FMOD_DELAYTYPE_DSPCLOCK_START,      
    FMOD_DELAYTYPE_DSPCLOCK_END,        
    FMOD_DELAYTYPE_DSPCLOCK_PAUSE,      

    FMOD_DELAYTYPE_MAX,                 
    FMOD_DELAYTYPE_FORCEINT = 65536     
} FMOD_DELAYTYPE;







typedef struct FMOD_TAG
{
    FMOD_TAGTYPE      type;         
    FMOD_TAGDATATYPE  datatype;     
    char             *name;         
    void             *data;         
    unsigned int      datalen;      
    FMOD_BOOL         updated;      
} FMOD_TAG;



typedef struct FMOD_CDTOC
{
    int numtracks;                  
    int min[100];                   
    int sec[100];                   
    int frame[100];                 
} FMOD_CDTOC;





















typedef enum
{
    FMOD_SPEAKERMAPTYPE_DEFAULT,     
    FMOD_SPEAKERMAPTYPE_ALLMONO,     
    FMOD_SPEAKERMAPTYPE_ALLSTEREO,   
    FMOD_SPEAKERMAPTYPE_51_PROTOOLS  
} FMOD_SPEAKERMAPTYPE;



typedef struct FMOD_CREATESOUNDEXINFO
{
    int                            cbsize;             
    unsigned int                   length;             
    unsigned int                   fileoffset;         
    int                            numchannels;        
    int                            defaultfrequency;   
    FMOD_SOUND_FORMAT              format;             
    unsigned int                   decodebuffersize;   
    int                            initialsubsound;    
    int                            numsubsounds;       
    int                           *inclusionlist;      
    int                            inclusionlistnum;   
    FMOD_SOUND_PCMREADCALLBACK     pcmreadcallback;    
    FMOD_SOUND_PCMSETPOSCALLBACK   pcmsetposcallback;  
    FMOD_SOUND_NONBLOCKCALLBACK    nonblockcallback;   
    const char                    *dlsname;            
    const char                    *encryptionkey;      
    int                            maxpolyphony;       
    void                          *userdata;           
    FMOD_SOUND_TYPE                suggestedsoundtype; 
    FMOD_FILE_OPENCALLBACK         useropen;           
    FMOD_FILE_CLOSECALLBACK        userclose;          
    FMOD_FILE_READCALLBACK         userread;           
    FMOD_FILE_SEEKCALLBACK         userseek;           
    FMOD_FILE_ASYNCREADCALLBACK    userasyncread;      
    FMOD_FILE_ASYNCCANCELCALLBACK  userasynccancel;    
    FMOD_SPEAKERMAPTYPE            speakermap;         
    FMOD_SOUNDGROUP               *initialsoundgroup;  
    unsigned int                   initialseekposition;
    FMOD_TIMEUNIT                  initialseekpostype; 
    int                            ignoresetfilesystem;
    int                            cddaforceaspi;      
    unsigned int                   audioqueuepolicy;   
    unsigned int                   minmidigranularity; 
    int                            nonblockthreadid;   
} FMOD_CREATESOUNDEXINFO;



typedef struct FMOD_REVERB_PROPERTIES
{                                   
    int          Instance;          
    int          Environment;       
    float        EnvDiffusion;      
    int          Room;              
    int          RoomHF;            
    int          RoomLF;            
    float        DecayTime;         
    float        DecayHFRatio;      
    float        DecayLFRatio;      
    int          Reflections;       
    float        ReflectionsDelay;  
    int          Reverb;            
    float        ReverbDelay;       
    float        ModulationTime;    
    float        ModulationDepth;   
    float        HFReference;       
    float        LFReference;       
    float        Diffusion;         
    float        Density;           
    unsigned int Flags;             
} FMOD_REVERB_PROPERTIES;



















































typedef struct FMOD_REVERB_CHANNELPROPERTIES
{                                      
    int          Direct;               
    int          Room;                 
    unsigned int Flags;                
    FMOD_DSP    *ConnectionPoint;      
} FMOD_REVERB_CHANNELPROPERTIES;













typedef struct FMOD_ADVANCEDSETTINGS
{
    int             cbsize;                     
    int             maxMPEGcodecs;              
    int             maxADPCMcodecs;             
    int             maxXMAcodecs;               
    int             maxCELTcodecs;              
    int             maxVORBIScodecs;            
    int             maxAT9Codecs;               
    int             maxPCMcodecs;               
    int             ASIONumChannels;            
    char          **ASIOChannelList;            
    FMOD_SPEAKER   *ASIOSpeakerList;            
    int             max3DReverbDSPs;            
    float           HRTFMinAngle;               
    float           HRTFMaxAngle;               
    float           HRTFFreq;                   
    float           vol0virtualvol;             
    int             eventqueuesize;             
    unsigned int    defaultDecodeBufferSize;    
    char           *debugLogFilename;           
    unsigned short  profileport;                
    unsigned int    geometryMaxFadeTime;        
    unsigned int    maxSpectrumWaveDataBuffers; 
    unsigned int    musicSystemCacheDelay;      
    float           distanceFilterCenterFreq;   
    unsigned int    stackSizeStream;            
    unsigned int    stackSizeNonBlocking;       
    unsigned int    stackSizeMixer;             
} FMOD_ADVANCEDSETTINGS;



typedef enum
{
    FMOD_CHANNEL_FREE  = -1,      
    FMOD_CHANNEL_REUSE = -2       
} FMOD_CHANNELINDEX;













typedef struct FMOD_CODEC_STATE FMOD_CODEC_STATE;
typedef struct FMOD_CODEC_WAVEFORMAT FMOD_CODEC_WAVEFORMAT;


typedef FMOD_RESULT (*FMOD_CODEC_OPENCALLBACK)        (FMOD_CODEC_STATE *codec_state, FMOD_MODE usermode, FMOD_CREATESOUNDEXINFO *userexinfo);
typedef FMOD_RESULT (*FMOD_CODEC_CLOSECALLBACK)       (FMOD_CODEC_STATE *codec_state);
typedef FMOD_RESULT (*FMOD_CODEC_READCALLBACK)        (FMOD_CODEC_STATE *codec_state, void *buffer, unsigned int sizebytes, unsigned int *bytesread);
typedef FMOD_RESULT (*FMOD_CODEC_GETLENGTHCALLBACK)   (FMOD_CODEC_STATE *codec_state, unsigned int *length, FMOD_TIMEUNIT lengthtype);
typedef FMOD_RESULT (*FMOD_CODEC_SETPOSITIONCALLBACK) (FMOD_CODEC_STATE *codec_state, int subsound, unsigned int position, FMOD_TIMEUNIT postype);
typedef FMOD_RESULT (*FMOD_CODEC_GETPOSITIONCALLBACK) (FMOD_CODEC_STATE *codec_state, unsigned int *position, FMOD_TIMEUNIT postype);
typedef FMOD_RESULT (*FMOD_CODEC_SOUNDCREATECALLBACK) (FMOD_CODEC_STATE *codec_state, int subsound, FMOD_SOUND *sound);
typedef FMOD_RESULT (*FMOD_CODEC_METADATACALLBACK)    (FMOD_CODEC_STATE *codec_state, FMOD_TAGTYPE tagtype, char *name, void *data, unsigned int datalen, FMOD_TAGDATATYPE datatype, int unique);
typedef FMOD_RESULT (*FMOD_CODEC_GETWAVEFORMAT)       (FMOD_CODEC_STATE *codec_state, int index, FMOD_CODEC_WAVEFORMAT *waveformat);



typedef struct FMOD_CODEC_DESCRIPTION
{
    const char                     *name;            
    unsigned int                    version;         
    int                             defaultasstream; 
    FMOD_TIMEUNIT                   timeunits;       
    FMOD_CODEC_OPENCALLBACK         open;            
    FMOD_CODEC_CLOSECALLBACK        close;           
    FMOD_CODEC_READCALLBACK         read;            
    FMOD_CODEC_GETLENGTHCALLBACK    getlength;       
    FMOD_CODEC_SETPOSITIONCALLBACK  setposition;     
    FMOD_CODEC_GETPOSITIONCALLBACK  getposition;     
    FMOD_CODEC_SOUNDCREATECALLBACK  soundcreate;     
    FMOD_CODEC_GETWAVEFORMAT        getwaveformat;   
} FMOD_CODEC_DESCRIPTION;



struct FMOD_CODEC_WAVEFORMAT
{
    char               name[256];     
    FMOD_SOUND_FORMAT  format;        
    int                channels;      
    int                frequency;     
    unsigned int       lengthbytes;   
    unsigned int       lengthpcm;     
    int                blockalign;    
    int                loopstart;     
    int                loopend;       
    FMOD_MODE          mode;          
    unsigned int       channelmask;   
};



struct FMOD_CODEC_STATE
{
    int                         numsubsounds;  
    FMOD_CODEC_WAVEFORMAT      *waveformat;    
    void                       *plugindata;    

    void                       *filehandle;    
    unsigned int                filesize;      
    FMOD_FILE_READCALLBACK      fileread;      
    FMOD_FILE_SEEKCALLBACK      fileseek;      
    FMOD_CODEC_METADATACALLBACK metadata;      
};




















typedef struct FMOD_DSP_STATE FMOD_DSP_STATE;


typedef FMOD_RESULT (*FMOD_DSP_CREATECALLBACK)     (FMOD_DSP_STATE *dsp_state);
typedef FMOD_RESULT (*FMOD_DSP_RELEASECALLBACK)    (FMOD_DSP_STATE *dsp_state);
typedef FMOD_RESULT (*FMOD_DSP_RESETCALLBACK)      (FMOD_DSP_STATE *dsp_state);
typedef FMOD_RESULT (*FMOD_DSP_READCALLBACK)       (FMOD_DSP_STATE *dsp_state, float *inbuffer, float *outbuffer, unsigned int length, int inchannels, int outchannels);
typedef FMOD_RESULT (*FMOD_DSP_SETPOSITIONCALLBACK)(FMOD_DSP_STATE *dsp_state, unsigned int pos);
typedef FMOD_RESULT (*FMOD_DSP_SETPARAMCALLBACK)   (FMOD_DSP_STATE *dsp_state, int index, float value);
typedef FMOD_RESULT (*FMOD_DSP_GETPARAMCALLBACK)   (FMOD_DSP_STATE *dsp_state, int index, float *value, char *valuestr);
typedef FMOD_RESULT (*FMOD_DSP_DIALOGCALLBACK)     (FMOD_DSP_STATE *dsp_state, void *hwnd, int show);


typedef enum
{
    FMOD_DSP_TYPE_UNKNOWN,            
    FMOD_DSP_TYPE_MIXER,              
    FMOD_DSP_TYPE_OSCILLATOR,         
    FMOD_DSP_TYPE_LOWPASS,            
    FMOD_DSP_TYPE_ITLOWPASS,          
    FMOD_DSP_TYPE_HIGHPASS,           
    FMOD_DSP_TYPE_ECHO,               
    FMOD_DSP_TYPE_FLANGE,             
    FMOD_DSP_TYPE_DISTORTION,         
    FMOD_DSP_TYPE_NORMALIZE,          
    FMOD_DSP_TYPE_PARAMEQ,            
    FMOD_DSP_TYPE_PITCHSHIFT,         
    FMOD_DSP_TYPE_CHORUS,             
    FMOD_DSP_TYPE_VSTPLUGIN,          
    FMOD_DSP_TYPE_WINAMPPLUGIN,       
    FMOD_DSP_TYPE_ITECHO,             
    FMOD_DSP_TYPE_COMPRESSOR,         
    FMOD_DSP_TYPE_SFXREVERB,          
    FMOD_DSP_TYPE_LOWPASS_SIMPLE,     
    FMOD_DSP_TYPE_DELAY,              
    FMOD_DSP_TYPE_TREMOLO,            
    FMOD_DSP_TYPE_LADSPAPLUGIN,       
    FMOD_DSP_TYPE_HIGHPASS_SIMPLE,    
    FMOD_DSP_TYPE_HARDWARE = 1000,    
    FMOD_DSP_TYPE_FORCEINT = 65536    
} FMOD_DSP_TYPE;



typedef struct FMOD_DSP_PARAMETERDESC
{
    float       min;                                
    float       max;                                
    float       defaultval;                         
    char        name[16];                           
    char        label[16];                          
    const char *description;                        
} FMOD_DSP_PARAMETERDESC;



typedef struct FMOD_DSP_DESCRIPTION
{
    char                         name[32];           
    unsigned int                 version;            
    int                          channels;           
    FMOD_DSP_CREATECALLBACK      create;             
    FMOD_DSP_RELEASECALLBACK     release;            
    FMOD_DSP_RESETCALLBACK       reset;              
    FMOD_DSP_READCALLBACK        read;               
    FMOD_DSP_SETPOSITIONCALLBACK setposition;        

    int                          numparameters;      
    FMOD_DSP_PARAMETERDESC      *paramdesc;          
    FMOD_DSP_SETPARAMCALLBACK    setparameter;       
    FMOD_DSP_GETPARAMCALLBACK    getparameter;       
    FMOD_DSP_DIALOGCALLBACK      config;             
    int                          configwidth;        
    int                          configheight;       
    void                        *userdata;           
} FMOD_DSP_DESCRIPTION;



struct FMOD_DSP_STATE
{
    FMOD_DSP      *instance;      
    void          *plugindata;    
	unsigned short speakermask;	  
};





typedef enum
{
    FMOD_DSP_OSCILLATOR_TYPE,   
    FMOD_DSP_OSCILLATOR_RATE    
} FMOD_DSP_OSCILLATOR;



typedef enum
{
    FMOD_DSP_LOWPASS_CUTOFF,    
    FMOD_DSP_LOWPASS_RESONANCE  
} FMOD_DSP_LOWPASS;



typedef enum
{
    FMOD_DSP_ITLOWPASS_CUTOFF,    
    FMOD_DSP_ITLOWPASS_RESONANCE  
} FMOD_DSP_ITLOWPASS;



typedef enum
{
    FMOD_DSP_HIGHPASS_CUTOFF,    
    FMOD_DSP_HIGHPASS_RESONANCE  
} FMOD_DSP_HIGHPASS;



typedef enum
{
    FMOD_DSP_ECHO_DELAY,       
    FMOD_DSP_ECHO_DECAYRATIO,  
    FMOD_DSP_ECHO_MAXCHANNELS, 
    FMOD_DSP_ECHO_DRYMIX,      
    FMOD_DSP_ECHO_WETMIX       
} FMOD_DSP_ECHO;



typedef enum
{
    FMOD_DSP_DELAY_CH0,      
    FMOD_DSP_DELAY_CH1,      
    FMOD_DSP_DELAY_CH2,      
    FMOD_DSP_DELAY_CH3,      
    FMOD_DSP_DELAY_CH4,      
    FMOD_DSP_DELAY_CH5,      
    FMOD_DSP_DELAY_CH6,      
    FMOD_DSP_DELAY_CH7,      
    FMOD_DSP_DELAY_CH8,      
    FMOD_DSP_DELAY_CH9,      
    FMOD_DSP_DELAY_CH10,     
    FMOD_DSP_DELAY_CH11,     
    FMOD_DSP_DELAY_CH12,     
    FMOD_DSP_DELAY_CH13,     
    FMOD_DSP_DELAY_CH14,     
    FMOD_DSP_DELAY_CH15,     
    FMOD_DSP_DELAY_MAXDELAY  
} FMOD_DSP_DELAY;



typedef enum
{
    FMOD_DSP_FLANGE_DRYMIX,      
    FMOD_DSP_FLANGE_WETMIX,      
    FMOD_DSP_FLANGE_DEPTH,       
    FMOD_DSP_FLANGE_RATE         
} FMOD_DSP_FLANGE;



typedef enum
{
    FMOD_DSP_TREMOLO_FREQUENCY,     
    FMOD_DSP_TREMOLO_DEPTH,         
    FMOD_DSP_TREMOLO_SHAPE,         
    FMOD_DSP_TREMOLO_SKEW,          
    FMOD_DSP_TREMOLO_DUTY,          
    FMOD_DSP_TREMOLO_SQUARE,        
    FMOD_DSP_TREMOLO_PHASE,         
    FMOD_DSP_TREMOLO_SPREAD         
} FMOD_DSP_TREMOLO;



typedef enum
{
    FMOD_DSP_DISTORTION_LEVEL    
} FMOD_DSP_DISTORTION;



typedef enum
{
    FMOD_DSP_NORMALIZE_FADETIME,    
    FMOD_DSP_NORMALIZE_THRESHHOLD,  
    FMOD_DSP_NORMALIZE_MAXAMP       
} FMOD_DSP_NORMALIZE;



typedef enum
{
    FMOD_DSP_PARAMEQ_CENTER,     
    FMOD_DSP_PARAMEQ_BANDWIDTH,  
    FMOD_DSP_PARAMEQ_GAIN        
} FMOD_DSP_PARAMEQ;




typedef enum
{
    FMOD_DSP_PITCHSHIFT_PITCH,       
    FMOD_DSP_PITCHSHIFT_FFTSIZE,     
    FMOD_DSP_PITCHSHIFT_OVERLAP,     
    FMOD_DSP_PITCHSHIFT_MAXCHANNELS  
} FMOD_DSP_PITCHSHIFT;




typedef enum
{
    FMOD_DSP_CHORUS_DRYMIX,   
    FMOD_DSP_CHORUS_WETMIX1,  
    FMOD_DSP_CHORUS_WETMIX2,  
    FMOD_DSP_CHORUS_WETMIX3,  
    FMOD_DSP_CHORUS_DELAY,    
    FMOD_DSP_CHORUS_RATE,     
    FMOD_DSP_CHORUS_DEPTH     
} FMOD_DSP_CHORUS;



typedef enum
{
    FMOD_DSP_ITECHO_WETDRYMIX,      
    FMOD_DSP_ITECHO_FEEDBACK,       
    FMOD_DSP_ITECHO_LEFTDELAY,      
    FMOD_DSP_ITECHO_RIGHTDELAY,     
    FMOD_DSP_ITECHO_PANDELAY        
} FMOD_DSP_ITECHO;


typedef enum
{
    FMOD_DSP_COMPRESSOR_THRESHOLD,  
    FMOD_DSP_COMPRESSOR_ATTACK,     
    FMOD_DSP_COMPRESSOR_RELEASE,    
    FMOD_DSP_COMPRESSOR_GAINMAKEUP  
} FMOD_DSP_COMPRESSOR;


typedef enum
{
    FMOD_DSP_SFXREVERB_DRYLEVEL,            
    FMOD_DSP_SFXREVERB_ROOM,                
    FMOD_DSP_SFXREVERB_ROOMHF,              
    FMOD_DSP_SFXREVERB_DECAYTIME,           
    FMOD_DSP_SFXREVERB_DECAYHFRATIO,        
    FMOD_DSP_SFXREVERB_REFLECTIONSLEVEL,    
    FMOD_DSP_SFXREVERB_REFLECTIONSDELAY,    
    FMOD_DSP_SFXREVERB_REVERBLEVEL,         
    FMOD_DSP_SFXREVERB_REVERBDELAY,         
    FMOD_DSP_SFXREVERB_DIFFUSION,           
    FMOD_DSP_SFXREVERB_DENSITY,             
    FMOD_DSP_SFXREVERB_HFREFERENCE,         
    FMOD_DSP_SFXREVERB_ROOMLF,              
    FMOD_DSP_SFXREVERB_LFREFERENCE          
} FMOD_DSP_SFXREVERB;


typedef enum
{
    FMOD_DSP_LOWPASS_SIMPLE_CUTOFF     
} FMOD_DSP_LOWPASS_SIMPLE;


typedef enum
{
    FMOD_DSP_HIGHPASS_SIMPLE_CUTOFF     
} FMOD_DSP_HIGHPASS_SIMPLE;
















typedef struct FMOD_MEMORY_USAGE_DETAILS
{
    unsigned int other;                          
    unsigned int string;                         
    unsigned int system;                         
    unsigned int plugins;                        
    unsigned int output;                         
    unsigned int channel;                        
    unsigned int channelgroup;                   
    unsigned int codec;                          
    unsigned int file;                           
    unsigned int sound;                          
    unsigned int secondaryram;                   
    unsigned int soundgroup;                     
    unsigned int streambuffer;                   
    unsigned int dspconnection;                  
    unsigned int dsp;                            
    unsigned int dspcodec;                       
    unsigned int profile;                        
    unsigned int recordbuffer;                   
    unsigned int reverb;                         
    unsigned int reverbchannelprops;             
    unsigned int geometry;                       
    unsigned int syncpoint;                      
    unsigned int eventsystem;                    
    unsigned int musicsystem;                    
    unsigned int fev;                            
    unsigned int memoryfsb;                      
    unsigned int eventproject;                   
    unsigned int eventgroupi;                    
    unsigned int soundbankclass;                 
    unsigned int soundbanklist;                  
    unsigned int streaminstance;                 
    unsigned int sounddefclass;                  
    unsigned int sounddefdefclass;               
    unsigned int sounddefpool;                   
    unsigned int reverbdef;                      
    unsigned int eventreverb;                    
    unsigned int userproperty;                   
    unsigned int eventinstance;                  
    unsigned int eventinstance_complex;          
    unsigned int eventinstance_simple;           
    unsigned int eventinstance_layer;            
    unsigned int eventinstance_sound;            
    unsigned int eventenvelope;                  
    unsigned int eventenvelopedef;               
    unsigned int eventparameter;                 
    unsigned int eventcategory;                  
    unsigned int eventenvelopepoint;             
    unsigned int eventinstancepool;              
} FMOD_MEMORY_USAGE_DETAILS;






























                                               














































FMOD_RESULT FMOD_Memory_Initialize           (void *poolmem, int poollen, FMOD_MEMORY_ALLOCCALLBACK useralloc, FMOD_MEMORY_REALLOCCALLBACK userrealloc, FMOD_MEMORY_FREECALLBACK userfree, FMOD_MEMORY_TYPE memtypeflags);
FMOD_RESULT FMOD_Memory_GetStats             (int *currentalloced, int *maxalloced, FMOD_BOOL blocking);
FMOD_RESULT FMOD_Debug_SetLevel              (FMOD_DEBUGLEVEL level);
FMOD_RESULT FMOD_Debug_GetLevel              (FMOD_DEBUGLEVEL *level);
FMOD_RESULT FMOD_File_SetDiskBusy            (int busy);
FMOD_RESULT FMOD_File_GetDiskBusy            (int *busy);



FMOD_RESULT FMOD_System_Create               (FMOD_SYSTEM **system);
FMOD_RESULT FMOD_System_Release              (FMOD_SYSTEM *system);






FMOD_RESULT FMOD_System_SetOutput              (FMOD_SYSTEM *system, FMOD_OUTPUTTYPE output);
FMOD_RESULT FMOD_System_GetOutput              (FMOD_SYSTEM *system, FMOD_OUTPUTTYPE *output);
FMOD_RESULT FMOD_System_GetNumDrivers          (FMOD_SYSTEM *system, int *numdrivers);
FMOD_RESULT FMOD_System_GetDriverInfo          (FMOD_SYSTEM *system, int id, char *name, int namelen, FMOD_GUID *guid);
FMOD_RESULT FMOD_System_GetDriverInfoW         (FMOD_SYSTEM *system, int id, short *name, int namelen, FMOD_GUID *guid);
FMOD_RESULT FMOD_System_GetDriverCaps          (FMOD_SYSTEM *system, int id, FMOD_CAPS *caps, int *controlpaneloutputrate, FMOD_SPEAKERMODE *controlpanelspeakermode);
FMOD_RESULT FMOD_System_SetDriver              (FMOD_SYSTEM *system, int driver);
FMOD_RESULT FMOD_System_GetDriver              (FMOD_SYSTEM *system, int *driver);
FMOD_RESULT FMOD_System_SetHardwareChannels    (FMOD_SYSTEM *system, int numhardwarechannels);
FMOD_RESULT FMOD_System_SetSoftwareChannels    (FMOD_SYSTEM *system, int numsoftwarechannels);
FMOD_RESULT FMOD_System_GetSoftwareChannels    (FMOD_SYSTEM *system, int *numsoftwarechannels);
FMOD_RESULT FMOD_System_SetSoftwareFormat      (FMOD_SYSTEM *system, int samplerate, FMOD_SOUND_FORMAT format, int numoutputchannels, int maxinputchannels, FMOD_DSP_RESAMPLER resamplemethod);
FMOD_RESULT FMOD_System_GetSoftwareFormat      (FMOD_SYSTEM *system, int *samplerate, FMOD_SOUND_FORMAT *format, int *numoutputchannels, int *maxinputchannels, FMOD_DSP_RESAMPLER *resamplemethod, int *bits);
FMOD_RESULT FMOD_System_SetDSPBufferSize       (FMOD_SYSTEM *system, unsigned int bufferlength, int numbuffers);
FMOD_RESULT FMOD_System_GetDSPBufferSize       (FMOD_SYSTEM *system, unsigned int *bufferlength, int *numbuffers);
FMOD_RESULT FMOD_System_SetFileSystem          (FMOD_SYSTEM *system, FMOD_FILE_OPENCALLBACK useropen, FMOD_FILE_CLOSECALLBACK userclose, FMOD_FILE_READCALLBACK userread, FMOD_FILE_SEEKCALLBACK userseek, FMOD_FILE_ASYNCREADCALLBACK userasyncread, FMOD_FILE_ASYNCCANCELCALLBACK userasynccancel, int blockalign);
FMOD_RESULT FMOD_System_AttachFileSystem       (FMOD_SYSTEM *system, FMOD_FILE_OPENCALLBACK useropen, FMOD_FILE_CLOSECALLBACK userclose, FMOD_FILE_READCALLBACK userread, FMOD_FILE_SEEKCALLBACK userseek);
FMOD_RESULT FMOD_System_SetAdvancedSettings    (FMOD_SYSTEM *system, FMOD_ADVANCEDSETTINGS *settings);
FMOD_RESULT FMOD_System_GetAdvancedSettings    (FMOD_SYSTEM *system, FMOD_ADVANCEDSETTINGS *settings);
FMOD_RESULT FMOD_System_SetSpeakerMode         (FMOD_SYSTEM *system, FMOD_SPEAKERMODE speakermode);
FMOD_RESULT FMOD_System_GetSpeakerMode         (FMOD_SYSTEM *system, FMOD_SPEAKERMODE *speakermode);
FMOD_RESULT FMOD_System_SetCallback            (FMOD_SYSTEM *system, FMOD_SYSTEM_CALLBACK callback);



FMOD_RESULT FMOD_System_SetPluginPath          (FMOD_SYSTEM *system, const char *path);
FMOD_RESULT FMOD_System_LoadPlugin             (FMOD_SYSTEM *system, const char *filename, unsigned int *handle, unsigned int priority);
FMOD_RESULT FMOD_System_UnloadPlugin           (FMOD_SYSTEM *system, unsigned int handle);
FMOD_RESULT FMOD_System_GetNumPlugins          (FMOD_SYSTEM *system, FMOD_PLUGINTYPE plugintype, int *numplugins);
FMOD_RESULT FMOD_System_GetPluginHandle        (FMOD_SYSTEM *system, FMOD_PLUGINTYPE plugintype, int index, unsigned int *handle);
FMOD_RESULT FMOD_System_GetPluginInfo          (FMOD_SYSTEM *system, unsigned int handle, FMOD_PLUGINTYPE *plugintype, char *name, int namelen, unsigned int *version);
FMOD_RESULT FMOD_System_SetOutputByPlugin      (FMOD_SYSTEM *system, unsigned int handle);
FMOD_RESULT FMOD_System_GetOutputByPlugin      (FMOD_SYSTEM *system, unsigned int *handle);
FMOD_RESULT FMOD_System_CreateDSPByPlugin      (FMOD_SYSTEM *system, unsigned int handle, FMOD_DSP **dsp);
FMOD_RESULT FMOD_System_RegisterCodec          (FMOD_SYSTEM *system, FMOD_CODEC_DESCRIPTION *description, unsigned int *handle, unsigned int priority);
FMOD_RESULT FMOD_System_RegisterDSP            (FMOD_SYSTEM *system, FMOD_DSP_DESCRIPTION *description, unsigned int *handle);



FMOD_RESULT FMOD_System_Init                   (FMOD_SYSTEM *system, int maxchannels, FMOD_INITFLAGS flags, void *extradriverdata);
FMOD_RESULT FMOD_System_Close                  (FMOD_SYSTEM *system);



FMOD_RESULT FMOD_System_Update                 (FMOD_SYSTEM *system);

FMOD_RESULT FMOD_System_Set3DSettings          (FMOD_SYSTEM *system, float dopplerscale, float distancefactor, float rolloffscale);
FMOD_RESULT FMOD_System_Get3DSettings          (FMOD_SYSTEM *system, float *dopplerscale, float *distancefactor, float *rolloffscale);
FMOD_RESULT FMOD_System_Set3DNumListeners      (FMOD_SYSTEM *system, int numlisteners);
FMOD_RESULT FMOD_System_Get3DNumListeners      (FMOD_SYSTEM *system, int *numlisteners);
FMOD_RESULT FMOD_System_Set3DListenerAttributes(FMOD_SYSTEM *system, int listener, const FMOD_VECTOR *pos, const FMOD_VECTOR *vel, const FMOD_VECTOR *forward, const FMOD_VECTOR *up);
FMOD_RESULT FMOD_System_Get3DListenerAttributes(FMOD_SYSTEM *system, int listener, FMOD_VECTOR *pos, FMOD_VECTOR *vel, FMOD_VECTOR *forward, FMOD_VECTOR *up);
FMOD_RESULT FMOD_System_Set3DRolloffCallback   (FMOD_SYSTEM *system, FMOD_3D_ROLLOFFCALLBACK callback);
FMOD_RESULT FMOD_System_Set3DSpeakerPosition   (FMOD_SYSTEM *system, FMOD_SPEAKER speaker, float x, float y, FMOD_BOOL active);
FMOD_RESULT FMOD_System_Get3DSpeakerPosition   (FMOD_SYSTEM *system, FMOD_SPEAKER speaker, float *x, float *y, FMOD_BOOL *active);

FMOD_RESULT FMOD_System_SetStreamBufferSize    (FMOD_SYSTEM *system, unsigned int filebuffersize, FMOD_TIMEUNIT filebuffersizetype);
FMOD_RESULT FMOD_System_GetStreamBufferSize    (FMOD_SYSTEM *system, unsigned int *filebuffersize, FMOD_TIMEUNIT *filebuffersizetype);



FMOD_RESULT FMOD_System_GetVersion             (FMOD_SYSTEM *system, unsigned int *version);
FMOD_RESULT FMOD_System_GetOutputHandle        (FMOD_SYSTEM *system, void **handle);
FMOD_RESULT FMOD_System_GetChannelsPlaying     (FMOD_SYSTEM *system, int *channels);
FMOD_RESULT FMOD_System_GetHardwareChannels    (FMOD_SYSTEM *system, int *numhardwarechannels);
FMOD_RESULT FMOD_System_GetCPUUsage            (FMOD_SYSTEM *system, float *dsp, float *stream, float *geometry, float *update, float *total);
FMOD_RESULT FMOD_System_GetSoundRAM            (FMOD_SYSTEM *system, int *currentalloced, int *maxalloced, int *total);
FMOD_RESULT FMOD_System_GetNumCDROMDrives      (FMOD_SYSTEM *system, int *numdrives);
FMOD_RESULT FMOD_System_GetCDROMDriveName      (FMOD_SYSTEM *system, int drive, char *drivename, int drivenamelen, char *scsiname, int scsinamelen, char *devicename, int devicenamelen);
FMOD_RESULT FMOD_System_GetSpectrum            (FMOD_SYSTEM *system, float *spectrumarray, int numvalues, int channeloffset, FMOD_DSP_FFT_WINDOW windowtype);
FMOD_RESULT FMOD_System_GetWaveData            (FMOD_SYSTEM *system, float *wavearray, int numvalues, int channeloffset);



FMOD_RESULT FMOD_System_CreateSound            (FMOD_SYSTEM *system, const char *name_or_data, FMOD_MODE mode, FMOD_CREATESOUNDEXINFO *exinfo, FMOD_SOUND **sound);
FMOD_RESULT FMOD_System_CreateStream           (FMOD_SYSTEM *system, const char *name_or_data, FMOD_MODE mode, FMOD_CREATESOUNDEXINFO *exinfo, FMOD_SOUND **sound);
FMOD_RESULT FMOD_System_CreateDSP              (FMOD_SYSTEM *system, FMOD_DSP_DESCRIPTION *description, FMOD_DSP **dsp);
FMOD_RESULT FMOD_System_CreateDSPByType        (FMOD_SYSTEM *system, FMOD_DSP_TYPE type, FMOD_DSP **dsp);
FMOD_RESULT FMOD_System_CreateChannelGroup     (FMOD_SYSTEM *system, const char *name, FMOD_CHANNELGROUP **channelgroup);
FMOD_RESULT FMOD_System_CreateSoundGroup       (FMOD_SYSTEM *system, const char *name, FMOD_SOUNDGROUP **soundgroup);
FMOD_RESULT FMOD_System_CreateReverb           (FMOD_SYSTEM *system, FMOD_REVERB **reverb);

FMOD_RESULT FMOD_System_PlaySound              (FMOD_SYSTEM *system, FMOD_CHANNELINDEX channelid, FMOD_SOUND *sound, FMOD_BOOL paused, FMOD_CHANNEL **channel);
FMOD_RESULT FMOD_System_PlayDSP                (FMOD_SYSTEM *system, FMOD_CHANNELINDEX channelid, FMOD_DSP *dsp, FMOD_BOOL paused, FMOD_CHANNEL **channel);
FMOD_RESULT FMOD_System_GetChannel             (FMOD_SYSTEM *system, int channelid, FMOD_CHANNEL **channel);
FMOD_RESULT FMOD_System_GetMasterChannelGroup  (FMOD_SYSTEM *system, FMOD_CHANNELGROUP **channelgroup);
FMOD_RESULT FMOD_System_GetMasterSoundGroup    (FMOD_SYSTEM *system, FMOD_SOUNDGROUP **soundgroup);



FMOD_RESULT FMOD_System_SetReverbProperties    (FMOD_SYSTEM *system, const FMOD_REVERB_PROPERTIES *prop);
FMOD_RESULT FMOD_System_GetReverbProperties    (FMOD_SYSTEM *system, FMOD_REVERB_PROPERTIES *prop);
FMOD_RESULT FMOD_System_SetReverbAmbientProperties(FMOD_SYSTEM *system, FMOD_REVERB_PROPERTIES *prop);
FMOD_RESULT FMOD_System_GetReverbAmbientProperties(FMOD_SYSTEM *system, FMOD_REVERB_PROPERTIES *prop);



FMOD_RESULT FMOD_System_GetDSPHead             (FMOD_SYSTEM *system, FMOD_DSP **dsp);
FMOD_RESULT FMOD_System_AddDSP                 (FMOD_SYSTEM *system, FMOD_DSP *dsp, FMOD_DSPCONNECTION **connection);
FMOD_RESULT FMOD_System_LockDSP                (FMOD_SYSTEM *system);
FMOD_RESULT FMOD_System_UnlockDSP              (FMOD_SYSTEM *system);
FMOD_RESULT FMOD_System_GetDSPClock            (FMOD_SYSTEM *system, unsigned int *hi, unsigned int *lo);



FMOD_RESULT FMOD_System_GetRecordNumDrivers    (FMOD_SYSTEM *system, int *numdrivers);
FMOD_RESULT FMOD_System_GetRecordDriverInfo    (FMOD_SYSTEM *system, int id, char *name, int namelen, FMOD_GUID *guid);
FMOD_RESULT FMOD_System_GetRecordDriverInfoW   (FMOD_SYSTEM *system, int id, short *name, int namelen, FMOD_GUID *guid);
FMOD_RESULT FMOD_System_GetRecordDriverCaps    (FMOD_SYSTEM *system, int id, FMOD_CAPS *caps, int *minfrequency, int *maxfrequency);
FMOD_RESULT FMOD_System_GetRecordPosition      (FMOD_SYSTEM *system, int id, unsigned int *position);

FMOD_RESULT FMOD_System_RecordStart            (FMOD_SYSTEM *system, int id, FMOD_SOUND *sound, FMOD_BOOL loop);
FMOD_RESULT FMOD_System_RecordStop             (FMOD_SYSTEM *system, int id);
FMOD_RESULT FMOD_System_IsRecording            (FMOD_SYSTEM *system, int id, FMOD_BOOL *recording);



FMOD_RESULT FMOD_System_CreateGeometry         (FMOD_SYSTEM *system, int maxpolygons, int maxvertices, FMOD_GEOMETRY **geometry);
FMOD_RESULT FMOD_System_SetGeometrySettings    (FMOD_SYSTEM *system, float maxworldsize);
FMOD_RESULT FMOD_System_GetGeometrySettings    (FMOD_SYSTEM *system, float *maxworldsize);
FMOD_RESULT FMOD_System_LoadGeometry           (FMOD_SYSTEM *system, const void *data, int datasize, FMOD_GEOMETRY **geometry);
FMOD_RESULT FMOD_System_GetGeometryOcclusion   (FMOD_SYSTEM *system, const FMOD_VECTOR *listener, const FMOD_VECTOR *source, float *direct, float *reverb);



FMOD_RESULT FMOD_System_SetNetworkProxy        (FMOD_SYSTEM *system, const char *proxy);
FMOD_RESULT FMOD_System_GetNetworkProxy        (FMOD_SYSTEM *system, char *proxy, int proxylen);
FMOD_RESULT FMOD_System_SetNetworkTimeout      (FMOD_SYSTEM *system, int timeout);
FMOD_RESULT FMOD_System_GetNetworkTimeout      (FMOD_SYSTEM *system, int *timeout);



FMOD_RESULT FMOD_System_SetUserData            (FMOD_SYSTEM *system, void *userdata);
FMOD_RESULT FMOD_System_GetUserData            (FMOD_SYSTEM *system, void **userdata);

FMOD_RESULT FMOD_System_GetMemoryInfo          (FMOD_SYSTEM *system, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_Sound_Release                 (FMOD_SOUND *sound);
FMOD_RESULT FMOD_Sound_GetSystemObject         (FMOD_SOUND *sound, FMOD_SYSTEM **system);



FMOD_RESULT FMOD_Sound_Lock                    (FMOD_SOUND *sound, unsigned int offset, unsigned int length, void **ptr1, void **ptr2, unsigned int *len1, unsigned int *len2);
FMOD_RESULT FMOD_Sound_Unlock                  (FMOD_SOUND *sound, void *ptr1, void *ptr2, unsigned int len1, unsigned int len2);
FMOD_RESULT FMOD_Sound_SetDefaults             (FMOD_SOUND *sound, float frequency, float volume, float pan, int priority);
FMOD_RESULT FMOD_Sound_GetDefaults             (FMOD_SOUND *sound, float *frequency, float *volume, float *pan, int *priority);
FMOD_RESULT FMOD_Sound_SetVariations           (FMOD_SOUND *sound, float frequencyvar, float volumevar, float panvar);
FMOD_RESULT FMOD_Sound_GetVariations           (FMOD_SOUND *sound, float *frequencyvar, float *volumevar, float *panvar);
FMOD_RESULT FMOD_Sound_Set3DMinMaxDistance     (FMOD_SOUND *sound, float min, float max);
FMOD_RESULT FMOD_Sound_Get3DMinMaxDistance     (FMOD_SOUND *sound, float *min, float *max);
FMOD_RESULT FMOD_Sound_Set3DConeSettings       (FMOD_SOUND *sound, float insideconeangle, float outsideconeangle, float outsidevolume);
FMOD_RESULT FMOD_Sound_Get3DConeSettings       (FMOD_SOUND *sound, float *insideconeangle, float *outsideconeangle, float *outsidevolume);
FMOD_RESULT FMOD_Sound_Set3DCustomRolloff      (FMOD_SOUND *sound, FMOD_VECTOR *points, int numpoints);
FMOD_RESULT FMOD_Sound_Get3DCustomRolloff      (FMOD_SOUND *sound, FMOD_VECTOR **points, int *numpoints);
FMOD_RESULT FMOD_Sound_SetSubSound             (FMOD_SOUND *sound, int index, FMOD_SOUND *subsound);
FMOD_RESULT FMOD_Sound_GetSubSound             (FMOD_SOUND *sound, int index, FMOD_SOUND **subsound);
FMOD_RESULT FMOD_Sound_SetSubSoundSentence     (FMOD_SOUND *sound, int *subsoundlist, int numsubsounds);
FMOD_RESULT FMOD_Sound_GetName                 (FMOD_SOUND *sound, char *name, int namelen);
FMOD_RESULT FMOD_Sound_GetLength               (FMOD_SOUND *sound, unsigned int *length, FMOD_TIMEUNIT lengthtype);
FMOD_RESULT FMOD_Sound_GetFormat               (FMOD_SOUND *sound, FMOD_SOUND_TYPE *type, FMOD_SOUND_FORMAT *format, int *channels, int *bits);
FMOD_RESULT FMOD_Sound_GetNumSubSounds         (FMOD_SOUND *sound, int *numsubsounds);
FMOD_RESULT FMOD_Sound_GetNumTags              (FMOD_SOUND *sound, int *numtags, int *numtagsupdated);
FMOD_RESULT FMOD_Sound_GetTag                  (FMOD_SOUND *sound, const char *name, int index, FMOD_TAG *tag);
FMOD_RESULT FMOD_Sound_GetOpenState            (FMOD_SOUND *sound, FMOD_OPENSTATE *openstate, unsigned int *percentbuffered, FMOD_BOOL *starving, FMOD_BOOL *diskbusy);
FMOD_RESULT FMOD_Sound_ReadData                (FMOD_SOUND *sound, void *buffer, unsigned int lenbytes, unsigned int *read);
FMOD_RESULT FMOD_Sound_SeekData                (FMOD_SOUND *sound, unsigned int pcm);

FMOD_RESULT FMOD_Sound_SetSoundGroup           (FMOD_SOUND *sound, FMOD_SOUNDGROUP *soundgroup);
FMOD_RESULT FMOD_Sound_GetSoundGroup           (FMOD_SOUND *sound, FMOD_SOUNDGROUP **soundgroup);



FMOD_RESULT FMOD_Sound_GetNumSyncPoints        (FMOD_SOUND *sound, int *numsyncpoints);
FMOD_RESULT FMOD_Sound_GetSyncPoint            (FMOD_SOUND *sound, int index, FMOD_SYNCPOINT **point);
FMOD_RESULT FMOD_Sound_GetSyncPointInfo        (FMOD_SOUND *sound, FMOD_SYNCPOINT *point, char *name, int namelen, unsigned int *offset, FMOD_TIMEUNIT offsettype);
FMOD_RESULT FMOD_Sound_AddSyncPoint            (FMOD_SOUND *sound, unsigned int offset, FMOD_TIMEUNIT offsettype, const char *name, FMOD_SYNCPOINT **point);
FMOD_RESULT FMOD_Sound_DeleteSyncPoint         (FMOD_SOUND *sound, FMOD_SYNCPOINT *point);



FMOD_RESULT FMOD_Sound_SetMode                 (FMOD_SOUND *sound, FMOD_MODE mode);
FMOD_RESULT FMOD_Sound_GetMode                 (FMOD_SOUND *sound, FMOD_MODE *mode);
FMOD_RESULT FMOD_Sound_SetLoopCount            (FMOD_SOUND *sound, int loopcount);
FMOD_RESULT FMOD_Sound_GetLoopCount            (FMOD_SOUND *sound, int *loopcount);
FMOD_RESULT FMOD_Sound_SetLoopPoints           (FMOD_SOUND *sound, unsigned int loopstart, FMOD_TIMEUNIT loopstarttype, unsigned int loopend, FMOD_TIMEUNIT loopendtype);
FMOD_RESULT FMOD_Sound_GetLoopPoints           (FMOD_SOUND *sound, unsigned int *loopstart, FMOD_TIMEUNIT loopstarttype, unsigned int *loopend, FMOD_TIMEUNIT loopendtype);



FMOD_RESULT FMOD_Sound_GetMusicNumChannels     (FMOD_SOUND *sound, int *numchannels);
FMOD_RESULT FMOD_Sound_SetMusicChannelVolume   (FMOD_SOUND *sound, int channel, float volume);
FMOD_RESULT FMOD_Sound_GetMusicChannelVolume   (FMOD_SOUND *sound, int channel, float *volume);
FMOD_RESULT FMOD_Sound_SetMusicSpeed           (FMOD_SOUND *sound, float speed);
FMOD_RESULT FMOD_Sound_GetMusicSpeed           (FMOD_SOUND *sound, float *speed);



FMOD_RESULT FMOD_Sound_SetUserData             (FMOD_SOUND *sound, void *userdata);
FMOD_RESULT FMOD_Sound_GetUserData             (FMOD_SOUND *sound, void **userdata);

FMOD_RESULT FMOD_Sound_GetMemoryInfo           (FMOD_SOUND *sound, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_Channel_GetSystemObject       (FMOD_CHANNEL *channel, FMOD_SYSTEM **system);

FMOD_RESULT FMOD_Channel_Stop                  (FMOD_CHANNEL *channel);
FMOD_RESULT FMOD_Channel_SetPaused             (FMOD_CHANNEL *channel, FMOD_BOOL paused);
FMOD_RESULT FMOD_Channel_GetPaused             (FMOD_CHANNEL *channel, FMOD_BOOL *paused);
FMOD_RESULT FMOD_Channel_SetVolume             (FMOD_CHANNEL *channel, float volume);
FMOD_RESULT FMOD_Channel_GetVolume             (FMOD_CHANNEL *channel, float *volume);
FMOD_RESULT FMOD_Channel_SetFrequency          (FMOD_CHANNEL *channel, float frequency);
FMOD_RESULT FMOD_Channel_GetFrequency          (FMOD_CHANNEL *channel, float *frequency);
FMOD_RESULT FMOD_Channel_SetPan                (FMOD_CHANNEL *channel, float pan);
FMOD_RESULT FMOD_Channel_GetPan                (FMOD_CHANNEL *channel, float *pan);
FMOD_RESULT FMOD_Channel_SetDelay              (FMOD_CHANNEL *channel, FMOD_DELAYTYPE delaytype, unsigned int delayhi, unsigned int delaylo);
FMOD_RESULT FMOD_Channel_GetDelay              (FMOD_CHANNEL *channel, FMOD_DELAYTYPE delaytype, unsigned int *delayhi, unsigned int *delaylo);
FMOD_RESULT FMOD_Channel_SetSpeakerMix         (FMOD_CHANNEL *channel, float frontleft, float frontright, float center, float lfe, float backleft, float backright, float sideleft, float sideright);
FMOD_RESULT FMOD_Channel_GetSpeakerMix         (FMOD_CHANNEL *channel, float *frontleft, float *frontright, float *center, float *lfe, float *backleft, float *backright, float *sideleft, float *sideright);
FMOD_RESULT FMOD_Channel_SetSpeakerLevels      (FMOD_CHANNEL *channel, FMOD_SPEAKER speaker, float *levels, int numlevels);
FMOD_RESULT FMOD_Channel_GetSpeakerLevels      (FMOD_CHANNEL *channel, FMOD_SPEAKER speaker, float *levels, int numlevels);
FMOD_RESULT FMOD_Channel_SetInputChannelMix    (FMOD_CHANNEL *channel, float *levels, int numlevels);
FMOD_RESULT FMOD_Channel_GetInputChannelMix    (FMOD_CHANNEL *channel, float *levels, int numlevels);
FMOD_RESULT FMOD_Channel_SetMute               (FMOD_CHANNEL *channel, FMOD_BOOL mute);
FMOD_RESULT FMOD_Channel_GetMute               (FMOD_CHANNEL *channel, FMOD_BOOL *mute);
FMOD_RESULT FMOD_Channel_SetPriority           (FMOD_CHANNEL *channel, int priority);
FMOD_RESULT FMOD_Channel_GetPriority           (FMOD_CHANNEL *channel, int *priority);
FMOD_RESULT FMOD_Channel_SetPosition           (FMOD_CHANNEL *channel, unsigned int position, FMOD_TIMEUNIT postype);
FMOD_RESULT FMOD_Channel_GetPosition           (FMOD_CHANNEL *channel, unsigned int *position, FMOD_TIMEUNIT postype);
FMOD_RESULT FMOD_Channel_SetReverbProperties   (FMOD_CHANNEL *channel, const FMOD_REVERB_CHANNELPROPERTIES *prop);
FMOD_RESULT FMOD_Channel_GetReverbProperties   (FMOD_CHANNEL *channel, FMOD_REVERB_CHANNELPROPERTIES *prop);
FMOD_RESULT FMOD_Channel_SetLowPassGain        (FMOD_CHANNEL *channel, float gain);
FMOD_RESULT FMOD_Channel_GetLowPassGain        (FMOD_CHANNEL *channel, float *gain);

FMOD_RESULT FMOD_Channel_SetChannelGroup       (FMOD_CHANNEL *channel, FMOD_CHANNELGROUP *channelgroup);
FMOD_RESULT FMOD_Channel_GetChannelGroup       (FMOD_CHANNEL *channel, FMOD_CHANNELGROUP **channelgroup);
FMOD_RESULT FMOD_Channel_SetCallback           (FMOD_CHANNEL *channel, FMOD_CHANNEL_CALLBACK callback);



FMOD_RESULT FMOD_Channel_Set3DAttributes       (FMOD_CHANNEL *channel, const FMOD_VECTOR *pos, const FMOD_VECTOR *vel);
FMOD_RESULT FMOD_Channel_Get3DAttributes       (FMOD_CHANNEL *channel, FMOD_VECTOR *pos, FMOD_VECTOR *vel);
FMOD_RESULT FMOD_Channel_Set3DMinMaxDistance   (FMOD_CHANNEL *channel, float mindistance, float maxdistance);
FMOD_RESULT FMOD_Channel_Get3DMinMaxDistance   (FMOD_CHANNEL *channel, float *mindistance, float *maxdistance);
FMOD_RESULT FMOD_Channel_Set3DConeSettings     (FMOD_CHANNEL *channel, float insideconeangle, float outsideconeangle, float outsidevolume);
FMOD_RESULT FMOD_Channel_Get3DConeSettings     (FMOD_CHANNEL *channel, float *insideconeangle, float *outsideconeangle, float *outsidevolume);
FMOD_RESULT FMOD_Channel_Set3DConeOrientation  (FMOD_CHANNEL *channel, FMOD_VECTOR *orientation);
FMOD_RESULT FMOD_Channel_Get3DConeOrientation  (FMOD_CHANNEL *channel, FMOD_VECTOR *orientation);
FMOD_RESULT FMOD_Channel_Set3DCustomRolloff    (FMOD_CHANNEL *channel, FMOD_VECTOR *points, int numpoints);
FMOD_RESULT FMOD_Channel_Get3DCustomRolloff    (FMOD_CHANNEL *channel, FMOD_VECTOR **points, int *numpoints);
FMOD_RESULT FMOD_Channel_Set3DOcclusion        (FMOD_CHANNEL *channel, float directocclusion, float reverbocclusion);
FMOD_RESULT FMOD_Channel_Get3DOcclusion        (FMOD_CHANNEL *channel, float *directocclusion, float *reverbocclusion);
FMOD_RESULT FMOD_Channel_Set3DSpread           (FMOD_CHANNEL *channel, float angle);
FMOD_RESULT FMOD_Channel_Get3DSpread           (FMOD_CHANNEL *channel, float *angle);
FMOD_RESULT FMOD_Channel_Set3DPanLevel         (FMOD_CHANNEL *channel, float level);
FMOD_RESULT FMOD_Channel_Get3DPanLevel         (FMOD_CHANNEL *channel, float *level);
FMOD_RESULT FMOD_Channel_Set3DDopplerLevel     (FMOD_CHANNEL *channel, float level);
FMOD_RESULT FMOD_Channel_Get3DDopplerLevel     (FMOD_CHANNEL *channel, float *level);
FMOD_RESULT FMOD_Channel_Set3DDistanceFilter   (FMOD_CHANNEL *channel, FMOD_BOOL custom, float customLevel, float centerFreq);
FMOD_RESULT FMOD_Channel_Get3DDistanceFilter   (FMOD_CHANNEL *channel, FMOD_BOOL *custom, float *customLevel, float *centerFreq);



FMOD_RESULT FMOD_Channel_GetDSPHead            (FMOD_CHANNEL *channel, FMOD_DSP **dsp);
FMOD_RESULT FMOD_Channel_AddDSP                (FMOD_CHANNEL *channel, FMOD_DSP *dsp, FMOD_DSPCONNECTION **connection);



FMOD_RESULT FMOD_Channel_IsPlaying             (FMOD_CHANNEL *channel, FMOD_BOOL *isplaying);
FMOD_RESULT FMOD_Channel_IsVirtual             (FMOD_CHANNEL *channel, FMOD_BOOL *isvirtual);
FMOD_RESULT FMOD_Channel_GetAudibility         (FMOD_CHANNEL *channel, float *audibility);
FMOD_RESULT FMOD_Channel_GetCurrentSound       (FMOD_CHANNEL *channel, FMOD_SOUND **sound);
FMOD_RESULT FMOD_Channel_GetSpectrum           (FMOD_CHANNEL *channel, float *spectrumarray, int numvalues, int channeloffset, FMOD_DSP_FFT_WINDOW windowtype);
FMOD_RESULT FMOD_Channel_GetWaveData           (FMOD_CHANNEL *channel, float *wavearray, int numvalues, int channeloffset);
FMOD_RESULT FMOD_Channel_GetIndex              (FMOD_CHANNEL *channel, int *index);



FMOD_RESULT FMOD_Channel_SetMode               (FMOD_CHANNEL *channel, FMOD_MODE mode);
FMOD_RESULT FMOD_Channel_GetMode               (FMOD_CHANNEL *channel, FMOD_MODE *mode);
FMOD_RESULT FMOD_Channel_SetLoopCount          (FMOD_CHANNEL *channel, int loopcount);
FMOD_RESULT FMOD_Channel_GetLoopCount          (FMOD_CHANNEL *channel, int *loopcount);
FMOD_RESULT FMOD_Channel_SetLoopPoints         (FMOD_CHANNEL *channel, unsigned int loopstart, FMOD_TIMEUNIT loopstarttype, unsigned int loopend, FMOD_TIMEUNIT loopendtype);
FMOD_RESULT FMOD_Channel_GetLoopPoints         (FMOD_CHANNEL *channel, unsigned int *loopstart, FMOD_TIMEUNIT loopstarttype, unsigned int *loopend, FMOD_TIMEUNIT loopendtype);



FMOD_RESULT FMOD_Channel_SetUserData           (FMOD_CHANNEL *channel, void *userdata);
FMOD_RESULT FMOD_Channel_GetUserData           (FMOD_CHANNEL *channel, void **userdata);

FMOD_RESULT FMOD_Channel_GetMemoryInfo         (FMOD_CHANNEL *channel, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_ChannelGroup_Release          (FMOD_CHANNELGROUP *channelgroup);
FMOD_RESULT FMOD_ChannelGroup_GetSystemObject  (FMOD_CHANNELGROUP *channelgroup, FMOD_SYSTEM **system);



FMOD_RESULT FMOD_ChannelGroup_SetVolume        (FMOD_CHANNELGROUP *channelgroup, float volume);
FMOD_RESULT FMOD_ChannelGroup_GetVolume        (FMOD_CHANNELGROUP *channelgroup, float *volume);
FMOD_RESULT FMOD_ChannelGroup_SetPitch         (FMOD_CHANNELGROUP *channelgroup, float pitch);
FMOD_RESULT FMOD_ChannelGroup_GetPitch         (FMOD_CHANNELGROUP *channelgroup, float *pitch);
FMOD_RESULT FMOD_ChannelGroup_Set3DOcclusion   (FMOD_CHANNELGROUP *channelgroup, float directocclusion, float reverbocclusion);
FMOD_RESULT FMOD_ChannelGroup_Get3DOcclusion   (FMOD_CHANNELGROUP *channelgroup, float *directocclusion, float *reverbocclusion);
FMOD_RESULT FMOD_ChannelGroup_SetPaused        (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL paused);
FMOD_RESULT FMOD_ChannelGroup_GetPaused        (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL *paused);
FMOD_RESULT FMOD_ChannelGroup_SetMute          (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL mute);
FMOD_RESULT FMOD_ChannelGroup_GetMute          (FMOD_CHANNELGROUP *channelgroup, FMOD_BOOL *mute);



FMOD_RESULT FMOD_ChannelGroup_Stop             (FMOD_CHANNELGROUP *channelgroup);
FMOD_RESULT FMOD_ChannelGroup_OverrideVolume   (FMOD_CHANNELGROUP *channelgroup, float volume);
FMOD_RESULT FMOD_ChannelGroup_OverrideFrequency(FMOD_CHANNELGROUP *channelgroup, float frequency);
FMOD_RESULT FMOD_ChannelGroup_OverridePan      (FMOD_CHANNELGROUP *channelgroup, float pan);
FMOD_RESULT FMOD_ChannelGroup_OverrideReverbProperties(FMOD_CHANNELGROUP *channelgroup, const FMOD_REVERB_CHANNELPROPERTIES *prop);
FMOD_RESULT FMOD_ChannelGroup_Override3DAttributes(FMOD_CHANNELGROUP *channelgroup, const FMOD_VECTOR *pos, const FMOD_VECTOR *vel);
FMOD_RESULT FMOD_ChannelGroup_OverrideSpeakerMix(FMOD_CHANNELGROUP *channelgroup, float frontleft, float frontright, float center, float lfe, float backleft, float backright, float sideleft, float sideright);



FMOD_RESULT FMOD_ChannelGroup_AddGroup         (FMOD_CHANNELGROUP *channelgroup, FMOD_CHANNELGROUP *group);
FMOD_RESULT FMOD_ChannelGroup_GetNumGroups     (FMOD_CHANNELGROUP *channelgroup, int *numgroups);
FMOD_RESULT FMOD_ChannelGroup_GetGroup         (FMOD_CHANNELGROUP *channelgroup, int index, FMOD_CHANNELGROUP **group);
FMOD_RESULT FMOD_ChannelGroup_GetParentGroup   (FMOD_CHANNELGROUP *channelgroup, FMOD_CHANNELGROUP **group);



FMOD_RESULT FMOD_ChannelGroup_GetDSPHead       (FMOD_CHANNELGROUP *channelgroup, FMOD_DSP **dsp);
FMOD_RESULT FMOD_ChannelGroup_AddDSP           (FMOD_CHANNELGROUP *channelgroup, FMOD_DSP *dsp, FMOD_DSPCONNECTION **connection);



FMOD_RESULT FMOD_ChannelGroup_GetName          (FMOD_CHANNELGROUP *channelgroup, char *name, int namelen);
FMOD_RESULT FMOD_ChannelGroup_GetNumChannels   (FMOD_CHANNELGROUP *channelgroup, int *numchannels);
FMOD_RESULT FMOD_ChannelGroup_GetChannel       (FMOD_CHANNELGROUP *channelgroup, int index, FMOD_CHANNEL **channel);
FMOD_RESULT FMOD_ChannelGroup_GetSpectrum      (FMOD_CHANNELGROUP *channelgroup, float *spectrumarray, int numvalues, int channeloffset, FMOD_DSP_FFT_WINDOW windowtype);
FMOD_RESULT FMOD_ChannelGroup_GetWaveData      (FMOD_CHANNELGROUP *channelgroup, float *wavearray, int numvalues, int channeloffset);



FMOD_RESULT FMOD_ChannelGroup_SetUserData      (FMOD_CHANNELGROUP *channelgroup, void *userdata);
FMOD_RESULT FMOD_ChannelGroup_GetUserData      (FMOD_CHANNELGROUP *channelgroup, void **userdata);

FMOD_RESULT FMOD_ChannelGroup_GetMemoryInfo    (FMOD_CHANNELGROUP *channelgroup, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_SoundGroup_Release            (FMOD_SOUNDGROUP *soundgroup);
FMOD_RESULT FMOD_SoundGroup_GetSystemObject    (FMOD_SOUNDGROUP *soundgroup, FMOD_SYSTEM **system);



FMOD_RESULT FMOD_SoundGroup_SetMaxAudible      (FMOD_SOUNDGROUP *soundgroup, int maxaudible);
FMOD_RESULT FMOD_SoundGroup_GetMaxAudible      (FMOD_SOUNDGROUP *soundgroup, int *maxaudible);
FMOD_RESULT FMOD_SoundGroup_SetMaxAudibleBehavior(FMOD_SOUNDGROUP *soundgroup, FMOD_SOUNDGROUP_BEHAVIOR behavior);
FMOD_RESULT FMOD_SoundGroup_GetMaxAudibleBehavior(FMOD_SOUNDGROUP *soundgroup, FMOD_SOUNDGROUP_BEHAVIOR *behavior);
FMOD_RESULT FMOD_SoundGroup_SetMuteFadeSpeed   (FMOD_SOUNDGROUP *soundgroup, float speed);
FMOD_RESULT FMOD_SoundGroup_GetMuteFadeSpeed   (FMOD_SOUNDGROUP *soundgroup, float *speed);
FMOD_RESULT FMOD_SoundGroup_SetVolume          (FMOD_SOUNDGROUP *soundgroup, float volume);
FMOD_RESULT FMOD_SoundGroup_GetVolume          (FMOD_SOUNDGROUP *soundgroup, float *volume);
FMOD_RESULT FMOD_SoundGroup_Stop               (FMOD_SOUNDGROUP *soundgroup);



FMOD_RESULT FMOD_SoundGroup_GetName            (FMOD_SOUNDGROUP *soundgroup, char *name, int namelen);
FMOD_RESULT FMOD_SoundGroup_GetNumSounds       (FMOD_SOUNDGROUP *soundgroup, int *numsounds);
FMOD_RESULT FMOD_SoundGroup_GetSound           (FMOD_SOUNDGROUP *soundgroup, int index, FMOD_SOUND **sound);
FMOD_RESULT FMOD_SoundGroup_GetNumPlaying      (FMOD_SOUNDGROUP *soundgroup, int *numplaying);



FMOD_RESULT FMOD_SoundGroup_SetUserData        (FMOD_SOUNDGROUP *soundgroup, void *userdata);
FMOD_RESULT FMOD_SoundGroup_GetUserData        (FMOD_SOUNDGROUP *soundgroup, void **userdata);

FMOD_RESULT FMOD_SoundGroup_GetMemoryInfo      (FMOD_SOUNDGROUP *soundgroup, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_DSP_Release                   (FMOD_DSP *dsp);
FMOD_RESULT FMOD_DSP_GetSystemObject           (FMOD_DSP *dsp, FMOD_SYSTEM **system);



FMOD_RESULT FMOD_DSP_AddInput                  (FMOD_DSP *dsp, FMOD_DSP *target, FMOD_DSPCONNECTION **connection);
FMOD_RESULT FMOD_DSP_DisconnectFrom            (FMOD_DSP *dsp, FMOD_DSP *target);
FMOD_RESULT FMOD_DSP_DisconnectAll             (FMOD_DSP *dsp, FMOD_BOOL inputs, FMOD_BOOL outputs);
FMOD_RESULT FMOD_DSP_Remove                    (FMOD_DSP *dsp);
FMOD_RESULT FMOD_DSP_GetNumInputs              (FMOD_DSP *dsp, int *numinputs);
FMOD_RESULT FMOD_DSP_GetNumOutputs             (FMOD_DSP *dsp, int *numoutputs);
FMOD_RESULT FMOD_DSP_GetInput                  (FMOD_DSP *dsp, int index, FMOD_DSP **input, FMOD_DSPCONNECTION **inputconnection);
FMOD_RESULT FMOD_DSP_GetOutput                 (FMOD_DSP *dsp, int index, FMOD_DSP **output, FMOD_DSPCONNECTION **outputconnection);



FMOD_RESULT FMOD_DSP_SetActive                 (FMOD_DSP *dsp, FMOD_BOOL active);
FMOD_RESULT FMOD_DSP_GetActive                 (FMOD_DSP *dsp, FMOD_BOOL *active);
FMOD_RESULT FMOD_DSP_SetBypass                 (FMOD_DSP *dsp, FMOD_BOOL bypass);
FMOD_RESULT FMOD_DSP_GetBypass                 (FMOD_DSP *dsp, FMOD_BOOL *bypass);
FMOD_RESULT FMOD_DSP_SetSpeakerActive          (FMOD_DSP *dsp, FMOD_SPEAKER speaker, FMOD_BOOL active);
FMOD_RESULT FMOD_DSP_GetSpeakerActive          (FMOD_DSP *dsp, FMOD_SPEAKER speaker, FMOD_BOOL *active);
FMOD_RESULT FMOD_DSP_Reset                     (FMOD_DSP *dsp);



FMOD_RESULT FMOD_DSP_SetParameter              (FMOD_DSP *dsp, int index, float value);
FMOD_RESULT FMOD_DSP_GetParameter              (FMOD_DSP *dsp, int index, float *value, char *valuestr, int valuestrlen);
FMOD_RESULT FMOD_DSP_GetNumParameters          (FMOD_DSP *dsp, int *numparams);
FMOD_RESULT FMOD_DSP_GetParameterInfo          (FMOD_DSP *dsp, int index, char *name, char *label, char *description, int descriptionlen, float *min, float *max);
FMOD_RESULT FMOD_DSP_ShowConfigDialog          (FMOD_DSP *dsp, void *hwnd, FMOD_BOOL show);



FMOD_RESULT FMOD_DSP_GetInfo                   (FMOD_DSP *dsp, char *name, unsigned int *version, int *channels, int *configwidth, int *configheight);
FMOD_RESULT FMOD_DSP_GetType                   (FMOD_DSP *dsp, FMOD_DSP_TYPE *type);
FMOD_RESULT FMOD_DSP_SetDefaults               (FMOD_DSP *dsp, float frequency, float volume, float pan, int priority);
FMOD_RESULT FMOD_DSP_GetDefaults               (FMOD_DSP *dsp, float *frequency, float *volume, float *pan, int *priority);



FMOD_RESULT FMOD_DSP_SetUserData               (FMOD_DSP *dsp, void *userdata);
FMOD_RESULT FMOD_DSP_GetUserData               (FMOD_DSP *dsp, void **userdata);

FMOD_RESULT FMOD_DSP_GetMemoryInfo             (FMOD_DSP *dsp, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_DSPConnection_GetInput        (FMOD_DSPCONNECTION *dspconnection, FMOD_DSP **input);
FMOD_RESULT FMOD_DSPConnection_GetOutput       (FMOD_DSPCONNECTION *dspconnection, FMOD_DSP **output);
FMOD_RESULT FMOD_DSPConnection_SetMix          (FMOD_DSPCONNECTION *dspconnection, float volume);
FMOD_RESULT FMOD_DSPConnection_GetMix          (FMOD_DSPCONNECTION *dspconnection, float *volume);
FMOD_RESULT FMOD_DSPConnection_SetLevels       (FMOD_DSPCONNECTION *dspconnection, FMOD_SPEAKER speaker, float *levels, int numlevels);
FMOD_RESULT FMOD_DSPConnection_GetLevels       (FMOD_DSPCONNECTION *dspconnection, FMOD_SPEAKER speaker, float *levels, int numlevels);



FMOD_RESULT FMOD_DSPConnection_SetUserData     (FMOD_DSPCONNECTION *dspconnection, void *userdata);
FMOD_RESULT FMOD_DSPConnection_GetUserData     (FMOD_DSPCONNECTION *dspconnection, void **userdata);

FMOD_RESULT FMOD_DSPConnection_GetMemoryInfo   (FMOD_DSPCONNECTION *dspconnection, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_Geometry_Release              (FMOD_GEOMETRY *geometry);



FMOD_RESULT FMOD_Geometry_AddPolygon           (FMOD_GEOMETRY *geometry, float directocclusion, float reverbocclusion, FMOD_BOOL doublesided, int numvertices, const FMOD_VECTOR *vertices, int *polygonindex);
FMOD_RESULT FMOD_Geometry_GetNumPolygons       (FMOD_GEOMETRY *geometry, int *numpolygons);
FMOD_RESULT FMOD_Geometry_GetMaxPolygons       (FMOD_GEOMETRY *geometry, int *maxpolygons, int *maxvertices);
FMOD_RESULT FMOD_Geometry_GetPolygonNumVertices(FMOD_GEOMETRY *geometry, int index, int *numvertices);
FMOD_RESULT FMOD_Geometry_SetPolygonVertex     (FMOD_GEOMETRY *geometry, int index, int vertexindex, const FMOD_VECTOR *vertex);
FMOD_RESULT FMOD_Geometry_GetPolygonVertex     (FMOD_GEOMETRY *geometry, int index, int vertexindex, FMOD_VECTOR *vertex);
FMOD_RESULT FMOD_Geometry_SetPolygonAttributes (FMOD_GEOMETRY *geometry, int index, float directocclusion, float reverbocclusion, FMOD_BOOL doublesided);
FMOD_RESULT FMOD_Geometry_GetPolygonAttributes (FMOD_GEOMETRY *geometry, int index, float *directocclusion, float *reverbocclusion, FMOD_BOOL *doublesided);



FMOD_RESULT FMOD_Geometry_SetActive            (FMOD_GEOMETRY *geometry, FMOD_BOOL active);
FMOD_RESULT FMOD_Geometry_GetActive            (FMOD_GEOMETRY *geometry, FMOD_BOOL *active);
FMOD_RESULT FMOD_Geometry_SetRotation          (FMOD_GEOMETRY *geometry, const FMOD_VECTOR *forward, const FMOD_VECTOR *up);
FMOD_RESULT FMOD_Geometry_GetRotation          (FMOD_GEOMETRY *geometry, FMOD_VECTOR *forward, FMOD_VECTOR *up);
FMOD_RESULT FMOD_Geometry_SetPosition          (FMOD_GEOMETRY *geometry, const FMOD_VECTOR *position);
FMOD_RESULT FMOD_Geometry_GetPosition          (FMOD_GEOMETRY *geometry, FMOD_VECTOR *position);
FMOD_RESULT FMOD_Geometry_SetScale             (FMOD_GEOMETRY *geometry, const FMOD_VECTOR *scale);
FMOD_RESULT FMOD_Geometry_GetScale             (FMOD_GEOMETRY *geometry, FMOD_VECTOR *scale);
FMOD_RESULT FMOD_Geometry_Save                 (FMOD_GEOMETRY *geometry, void *data, int *datasize);



FMOD_RESULT FMOD_Geometry_SetUserData          (FMOD_GEOMETRY *geometry, void *userdata);
FMOD_RESULT FMOD_Geometry_GetUserData          (FMOD_GEOMETRY *geometry, void **userdata);

FMOD_RESULT FMOD_Geometry_GetMemoryInfo        (FMOD_GEOMETRY *geometry, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_Reverb_Release                (FMOD_REVERB *reverb);



FMOD_RESULT FMOD_Reverb_Set3DAttributes        (FMOD_REVERB *reverb, const FMOD_VECTOR *position, float mindistance, float maxdistance);
FMOD_RESULT FMOD_Reverb_Get3DAttributes        (FMOD_REVERB *reverb, FMOD_VECTOR *position, float *mindistance, float *maxdistance);
FMOD_RESULT FMOD_Reverb_SetProperties          (FMOD_REVERB *reverb, const FMOD_REVERB_PROPERTIES *properties);
FMOD_RESULT FMOD_Reverb_GetProperties          (FMOD_REVERB *reverb, FMOD_REVERB_PROPERTIES *properties);
FMOD_RESULT FMOD_Reverb_SetActive              (FMOD_REVERB *reverb, FMOD_BOOL active);
FMOD_RESULT FMOD_Reverb_GetActive              (FMOD_REVERB *reverb, FMOD_BOOL *active);



FMOD_RESULT FMOD_Reverb_SetUserData            (FMOD_REVERB *reverb, void *userdata);
FMOD_RESULT FMOD_Reverb_GetUserData            (FMOD_REVERB *reverb, void **userdata);

FMOD_RESULT FMOD_Reverb_GetMemoryInfo          (FMOD_REVERB *reverb, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);




























typedef struct FMOD_EVENTSYSTEM     FMOD_EVENTSYSTEM;
typedef struct FMOD_EVENTPROJECT    FMOD_EVENTPROJECT;
typedef struct FMOD_EVENTGROUP      FMOD_EVENTGROUP;
typedef struct FMOD_EVENTCATEGORY   FMOD_EVENTCATEGORY;
typedef struct FMOD_EVENT           FMOD_EVENT;
typedef struct FMOD_EVENTPARAMETER  FMOD_EVENTPARAMETER;
typedef struct FMOD_EVENTREVERB     FMOD_EVENTREVERB;
typedef struct FMOD_EVENTQUEUE      FMOD_EVENTQUEUE;
typedef struct FMOD_EVENTQUEUEENTRY FMOD_EVENTQUEUEENTRY;
typedef struct FMOD_MUSICPROMPT     FMOD_MUSICPROMPT;
typedef struct FMOD_MUSICSYSTEM     FMOD_MUSICSYSTEM;
typedef unsigned int                FMOD_EVENT_INITFLAGS;
typedef unsigned int                FMOD_EVENT_MODE;
typedef unsigned int                FMOD_EVENT_STATE;
typedef unsigned int                FMOD_MUSIC_ID;
typedef FMOD_MUSIC_ID               FMOD_MUSIC_CUE_ID;
typedef FMOD_MUSIC_ID               FMOD_MUSIC_PARAM_ID;
















































typedef enum
{
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
    FMOD_EVENTPROPERTY_USER_BASE                        
} FMOD_EVENT_PROPERTY;



typedef enum
{
    FMOD_EVENTPROPERTY_TYPE_INT = 0,                     
    FMOD_EVENTPROPERTY_TYPE_FLOAT,                      
    FMOD_EVENTPROPERTY_TYPE_STRING                      
} FMOD_EVENTPROPERTY_TYPE;



typedef enum
{
    FMOD_EVENT_PITCHUNITS_RAW = 0,      
    FMOD_EVENT_PITCHUNITS_OCTAVES,      
    FMOD_EVENT_PITCHUNITS_SEMITONES,    
    FMOD_EVENT_PITCHUNITS_TONES         
} FMOD_EVENT_PITCHUNITS;



typedef enum
{
    FMOD_EVENT_RESOURCE_STREAMS_AND_SAMPLES,  
    FMOD_EVENT_RESOURCE_STREAMS,              
    FMOD_EVENT_RESOURCE_SAMPLES               
} FMOD_EVENT_RESOURCE;



typedef enum
{
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
    FMOD_EVENT_CALLBACKTYPE_MAXSTREAMS            
} FMOD_EVENT_CALLBACKTYPE;



typedef struct FMOD_EVENT_WAVEBANKINFO
{
    char          name[256];             
    int           streamrefcnt;          
    int           samplerefcnt;          
    int           numstreams;            
    int           maxstreams;            
    int           streamsinuse;          
    unsigned int  streammemory;          
    unsigned int  samplememory;          
    int           type;                  
} FMOD_EVENT_WAVEBANKINFO;



typedef struct FMOD_EVENT_SYSTEMINFO
{




    int                      numevents;          
    int                      numinstances;       
    int                      maxwavebanks;       
    FMOD_EVENT_WAVEBANKINFO *wavebankinfo;       
    int                      numplayingevents;   
    FMOD_EVENT             **playingevents;      
    int                      numloadsqueued[5];  
} FMOD_EVENT_SYSTEMINFO;




typedef struct FMOD_EVENT_PROJECTINFO
{




    int                      index;            
    char                     name[256];        
    int                      numevents;        
    int                      numinstances;     
    int                      maxwavebanks;     
    FMOD_EVENT_WAVEBANKINFO *wavebankinfo;     
    int                      numplayingevents; 
    FMOD_EVENT             **playingevents;    

} FMOD_EVENT_PROJECTINFO;



typedef struct FMOD_EVENT_INFO
{




    int                      memoryused;        
    int                      positionms;        
    int                      lengthms;          
    int                      channelsplaying;   
    int                      instancesactive;   
    int                      maxwavebanks;      
    FMOD_EVENT_WAVEBANKINFO *wavebankinfo;      
    unsigned int             projectid;         
    unsigned int             systemid;          
    float                    audibility;        
    int                      numinstances;      
    FMOD_EVENT             **instances;         
    FMOD_GUID               *guid;              

} FMOD_EVENT_INFO;



typedef enum
{
    FMOD_EVENT_SOUNDDEF_ENTRYTYPE_WAVETABLE,           
    FMOD_EVENT_SOUNDDEF_ENTRYTYPE_OSCILLATOR,          
    FMOD_EVENT_SOUNDDEF_ENTRYTYPE_NULL,                
    FMOD_EVENT_SOUNDDEF_ENTRYTYPE_PROGRAMMER           
} FMOD_EVENT_SOUNDDEF_ENTRYTYPE;



typedef struct FMOD_EVENT_SOUNDDEFINFO
{




    char                    *name;              
    int                      numentries;        
    const char             **entrynames;        
    FMOD_EVENT_SOUNDDEF_ENTRYTYPE *entrytypes;  

} FMOD_EVENT_SOUNDDEFINFO;



typedef struct FMOD_EVENT_LOADINFO
{




    unsigned int  size;                         
    char         *encryptionkey;                
    float         sounddefentrylimit;           
    unsigned int  loadfrommemory_length;        
    FMOD_BOOL     override_category_vals;       
    unsigned int  sizeof_instancepool_simple;   

} FMOD_EVENT_LOADINFO;


typedef FMOD_RESULT (*FMOD_EVENT_CALLBACK) (FMOD_EVENT *event, FMOD_EVENT_CALLBACKTYPE type, void *param1, void *param2, void *userdata);



typedef enum
{
    FMOD_EVENTQUEUE_CALLBACKTYPE_PREPARE,       
    FMOD_EVENTQUEUE_CALLBACKTYPE_ABOUTTOPLAY,   
    FMOD_EVENTQUEUE_CALLBACKTYPE_FINISHED,      
    FMOD_EVENTQUEUE_CALLBACKTYPE_EXPIRED        

} FMOD_EVENTQUEUE_CALLBACKTYPE;


typedef FMOD_RESULT (*FMOD_EVENTQUEUE_CALLBACK)(FMOD_EVENTQUEUE_CALLBACKTYPE type, FMOD_EVENTQUEUE *queue, FMOD_EVENTQUEUEENTRY *entry, void *callbackuserdata);



typedef struct FMOD_MUSIC_INFO
{
    FMOD_BOOL               starving;           
    FMOD_BOOL               all_samples_loaded; 
} FMOD_MUSIC_INFO;



typedef struct FMOD_MUSIC_ENTITY
{
	const char* name;                       
	FMOD_MUSIC_ID id;                       
} FMOD_MUSIC_ENTITY;



typedef struct FMOD_MUSIC_ITERATOR
{
	const FMOD_MUSIC_ENTITY* value;         
	const char* filter;                     
} FMOD_MUSIC_ITERATOR;



typedef struct FMOD_MUSIC_SAMPLE_INFO
{
    unsigned int  segment_id;   
    unsigned int  index;        
    const char   *filename;     
} FMOD_MUSIC_SAMPLE_INFO;



typedef struct FMOD_MUSIC_SEGMENT_INFO
{
    unsigned int  segment_id;   
    unsigned int  theme_id;     
} FMOD_MUSIC_SEGMENT_INFO;



typedef enum
{
    FMOD_MUSIC_CALLBACKTYPE_SEGMENT_START,       
    FMOD_MUSIC_CALLBACKTYPE_SEGMENT_END,         
    FMOD_MUSIC_CALLBACKTYPE_SAMPLE_CREATE,       
    FMOD_MUSIC_CALLBACKTYPE_SAMPLE_RELEASE,      
    FMOD_MUSIC_CALLBACKTYPE_CHANNEL_CREATED,     
    FMOD_MUSIC_CALLBACKTYPE_CHANNEL_DESTROYED,   
    FMOD_MUSIC_CALLBACKTYPE_RESET,               
    FMOD_MUSIC_CALLBACKTYPE_BEAT                 
} FMOD_MUSIC_CALLBACKTYPE;


typedef FMOD_RESULT (*FMOD_MUSIC_CALLBACK) (FMOD_MUSIC_CALLBACKTYPE type, void *param1, void *param2, void *userdata);










FMOD_RESULT FMOD_EventSystem_Create(FMOD_EVENTSYSTEM **eventsystem);







FMOD_RESULT FMOD_EventSystem_Init              (FMOD_EVENTSYSTEM *eventsystem, int maxchannels, FMOD_INITFLAGS flags, void *extradriverdata, FMOD_EVENT_INITFLAGS eventflags);
FMOD_RESULT FMOD_EventSystem_Release           (FMOD_EVENTSYSTEM *eventsystem);
FMOD_RESULT FMOD_EventSystem_Update            (FMOD_EVENTSYSTEM *eventsystem);
FMOD_RESULT FMOD_EventSystem_SetMediaPath      (FMOD_EVENTSYSTEM *eventsystem, const char *path);
FMOD_RESULT FMOD_EventSystem_SetPluginPath     (FMOD_EVENTSYSTEM *eventsystem, const char *path);
FMOD_RESULT FMOD_EventSystem_GetVersion        (FMOD_EVENTSYSTEM *eventsystem, unsigned int *version);
FMOD_RESULT FMOD_EventSystem_GetInfo           (FMOD_EVENTSYSTEM *eventsystem, FMOD_EVENT_SYSTEMINFO *info);
FMOD_RESULT FMOD_EventSystem_GetSystemObject   (FMOD_EVENTSYSTEM *eventsystem, FMOD_SYSTEM **system);
FMOD_RESULT FMOD_EventSystem_GetMusicSystem    (FMOD_EVENTSYSTEM *eventsystem, FMOD_MUSICSYSTEM **musicsystem);
FMOD_RESULT FMOD_EventSystem_SetLanguage       (FMOD_EVENTSYSTEM *eventsystem, const char *language);
FMOD_RESULT FMOD_EventSystem_GetLanguage       (FMOD_EVENTSYSTEM *eventsystem, char *language);
FMOD_RESULT FMOD_EventSystem_RegisterDSP       (FMOD_EVENTSYSTEM *eventsystem, FMOD_DSP_DESCRIPTION *description, unsigned int *handle);



FMOD_RESULT FMOD_EventSystem_Load              (FMOD_EVENTSYSTEM *eventsystem, const char *name_or_data, FMOD_EVENT_LOADINFO *loadinfo, FMOD_EVENTPROJECT **project);
FMOD_RESULT FMOD_EventSystem_Unload            (FMOD_EVENTSYSTEM *eventsystem);



FMOD_RESULT FMOD_EventSystem_GetProject        (FMOD_EVENTSYSTEM *eventsystem, const char *name, FMOD_EVENTPROJECT **project);
FMOD_RESULT FMOD_EventSystem_GetProjectByIndex (FMOD_EVENTSYSTEM *eventsystem, int index, FMOD_EVENTPROJECT **project);
FMOD_RESULT FMOD_EventSystem_GetNumProjects    (FMOD_EVENTSYSTEM *eventsystem, int *numprojects);
FMOD_RESULT FMOD_EventSystem_GetCategory       (FMOD_EVENTSYSTEM *eventsystem, const char *name, FMOD_EVENTCATEGORY **category);
FMOD_RESULT FMOD_EventSystem_GetCategoryByIndex(FMOD_EVENTSYSTEM *eventsystem, int index, FMOD_EVENTCATEGORY **category);
FMOD_RESULT FMOD_EventSystem_GetMusicCategory  (FMOD_EVENTSYSTEM *eventsystem, FMOD_EVENTCATEGORY **category);
FMOD_RESULT FMOD_EventSystem_GetNumCategories  (FMOD_EVENTSYSTEM *eventsystem, int *numcategories);
FMOD_RESULT FMOD_EventSystem_GetGroup          (FMOD_EVENTSYSTEM *eventsystem, const char *name, FMOD_BOOL cacheevents, FMOD_EVENTGROUP **group);
FMOD_RESULT FMOD_EventSystem_GetEvent          (FMOD_EVENTSYSTEM *eventsystem, const char *name, FMOD_EVENT_MODE mode, FMOD_EVENT **event);
FMOD_RESULT FMOD_EventSystem_GetEventBySystemID(FMOD_EVENTSYSTEM *eventsystem, unsigned int systemid, FMOD_EVENT_MODE mode, FMOD_EVENT **event);
FMOD_RESULT FMOD_EventSystem_GetEventByGUID    (FMOD_EVENTSYSTEM *eventsystem, const FMOD_GUID *guid, FMOD_EVENT_MODE mode, FMOD_EVENT **event);
FMOD_RESULT FMOD_EventSystem_GetEventByGUIDString(FMOD_EVENTSYSTEM *eventsystem, const char *guid, FMOD_EVENT_MODE mode, FMOD_EVENT **event);
FMOD_RESULT FMOD_EventSystem_GetNumEvents      (FMOD_EVENTSYSTEM *eventsystem, int *numevents);



FMOD_RESULT FMOD_EventSystem_SetReverbProperties(FMOD_EVENTSYSTEM *eventsystem, const FMOD_REVERB_PROPERTIES *props);
FMOD_RESULT FMOD_EventSystem_GetReverbProperties(FMOD_EVENTSYSTEM *eventsystem, FMOD_REVERB_PROPERTIES *props);

FMOD_RESULT FMOD_EventSystem_GetReverbPreset   (FMOD_EVENTSYSTEM *eventsystem, const char *name, FMOD_REVERB_PROPERTIES *props, int *index);
FMOD_RESULT FMOD_EventSystem_GetReverbPresetByIndex(FMOD_EVENTSYSTEM *eventsystem, const int index, FMOD_REVERB_PROPERTIES *props, char **name);
FMOD_RESULT FMOD_EventSystem_GetNumReverbPresets(FMOD_EVENTSYSTEM *eventsystem, int *numpresets);

FMOD_RESULT FMOD_EventSystem_CreateReverb      (FMOD_EVENTSYSTEM *eventsystem, FMOD_EVENTREVERB **reverb);
FMOD_RESULT FMOD_EventSystem_SetReverbAmbientProperties(FMOD_EVENTSYSTEM *eventsystem, FMOD_REVERB_PROPERTIES *props);
FMOD_RESULT FMOD_EventSystem_GetReverbAmbientProperties(FMOD_EVENTSYSTEM *eventsystem, FMOD_REVERB_PROPERTIES *props);



FMOD_RESULT FMOD_EventSystem_CreateEventQueue  (FMOD_EVENTSYSTEM *eventsystem, FMOD_EVENTQUEUE **queue);
FMOD_RESULT FMOD_EventSystem_CreateEventQueueEntry(FMOD_EVENTSYSTEM *eventsystem, FMOD_EVENT *event, FMOD_EVENTQUEUEENTRY **entry);



FMOD_RESULT FMOD_EventSystem_Set3DNumListeners (FMOD_EVENTSYSTEM *eventsystem, int numlisteners);
FMOD_RESULT FMOD_EventSystem_Get3DNumListeners (FMOD_EVENTSYSTEM *eventsystem, int *numlisteners);
FMOD_RESULT FMOD_EventSystem_Set3DListenerAttributes(FMOD_EVENTSYSTEM *eventsystem, int listener, const FMOD_VECTOR *pos, const FMOD_VECTOR *vel, const FMOD_VECTOR *forward, const FMOD_VECTOR *up);
FMOD_RESULT FMOD_EventSystem_Get3DListenerAttributes(FMOD_EVENTSYSTEM *eventsystem, int listener, FMOD_VECTOR *pos, FMOD_VECTOR *vel, FMOD_VECTOR *forward, FMOD_VECTOR *up);



FMOD_RESULT FMOD_EventSystem_SetUserData       (FMOD_EVENTSYSTEM *eventsystem, void *userdata);
FMOD_RESULT FMOD_EventSystem_GetUserData       (FMOD_EVENTSYSTEM *eventsystem, void **userdata);



FMOD_RESULT FMOD_EventSystem_PreloadFSB        (FMOD_EVENTSYSTEM *eventsystem, const char *filename, int streaminstance, FMOD_SOUND *sound, FMOD_BOOL unloadprevious);
FMOD_RESULT FMOD_EventSystem_UnloadFSB         (FMOD_EVENTSYSTEM *eventsystem, const char *filename, int streaminstance);

FMOD_RESULT FMOD_EventSystem_GetMemoryInfo     (FMOD_EVENTSYSTEM *eventsystem, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_EventProject_Release          (FMOD_EVENTPROJECT *eventproject);
FMOD_RESULT FMOD_EventProject_GetInfo          (FMOD_EVENTPROJECT *eventproject, FMOD_EVENT_PROJECTINFO *info);
FMOD_RESULT FMOD_EventProject_GetGroup         (FMOD_EVENTPROJECT *eventproject, const char *name, FMOD_BOOL cacheevents, FMOD_EVENTGROUP **group);
FMOD_RESULT FMOD_EventProject_GetGroupByIndex  (FMOD_EVENTPROJECT *eventproject, int index, FMOD_BOOL cacheevents, FMOD_EVENTGROUP **group);
FMOD_RESULT FMOD_EventProject_GetNumGroups     (FMOD_EVENTPROJECT *eventproject, int *numgroups);
FMOD_RESULT FMOD_EventProject_GetEvent         (FMOD_EVENTPROJECT *eventproject, const char *name, FMOD_EVENT_MODE mode, FMOD_EVENT **event);
FMOD_RESULT FMOD_EventProject_GetEventByProjectID(FMOD_EVENTPROJECT *eventproject, unsigned int projectid, FMOD_EVENT_MODE mode, FMOD_EVENT **event);
FMOD_RESULT FMOD_EventProject_GetNumEvents     (FMOD_EVENTPROJECT *eventproject, int *numevents);
FMOD_RESULT FMOD_EventProject_LoadSampleData   (FMOD_EVENTPROJECT *eventproject, int *eventid_array, int sizeof_eventid_array, char **groupname_array, int sizeof_groupname_array, FMOD_EVENT_MODE eventmode);
FMOD_RESULT FMOD_EventProject_StopAllEvents    (FMOD_EVENTPROJECT *eventproject, FMOD_BOOL immediate);
FMOD_RESULT FMOD_EventProject_CancelAllLoads   (FMOD_EVENTPROJECT *eventproject);
FMOD_RESULT FMOD_EventProject_SetUserData      (FMOD_EVENTPROJECT *eventproject, void *userdata);
FMOD_RESULT FMOD_EventProject_GetUserData      (FMOD_EVENTPROJECT *eventproject, void **userdata);

FMOD_RESULT FMOD_EventProject_GetMemoryInfo    (FMOD_EVENTPROJECT *eventproject, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_EventGroup_GetInfo            (FMOD_EVENTGROUP *eventgroup, int *index, char **name);
FMOD_RESULT FMOD_EventGroup_LoadEventData      (FMOD_EVENTGROUP *eventgroup, FMOD_EVENT_RESOURCE resource, FMOD_EVENT_MODE mode);
FMOD_RESULT FMOD_EventGroup_FreeEventData      (FMOD_EVENTGROUP *eventgroup, FMOD_EVENT *event, FMOD_BOOL waituntilready);
FMOD_RESULT FMOD_EventGroup_GetGroup           (FMOD_EVENTGROUP *eventgroup, const char *name, FMOD_BOOL cacheevents, FMOD_EVENTGROUP **group);
FMOD_RESULT FMOD_EventGroup_GetGroupByIndex    (FMOD_EVENTGROUP *eventgroup, int index, FMOD_BOOL cacheevents, FMOD_EVENTGROUP **group);
FMOD_RESULT FMOD_EventGroup_GetParentGroup     (FMOD_EVENTGROUP *eventgroup, FMOD_EVENTGROUP **group);
FMOD_RESULT FMOD_EventGroup_GetParentProject   (FMOD_EVENTGROUP *eventgroup, FMOD_EVENTPROJECT **project);
FMOD_RESULT FMOD_EventGroup_GetNumGroups       (FMOD_EVENTGROUP *eventgroup, int *numgroups);
FMOD_RESULT FMOD_EventGroup_GetEvent           (FMOD_EVENTGROUP *eventgroup, const char *name, FMOD_EVENT_MODE mode, FMOD_EVENT **event);
FMOD_RESULT FMOD_EventGroup_GetEventByIndex    (FMOD_EVENTGROUP *eventgroup, int index, FMOD_EVENT_MODE mode, FMOD_EVENT **event);
FMOD_RESULT FMOD_EventGroup_GetNumEvents       (FMOD_EVENTGROUP *eventgroup, int *numevents);
FMOD_RESULT FMOD_EventGroup_GetProperty        (FMOD_EVENTGROUP *eventgroup, const char *propertyname, void *value);
FMOD_RESULT FMOD_EventGroup_GetPropertyByIndex (FMOD_EVENTGROUP *eventgroup, int propertyindex, void *value);
FMOD_RESULT FMOD_EventGroup_GetNumProperties   (FMOD_EVENTGROUP *eventgroup, int *numproperties);
FMOD_RESULT FMOD_EventGroup_GetState           (FMOD_EVENTGROUP *eventgroup, FMOD_EVENT_STATE *state);
FMOD_RESULT FMOD_EventGroup_SetUserData        (FMOD_EVENTGROUP *eventgroup, void *userdata);
FMOD_RESULT FMOD_EventGroup_GetUserData        (FMOD_EVENTGROUP *eventgroup, void **userdata);

FMOD_RESULT FMOD_EventGroup_GetMemoryInfo      (FMOD_EVENTGROUP *eventgroup, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_EventCategory_GetInfo         (FMOD_EVENTCATEGORY *eventcategory, int *index, char **name);
FMOD_RESULT FMOD_EventCategory_GetCategory     (FMOD_EVENTCATEGORY *eventcategory, const char *name, FMOD_EVENTCATEGORY **category);
FMOD_RESULT FMOD_EventCategory_GetCategoryByIndex(FMOD_EVENTCATEGORY *eventcategory, int index, FMOD_EVENTCATEGORY **category);
FMOD_RESULT FMOD_EventCategory_GetNumCategories(FMOD_EVENTCATEGORY *eventcategory, int *numcategories);
FMOD_RESULT FMOD_EventCategory_GetEventByIndex (FMOD_EVENTCATEGORY *eventcategory, int index, FMOD_EVENT_MODE mode, FMOD_EVENT **event);
FMOD_RESULT FMOD_EventCategory_GetNumEvents    (FMOD_EVENTCATEGORY *eventcategory, int *numevents);
FMOD_RESULT FMOD_EventCategory_GetParentCategory(FMOD_EVENTCATEGORY *eventcategory, FMOD_EVENTCATEGORY **category);

FMOD_RESULT FMOD_EventCategory_StopAllEvents   (FMOD_EVENTCATEGORY *eventcategory);
FMOD_RESULT FMOD_EventCategory_SetVolume       (FMOD_EVENTCATEGORY *eventcategory, float volume);
FMOD_RESULT FMOD_EventCategory_GetVolume       (FMOD_EVENTCATEGORY *eventcategory, float *volume);
FMOD_RESULT FMOD_EventCategory_SetPitch        (FMOD_EVENTCATEGORY *eventcategory, float pitch, FMOD_EVENT_PITCHUNITS units);
FMOD_RESULT FMOD_EventCategory_GetPitch        (FMOD_EVENTCATEGORY *eventcategory, float *pitch, FMOD_EVENT_PITCHUNITS units);
FMOD_RESULT FMOD_EventCategory_SetPaused       (FMOD_EVENTCATEGORY *eventcategory, FMOD_BOOL paused);
FMOD_RESULT FMOD_EventCategory_GetPaused       (FMOD_EVENTCATEGORY *eventcategory, FMOD_BOOL *paused);
FMOD_RESULT FMOD_EventCategory_SetMute         (FMOD_EVENTCATEGORY *eventcategory, FMOD_BOOL mute);
FMOD_RESULT FMOD_EventCategory_GetMute         (FMOD_EVENTCATEGORY *eventcategory, FMOD_BOOL *mute);
FMOD_RESULT FMOD_EventCategory_GetChannelGroup (FMOD_EVENTCATEGORY *eventcategory, FMOD_CHANNELGROUP **channelgroup);
FMOD_RESULT FMOD_EventCategory_SetUserData     (FMOD_EVENTCATEGORY *eventcategory, void *userdata);
FMOD_RESULT FMOD_EventCategory_GetUserData     (FMOD_EVENTCATEGORY *eventcategory, void **userdata);

FMOD_RESULT FMOD_EventCategory_GetMemoryInfo   (FMOD_EVENTCATEGORY *eventcategory, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_Event_Release                 (FMOD_EVENT *event, FMOD_BOOL freeeventdata, FMOD_BOOL waituntilready);

FMOD_RESULT FMOD_Event_Start                   (FMOD_EVENT *event);
FMOD_RESULT FMOD_Event_Stop                    (FMOD_EVENT *event, FMOD_BOOL immediate);

FMOD_RESULT FMOD_Event_GetInfo                 (FMOD_EVENT *event, int *index, char **name, FMOD_EVENT_INFO *info);
FMOD_RESULT FMOD_Event_GetState                (FMOD_EVENT *event, FMOD_EVENT_STATE *state);
FMOD_RESULT FMOD_Event_GetParentGroup          (FMOD_EVENT *event, FMOD_EVENTGROUP **group);
FMOD_RESULT FMOD_Event_GetChannelGroup         (FMOD_EVENT *event, FMOD_CHANNELGROUP **channelgroup);
FMOD_RESULT FMOD_Event_SetCallback             (FMOD_EVENT *event, FMOD_EVENT_CALLBACK callback, void *userdata);

FMOD_RESULT FMOD_Event_GetParameter            (FMOD_EVENT *event, const char *name, FMOD_EVENTPARAMETER **parameter);
FMOD_RESULT FMOD_Event_GetParameterByIndex     (FMOD_EVENT *event, int index, FMOD_EVENTPARAMETER **parameter);
FMOD_RESULT FMOD_Event_GetNumParameters        (FMOD_EVENT *event, int *numparameters);
FMOD_RESULT FMOD_Event_GetProperty             (FMOD_EVENT *event, const char *propertyname, void *value, FMOD_BOOL this_instance);
FMOD_RESULT FMOD_Event_GetPropertyByIndex      (FMOD_EVENT *event, int propertyindex, void *value, FMOD_BOOL this_instance);
FMOD_RESULT FMOD_Event_SetProperty             (FMOD_EVENT *event, const char *propertyname, void *value, FMOD_BOOL this_instance);
FMOD_RESULT FMOD_Event_SetPropertyByIndex      (FMOD_EVENT *event, int propertyindex, void *value, FMOD_BOOL this_instance);
FMOD_RESULT FMOD_Event_GetNumProperties        (FMOD_EVENT *event, int *numproperties);
FMOD_RESULT FMOD_Event_GetPropertyInfo         (FMOD_EVENT *event, int *propertyindex, char **propertyname, FMOD_EVENTPROPERTY_TYPE *type);
FMOD_RESULT FMOD_Event_GetCategory             (FMOD_EVENT *event, FMOD_EVENTCATEGORY **category);

FMOD_RESULT FMOD_Event_SetVolume               (FMOD_EVENT *event, float volume);
FMOD_RESULT FMOD_Event_GetVolume               (FMOD_EVENT *event, float *volume);
FMOD_RESULT FMOD_Event_SetPitch                (FMOD_EVENT *event, float pitch, FMOD_EVENT_PITCHUNITS units);
FMOD_RESULT FMOD_Event_GetPitch                (FMOD_EVENT *event, float *pitch, FMOD_EVENT_PITCHUNITS units);
FMOD_RESULT FMOD_Event_SetPaused               (FMOD_EVENT *event, FMOD_BOOL paused);
FMOD_RESULT FMOD_Event_GetPaused               (FMOD_EVENT *event, FMOD_BOOL *paused);
FMOD_RESULT FMOD_Event_SetMute                 (FMOD_EVENT *event, FMOD_BOOL mute);
FMOD_RESULT FMOD_Event_GetMute                 (FMOD_EVENT *event, FMOD_BOOL *mute);
FMOD_RESULT FMOD_Event_Set3DAttributes         (FMOD_EVENT *event, const FMOD_VECTOR *position, const FMOD_VECTOR *velocity, const FMOD_VECTOR *orientation);
FMOD_RESULT FMOD_Event_Get3DAttributes         (FMOD_EVENT *event, FMOD_VECTOR *position, FMOD_VECTOR *velocity, FMOD_VECTOR *orientation);
FMOD_RESULT FMOD_Event_Set3DOcclusion          (FMOD_EVENT *event, float directocclusion, float reverbocclusion);
FMOD_RESULT FMOD_Event_Get3DOcclusion          (FMOD_EVENT *event, float *directocclusion, float *reverbocclusion);
FMOD_RESULT FMOD_Event_SetReverbProperties     (FMOD_EVENT *event, const FMOD_REVERB_CHANNELPROPERTIES *props);
FMOD_RESULT FMOD_Event_GetReverbProperties     (FMOD_EVENT *event, FMOD_REVERB_CHANNELPROPERTIES *props);
FMOD_RESULT FMOD_Event_SetUserData             (FMOD_EVENT *event, void *userdata);
FMOD_RESULT FMOD_Event_GetUserData             (FMOD_EVENT *event, void **userdata);

FMOD_RESULT FMOD_Event_GetMemoryInfo           (FMOD_EVENT *event, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_EventParameter_GetInfo        (FMOD_EVENTPARAMETER *eventparameter, int *index, char **name);
FMOD_RESULT FMOD_EventParameter_GetRange       (FMOD_EVENTPARAMETER *eventparameter, float *rangemin, float *rangemax);
FMOD_RESULT FMOD_EventParameter_SetValue       (FMOD_EVENTPARAMETER *eventparameter, float value);
FMOD_RESULT FMOD_EventParameter_GetValue       (FMOD_EVENTPARAMETER *eventparameter, float *value);
FMOD_RESULT FMOD_EventParameter_SetVelocity    (FMOD_EVENTPARAMETER *eventparameter, float value);
FMOD_RESULT FMOD_EventParameter_GetVelocity    (FMOD_EVENTPARAMETER *eventparameter, float *value);
FMOD_RESULT FMOD_EventParameter_SetSeekSpeed   (FMOD_EVENTPARAMETER *eventparameter, float value);
FMOD_RESULT FMOD_EventParameter_GetSeekSpeed   (FMOD_EVENTPARAMETER *eventparameter, float *value);
FMOD_RESULT FMOD_EventParameter_SetUserData    (FMOD_EVENTPARAMETER *eventparameter, void *userdata);
FMOD_RESULT FMOD_EventParameter_GetUserData    (FMOD_EVENTPARAMETER *eventparameter, void **userdata);
FMOD_RESULT FMOD_EventParameter_KeyOff         (FMOD_EVENTPARAMETER *eventparameter);
FMOD_RESULT FMOD_EventParameter_DisableAutomation(FMOD_EVENTPARAMETER *eventparameter, FMOD_BOOL disable);

FMOD_RESULT FMOD_EventParameter_GetMemoryInfo  (FMOD_EVENTPARAMETER *eventparameter, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_EventReverb_Release           (FMOD_EVENTREVERB *eventreverb);
FMOD_RESULT FMOD_EventReverb_Set3DAttributes   (FMOD_EVENTREVERB *eventreverb, const FMOD_VECTOR *position, float mindistance, float maxdistance);
FMOD_RESULT FMOD_EventReverb_Get3DAttributes   (FMOD_EVENTREVERB *eventreverb, FMOD_VECTOR *position, float *mindistance, float *maxdistance);
FMOD_RESULT FMOD_EventReverb_SetProperties     (FMOD_EVENTREVERB *eventreverb, const FMOD_REVERB_PROPERTIES *props);
FMOD_RESULT FMOD_EventReverb_GetProperties     (FMOD_EVENTREVERB *eventreverb, FMOD_REVERB_PROPERTIES *props);
FMOD_RESULT FMOD_EventReverb_SetActive         (FMOD_EVENTREVERB *eventreverb, FMOD_BOOL active);
FMOD_RESULT FMOD_EventReverb_GetActive         (FMOD_EVENTREVERB *eventreverb, FMOD_BOOL *active);
FMOD_RESULT FMOD_EventReverb_SetUserData       (FMOD_EVENTREVERB *eventreverb, void *userdata);
FMOD_RESULT FMOD_EventReverb_GetUserData       (FMOD_EVENTREVERB *eventreverb, void **userdata);

FMOD_RESULT FMOD_EventReverb_GetMemoryInfo     (FMOD_EVENTREVERB *eventreverb, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_EventQueue_Release            (FMOD_EVENTQUEUE *eventqueue);
FMOD_RESULT FMOD_EventQueue_Add                (FMOD_EVENTQUEUE *eventqueue, FMOD_EVENTQUEUEENTRY *entry, FMOD_BOOL allow_duplicates);
FMOD_RESULT FMOD_EventQueue_Remove             (FMOD_EVENTQUEUE *eventqueue, FMOD_EVENTQUEUEENTRY *entry);
FMOD_RESULT FMOD_EventQueue_RemoveHead         (FMOD_EVENTQUEUE *eventqueue);
FMOD_RESULT FMOD_EventQueue_Clear              (FMOD_EVENTQUEUE *eventqueue, FMOD_BOOL stopallevents);
FMOD_RESULT FMOD_EventQueue_FindFirstEntry     (FMOD_EVENTQUEUE *eventqueue, FMOD_EVENTQUEUEENTRY **entry);
FMOD_RESULT FMOD_EventQueue_FindNextEntry      (FMOD_EVENTQUEUE *eventqueue, FMOD_EVENTQUEUEENTRY **entry);
FMOD_RESULT FMOD_EventQueue_SetPaused          (FMOD_EVENTQUEUE *eventqueue, FMOD_BOOL paused);
FMOD_RESULT FMOD_EventQueue_GetPaused          (FMOD_EVENTQUEUE *eventqueue, FMOD_BOOL *paused);
FMOD_RESULT FMOD_EventQueue_IncludeDuckingCategory(FMOD_EVENTQUEUE *eventqueue, FMOD_EVENTCATEGORY *category, float ducked_volume, float unducked_volume, unsigned int duck_time, unsigned int unduck_time);
FMOD_RESULT FMOD_EventQueue_ExcludeDuckingCategory(FMOD_EVENTQUEUE *eventqueue, FMOD_EVENTCATEGORY *category);
FMOD_RESULT FMOD_EventQueue_SetCallback        (FMOD_EVENTQUEUE *eventqueue, FMOD_EVENTQUEUE_CALLBACK callback, void *callbackuserdata);
FMOD_RESULT FMOD_EventQueue_SetUserData        (FMOD_EVENTQUEUE *eventqueue, void *userdata);
FMOD_RESULT FMOD_EventQueue_GetUserData        (FMOD_EVENTQUEUE *eventqueue, void **userdata);
FMOD_RESULT FMOD_EventQueue_Dump               (FMOD_EVENTQUEUE *eventqueue);

FMOD_RESULT FMOD_EventQueue_GetMemoryInfo      (FMOD_EVENTQUEUE *eventqueue, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_EventQueueEntry_Release       (FMOD_EVENTQUEUEENTRY *eventqueueentry);
FMOD_RESULT FMOD_EventQueueEntry_GetInfoOnlyEvent(FMOD_EVENTQUEUEENTRY *eventqueueentry, FMOD_EVENT **infoonlyevent);
FMOD_RESULT FMOD_EventQueueEntry_GetRealEvent  (FMOD_EVENTQUEUEENTRY *eventqueueentry, FMOD_EVENT **realevent);
FMOD_RESULT FMOD_EventQueueEntry_SetPriority   (FMOD_EVENTQUEUEENTRY *eventqueueentry, unsigned char priority);
FMOD_RESULT FMOD_EventQueueEntry_GetPriority   (FMOD_EVENTQUEUEENTRY *eventqueueentry, unsigned char *priority);
FMOD_RESULT FMOD_EventQueueEntry_SetExpiryTime (FMOD_EVENTQUEUEENTRY *eventqueueentry, unsigned int expirytime);
FMOD_RESULT FMOD_EventQueueEntry_GetExpiryTime (FMOD_EVENTQUEUEENTRY *eventqueueentry, unsigned int *expirytime);
FMOD_RESULT FMOD_EventQueueEntry_SetDelayTime  (FMOD_EVENTQUEUEENTRY *eventqueueentry, unsigned int delay);
FMOD_RESULT FMOD_EventQueueEntry_GetDelayTime  (FMOD_EVENTQUEUEENTRY *eventqueueentry, unsigned int *delay);
FMOD_RESULT FMOD_EventQueueEntry_SetInterrupt  (FMOD_EVENTQUEUEENTRY *eventqueueentry, FMOD_BOOL interrupt);
FMOD_RESULT FMOD_EventQueueEntry_GetInterrupt  (FMOD_EVENTQUEUEENTRY *eventqueueentry, FMOD_BOOL *interrupt);
FMOD_RESULT FMOD_EventQueueEntry_SetCrossfadeTime(FMOD_EVENTQUEUEENTRY *eventqueueentry, int crossfade);
FMOD_RESULT FMOD_EventQueueEntry_GetCrossfadeTime(FMOD_EVENTQUEUEENTRY *eventqueueentry, int *crossfade);
FMOD_RESULT FMOD_EventQueueEntry_SetUserData   (FMOD_EVENTQUEUEENTRY *eventqueueentry, void *userdata);
FMOD_RESULT FMOD_EventQueueEntry_GetUserData   (FMOD_EVENTQUEUEENTRY *eventqueueentry, void **userdata);

FMOD_RESULT FMOD_EventQueueEntry_GetMemoryInfo (FMOD_EVENTQUEUEENTRY *eventqueueentry, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_MusicSystem_Reset             (FMOD_MUSICSYSTEM *musicsystem);
FMOD_RESULT FMOD_MusicSystem_SetVolume         (FMOD_MUSICSYSTEM *musicsystem, float volume);
FMOD_RESULT FMOD_MusicSystem_GetVolume         (FMOD_MUSICSYSTEM *musicsystem, float *volume);
FMOD_RESULT FMOD_MusicSystem_SetReverbProperties(FMOD_MUSICSYSTEM *musicsystem, const FMOD_REVERB_CHANNELPROPERTIES *props);
FMOD_RESULT FMOD_MusicSystem_GetReverbProperties(FMOD_MUSICSYSTEM *musicsystem, FMOD_REVERB_CHANNELPROPERTIES *props);
FMOD_RESULT FMOD_MusicSystem_SetPaused         (FMOD_MUSICSYSTEM *musicsystem, FMOD_BOOL paused);
FMOD_RESULT FMOD_MusicSystem_GetPaused         (FMOD_MUSICSYSTEM *musicsystem, FMOD_BOOL *paused);
FMOD_RESULT FMOD_MusicSystem_SetMute           (FMOD_MUSICSYSTEM *musicsystem, FMOD_BOOL mute);
FMOD_RESULT FMOD_MusicSystem_GetMute           (FMOD_MUSICSYSTEM *musicsystem, FMOD_BOOL *mute);
FMOD_RESULT FMOD_MusicSystem_GetInfo           (FMOD_MUSICSYSTEM *musicsystem, FMOD_MUSIC_INFO *info);
FMOD_RESULT FMOD_MusicSystem_PromptCue         (FMOD_MUSICSYSTEM *musicsystem, FMOD_MUSIC_CUE_ID id);
FMOD_RESULT FMOD_MusicSystem_PrepareCue        (FMOD_MUSICSYSTEM *musicsystem, FMOD_MUSIC_CUE_ID id, FMOD_MUSICPROMPT **prompt);
FMOD_RESULT FMOD_MusicSystem_GetParameterValue (FMOD_MUSICSYSTEM *musicsystem, FMOD_MUSIC_PARAM_ID id, float *parameter);
FMOD_RESULT FMOD_MusicSystem_SetParameterValue (FMOD_MUSICSYSTEM *musicsystem, FMOD_MUSIC_PARAM_ID id, float parameter);

FMOD_RESULT FMOD_MusicSystem_GetCues           (FMOD_MUSICSYSTEM *musicsystem, FMOD_MUSIC_ITERATOR *it, const char *filter);
FMOD_RESULT FMOD_MusicSystem_GetNextCue        (FMOD_MUSICSYSTEM *musicsystem, FMOD_MUSIC_ITERATOR *it);
FMOD_RESULT FMOD_MusicSystem_GetParameters     (FMOD_MUSICSYSTEM *musicsystem, FMOD_MUSIC_ITERATOR *it, const char *filter);
FMOD_RESULT FMOD_MusicSystem_GetNextParameter  (FMOD_MUSICSYSTEM *musicsystem, FMOD_MUSIC_ITERATOR *it);

FMOD_RESULT FMOD_MusicSystem_LoadSoundData     (FMOD_MUSICSYSTEM *musicsystem, FMOD_EVENT_RESOURCE resource, FMOD_EVENT_MODE mode);
FMOD_RESULT FMOD_MusicSystem_FreeSoundData     (FMOD_MUSICSYSTEM *musicsystem, FMOD_BOOL waituntilready);

FMOD_RESULT FMOD_MusicSystem_SetCallback       (FMOD_MUSICSYSTEM *musicsystem, FMOD_MUSIC_CALLBACK callback, void *userdata);

FMOD_RESULT FMOD_MusicSystem_GetMemoryInfo     (FMOD_MUSICSYSTEM *musicsystem, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);



FMOD_RESULT FMOD_MusicPrompt_Release           (FMOD_MUSICPROMPT *musicprompt);
FMOD_RESULT FMOD_MusicPrompt_Begin             (FMOD_MUSICPROMPT *musicprompt);
FMOD_RESULT FMOD_MusicPrompt_End               (FMOD_MUSICPROMPT *musicprompt);
FMOD_RESULT FMOD_MusicPrompt_IsActive          (FMOD_MUSICPROMPT *musicprompt, FMOD_BOOL *active);

FMOD_RESULT FMOD_MusicPrompt_GetMemoryInfo     (FMOD_MUSICPROMPT *musicprompt, unsigned int memorybits, unsigned int event_memorybits, unsigned int *memoryused, FMOD_MEMORY_USAGE_DETAILS *memoryused_details);































FMOD_RESULT FMOD_NetEventSystem_Init       (FMOD_EVENTSYSTEM *eventsystem, unsigned short port);
FMOD_RESULT FMOD_NetEventSystem_Update     ();
FMOD_RESULT FMOD_NetEventSystem_Shutdown   ();
FMOD_RESULT FMOD_NetEventSystem_GetVersion (unsigned int *version);
































static const char *FMOD_ErrorString(FMOD_RESULT errcode)
{
    switch (errcode)
    {
        case FMOD_ERR_ALREADYLOCKED:          return "Tried to call lock a second time before unlock was called. ";
        case FMOD_ERR_BADCOMMAND:             return "Tried to call a function on a data type that does not allow this type of functionality (ie calling Sound::lock on a streaming sound). ";
        case FMOD_ERR_CDDA_DRIVERS:           return "Neither NTSCSI nor ASPI could be initialised. ";
        case FMOD_ERR_CDDA_INIT:              return "An error occurred while initialising the CDDA subsystem. ";
        case FMOD_ERR_CDDA_INVALID_DEVICE:    return "Couldn't find the specified device. ";
        case FMOD_ERR_CDDA_NOAUDIO:           return "No audio tracks on the specified disc. ";
        case FMOD_ERR_CDDA_NODEVICES:         return "No CD/DVD devices were found. ";
        case FMOD_ERR_CDDA_NODISC:            return "No disc present in the specified drive. ";
        case FMOD_ERR_CDDA_READ:              return "A CDDA read error occurred. ";
        case FMOD_ERR_CHANNEL_ALLOC:          return "Error trying to allocate a channel. ";
        case FMOD_ERR_CHANNEL_STOLEN:         return "The specified channel has been reused to play another sound. ";
        case FMOD_ERR_COM:                    return "A Win32 COM related error occured. COM failed to initialize or a QueryInterface failed meaning a Windows codec or driver was not installed properly. ";
        case FMOD_ERR_DMA:                    return "DMA Failure.  See debug output for more information. ";
        case FMOD_ERR_DSP_CONNECTION:         return "DSP connection error.  Connection possibly caused a cyclic dependancy.  Or tried to connect a tree too many units deep (more than 128). ";
        case FMOD_ERR_DSP_FORMAT:             return "DSP Format error.  A DSP unit may have attempted to connect to this network with the wrong format. ";
        case FMOD_ERR_DSP_NOTFOUND:           return "DSP connection error.  Couldn't find the DSP unit specified. ";
        case FMOD_ERR_DSP_RUNNING:            return "DSP error.  Cannot perform this operation while the network is in the middle of running.  This will most likely happen if a connection or disconnection is attempted in a DSP callback. ";
        case FMOD_ERR_DSP_TOOMANYCONNECTIONS: return "DSP connection error.  The unit being connected to or disconnected should only have 1 input or output. ";
        case FMOD_ERR_EVENT_ALREADY_LOADED:   return "The specified project or bank has already been loaded. Having multiple copies of the same project loaded simultaneously is forbidden. ";
        case FMOD_ERR_EVENT_FAILED:           return "An Event failed to be retrieved, most likely due to 'just fail' being specified as the max playbacks behavior. ";
        case FMOD_ERR_EVENT_GUIDCONFLICT:     return "An event with the same GUID already exists. ";
        case FMOD_ERR_EVENT_INFOONLY:         return "Can't execute this command on an EVENT_INFOONLY event. ";
        case FMOD_ERR_EVENT_INTERNAL:         return "An error occured that wasn't supposed to.  See debug log for reason. ";
        case FMOD_ERR_EVENT_MAXSTREAMS:       return "Event failed because 'Max streams' was hit when FMOD_EVENT_INIT_FAIL_ON_MAXSTREAMS was specified. ";
        case FMOD_ERR_EVENT_MISMATCH:         return "FSB mismatches the FEV it was compiled with, the stream/sample mode it was meant to be created with was different, or the FEV was built for a different platform. ";
        case FMOD_ERR_EVENT_NAMECONFLICT:     return "A category with the same name already exists. ";
        case FMOD_ERR_EVENT_NEEDSSIMPLE:      return "Tried to call a function on a complex event that's only supported by simple events. ";
        case FMOD_ERR_EVENT_NOTFOUND:         return "The requested event, event group, event category or event property could not be found. ";
        case FMOD_ERR_FILE_BAD:               return "Error loading file. ";
        case FMOD_ERR_FILE_COULDNOTSEEK:      return "Couldn't perform seek operation.  This is a limitation of the medium (ie netstreams) or the file format. ";
        case FMOD_ERR_FILE_DISKEJECTED:       return "Media was ejected while reading. ";
        case FMOD_ERR_FILE_EOF:               return "End of file unexpectedly reached while trying to read essential data (truncated data?). ";
        case FMOD_ERR_FILE_NOTFOUND:          return "File not found. ";
        case FMOD_ERR_FILE_UNWANTED:          return "Unwanted file access occured. ";
        case FMOD_ERR_FORMAT:                 return "Unsupported file or audio format. ";
        case FMOD_ERR_HTTP:                   return "A HTTP error occurred. This is a catch-all for HTTP errors not listed elsewhere. ";
        case FMOD_ERR_HTTP_ACCESS:            return "The specified resource requires authentication or is forbidden. ";
        case FMOD_ERR_HTTP_PROXY_AUTH:        return "Proxy authentication is required to access the specified resource. ";
        case FMOD_ERR_HTTP_SERVER_ERROR:      return "A HTTP server error occurred. ";
        case FMOD_ERR_HTTP_TIMEOUT:           return "The HTTP request timed out. ";
        case FMOD_ERR_INITIALIZATION:         return "FMOD was not initialized correctly to support this function. ";
        case FMOD_ERR_INITIALIZED:            return "Cannot call this command after System::init. ";
        case FMOD_ERR_INTERNAL:               return "An error occured that wasn't supposed to.  Contact support. ";
        case FMOD_ERR_INVALID_ADDRESS:        return "On Xbox 360, this memory address passed to FMOD must be physical, (ie allocated with XPhysicalAlloc.) ";
        case FMOD_ERR_INVALID_FLOAT:          return "Value passed in was a NaN, Inf or denormalized float. ";
        case FMOD_ERR_INVALID_HANDLE:         return "An invalid object handle was used. ";
        case FMOD_ERR_INVALID_PARAM:          return "An invalid parameter was passed to this function. ";
        case FMOD_ERR_INVALID_POSITION:       return "An invalid seek position was passed to this function. ";
        case FMOD_ERR_INVALID_SPEAKER:        return "An invalid speaker was passed to this function based on the current speaker mode. ";
        case FMOD_ERR_INVALID_SYNCPOINT:      return "The syncpoint did not come from this sound handle. ";
        case FMOD_ERR_INVALID_VECTOR:         return "The vectors passed in are not unit length, or perpendicular. ";
        case FMOD_ERR_MAXAUDIBLE:             return "Reached maximum audible playback count for this sound's soundgroup. ";
        case FMOD_ERR_MEMORY:                 return "Not enough memory or resources. ";
        case FMOD_ERR_MEMORY_CANTPOINT:       return "Can't use FMOD_OPENMEMORY_POINT on non PCM source data, or non mp3/xma/adpcm data if FMOD_CREATECOMPRESSEDSAMPLE was used. ";
        case FMOD_ERR_MEMORY_SRAM:            return "Not enough memory or resources on console sound ram. ";
        case FMOD_ERR_MUSIC_NOCALLBACK:       return "The music callback is required, but it has not been set. ";
        case FMOD_ERR_MUSIC_NOTFOUND:         return "The requested music entity could not be found. ";
        case FMOD_ERR_MUSIC_UNINITIALIZED:    return "Music system is not initialized probably because no music data is loaded. ";
        case FMOD_ERR_NEEDS2D:                return "Tried to call a command on a 3d sound when the command was meant for 2d sound. ";
        case FMOD_ERR_NEEDS3D:                return "Tried to call a command on a 2d sound when the command was meant for 3d sound. ";
        case FMOD_ERR_NEEDSHARDWARE:          return "Tried to use a feature that requires hardware support.  (ie trying to play a GCADPCM compressed sound in software on Wii). ";
        case FMOD_ERR_NEEDSSOFTWARE:          return "Tried to use a feature that requires the software engine.  Software engine has either been turned off, or command was executed on a hardware channel which does not support this feature. ";
        case FMOD_ERR_NET_CONNECT:            return "Couldn't connect to the specified host. ";
        case FMOD_ERR_NET_SOCKET_ERROR:       return "A socket error occurred.  This is a catch-all for socket-related errors not listed elsewhere. ";
        case FMOD_ERR_NET_URL:                return "The specified URL couldn't be resolved. ";
        case FMOD_ERR_NET_WOULD_BLOCK:        return "Operation on a non-blocking socket could not complete immediately. ";
        case FMOD_ERR_NOTREADY:               return "Operation could not be performed because specified sound/DSP connection is not ready. ";
        case FMOD_ERR_OUTPUT_ALLOCATED:       return "Error initializing output device, but more specifically, the output device is already in use and cannot be reused. ";
        case FMOD_ERR_OUTPUT_CREATEBUFFER:    return "Error creating hardware sound buffer. ";
        case FMOD_ERR_OUTPUT_DRIVERCALL:      return "A call to a standard soundcard driver failed, which could possibly mean a bug in the driver or resources were missing or exhausted. ";
        case FMOD_ERR_OUTPUT_ENUMERATION:     return "Error enumerating the available driver list. List may be inconsistent due to a recent device addition or removal. ";
        case FMOD_ERR_OUTPUT_FORMAT:          return "Soundcard does not support the minimum features needed for this soundsystem (16bit stereo output). ";
        case FMOD_ERR_OUTPUT_INIT:            return "Error initializing output device. ";
        case FMOD_ERR_OUTPUT_NOHARDWARE:      return "FMOD_HARDWARE was specified but the sound card does not have the resources necessary to play it. ";
        case FMOD_ERR_OUTPUT_NOSOFTWARE:      return "Attempted to create a software sound but no software channels were specified in System::init. ";
        case FMOD_ERR_PAN:                    return "Panning only works with mono or stereo sound sources. ";
        case FMOD_ERR_PLUGIN:                 return "An unspecified error has been returned from a 3rd party plugin. ";
        case FMOD_ERR_PLUGIN_INSTANCES:       return "The number of allowed instances of a plugin has been exceeded. ";
        case FMOD_ERR_PLUGIN_MISSING:         return "A requested output, dsp unit type or codec was not available. ";
        case FMOD_ERR_PLUGIN_RESOURCE:        return "A resource that the plugin requires cannot be found. (ie the DLS file for MIDI playback or other DLLs that it needs to load) ";
        case FMOD_ERR_PRELOADED:              return "The specified sound is still in use by the event system, call EventSystem::unloadFSB before trying to release it. ";
        case FMOD_ERR_PROGRAMMERSOUND:        return "The specified sound is still in use by the event system, wait for the event which is using it finish with it. ";
        case FMOD_ERR_RECORD:                 return "An error occured trying to initialize the recording device. ";
        case FMOD_ERR_REVERB_INSTANCE:        return "Specified instance in FMOD_REVERB_PROPERTIES couldn't be set. Most likely because it is an invalid instance number or the reverb doesnt exist. ";
        case FMOD_ERR_SUBSOUNDS:              return "The error occured because the sound referenced contains subsounds when it shouldn't have, or it doesn't contain subsounds when it should have.  The operation may also not be able to be performed on a parent sound, or a parent sound was played without setting up a sentence first. ";
        case FMOD_ERR_SUBSOUND_ALLOCATED:     return "This subsound is already being used by another sound, you cannot have more than one parent to a sound.  Null out the other parent's entry first. ";
        case FMOD_ERR_SUBSOUND_CANTMOVE:      return "Shared subsounds cannot be replaced or moved from their parent stream, such as when the parent stream is an FSB file. ";
        case FMOD_ERR_SUBSOUND_MODE:          return "The subsound's mode bits do not match with the parent sound's mode bits.  See documentation for function that it was called with. ";
        case FMOD_ERR_TAGNOTFOUND:            return "The specified tag could not be found or there are no tags. ";
        case FMOD_ERR_TOOMANYCHANNELS:        return "The sound created exceeds the allowable input channel count.  This can be increased using the maxinputchannels parameter in System::setSoftwareFormat. ";
        case FMOD_ERR_UNIMPLEMENTED:          return "Something in FMOD hasn't been implemented when it should be! contact support! ";
        case FMOD_ERR_UNINITIALIZED:          return "This command failed because System::init or System::setDriver was not called. ";
        case FMOD_ERR_UNSUPPORTED:            return "A command issued was not supported by this object.  Possibly a plugin without certain callbacks specified. ";
        case FMOD_ERR_UPDATE:                 return "An error caused by System::update occured. ";
        case FMOD_ERR_VERSION:                return "The version number of this file format is not supported. ";
        case FMOD_OK:                         return "No errors.";
        default :                             return "Unknown error.";
    };
}




























typedef struct FMOD_OUTPUT_STATE FMOD_OUTPUT_STATE;


typedef FMOD_RESULT (*FMOD_OUTPUT_GETNUMDRIVERSCALLBACK)(FMOD_OUTPUT_STATE *output_state, int *numdrivers);
typedef FMOD_RESULT (*FMOD_OUTPUT_GETDRIVERNAMECALLBACK)(FMOD_OUTPUT_STATE *output_state, int id, char *name, int namelen);
typedef FMOD_RESULT (*FMOD_OUTPUT_GETDRIVERCAPSCALLBACK)(FMOD_OUTPUT_STATE *output_state, int id, FMOD_CAPS *caps);
typedef FMOD_RESULT (*FMOD_OUTPUT_INITCALLBACK)         (FMOD_OUTPUT_STATE *output_state, int selecteddriver, FMOD_INITFLAGS flags, int *outputrate, int outputchannels, FMOD_SOUND_FORMAT *outputformat, int dspbufferlength, int dspnumbuffers, void *extradriverdata);
typedef FMOD_RESULT (*FMOD_OUTPUT_CLOSECALLBACK)        (FMOD_OUTPUT_STATE *output_state);
typedef FMOD_RESULT (*FMOD_OUTPUT_UPDATECALLBACK)       (FMOD_OUTPUT_STATE *output_state);
typedef FMOD_RESULT (*FMOD_OUTPUT_GETHANDLECALLBACK)    (FMOD_OUTPUT_STATE *output_state, void **handle);
typedef FMOD_RESULT (*FMOD_OUTPUT_GETPOSITIONCALLBACK)  (FMOD_OUTPUT_STATE *output_state, unsigned int *pcm);
typedef FMOD_RESULT (*FMOD_OUTPUT_LOCKCALLBACK)         (FMOD_OUTPUT_STATE *output_state, unsigned int offset, unsigned int length, void **ptr1, void **ptr2, unsigned int *len1, unsigned int *len2);
typedef FMOD_RESULT (*FMOD_OUTPUT_UNLOCKCALLBACK)       (FMOD_OUTPUT_STATE *output_state, void *ptr1, void *ptr2, unsigned int len1, unsigned int len2);
typedef FMOD_RESULT (*FMOD_OUTPUT_READFROMMIXER)        (FMOD_OUTPUT_STATE *output_state, void *buffer, unsigned int length);



typedef struct FMOD_OUTPUT_DESCRIPTION
{
    const char                        *name;                  
    unsigned int                       version;               
    int                                polling;               
    FMOD_OUTPUT_GETNUMDRIVERSCALLBACK  getnumdrivers;         
    FMOD_OUTPUT_GETDRIVERNAMECALLBACK  getdrivername;         
    FMOD_OUTPUT_GETDRIVERCAPSCALLBACK  getdrivercaps;         
    FMOD_OUTPUT_INITCALLBACK           init;                  
    FMOD_OUTPUT_CLOSECALLBACK          close;                 
    FMOD_OUTPUT_UPDATECALLBACK         update;                
    FMOD_OUTPUT_GETHANDLECALLBACK      gethandle;             
    FMOD_OUTPUT_GETPOSITIONCALLBACK    getposition;           
    FMOD_OUTPUT_LOCKCALLBACK           lock;                  
    FMOD_OUTPUT_UNLOCKCALLBACK         unlock;                
} FMOD_OUTPUT_DESCRIPTION;



struct FMOD_OUTPUT_STATE
{
    void                      *plugindata;      
    FMOD_OUTPUT_READFROMMIXER  readfrommixer;   
};





