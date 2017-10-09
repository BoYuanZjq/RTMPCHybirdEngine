#ifndef __RTC_COMMON_H__
#define __RTC_COMMON_H__

typedef enum {
    AnyRTC_OK = 0,				// 正常
    AnyRTC_UNKNOW = 1,          // 未知错误
    AnyRTC_EXCEPTION = 2,		// SDK调用异常
	AnyRTC_EXP_UNINIT = 3,		// SDK未初始化
	AnyRTC_EXP_PARAMS_INVALIDE = 4,	// 参数非法
	AnyRTC_EXP_NO_NETWORK = 5,		// 没有网络链接
	AnyRTC_EXP_NOT_FOUND_CAMERA = 6,		// 没有找到摄像头设备
	AnyRTC_EXP_NO_CAMERA_PERMISSION = 7,	// 没有打开摄像头权限
	AnyRTC_EXP_NO_AUDIO_PERMISSION = 8,		// 没有音频录音权限
	AnyRTC_EXP_NOT_SUPPORT_WEBRTC = 9,		// 浏览器不支持原生的webrtc


    AnyRTC_NET_ERR = 100,			// 网络错误
	AnyRTC_NET_DISSCONNECT = 101,	// 网络断开
    AnyRTC_LIVE_ERR	= 102,			// 直播出错

    AnyRTC_BAD_REQ = 201,		// 服务不支持的错误请求
    AnyRTC_AUTH_FAIL = 202,		// 认证失败
    AnyRTC_NO_USER = 203,		// 此开发者信息不存在
    AnyRTC_SQL_ERR = 204,		// 服务器内部数据库错误
    AnyRTC_ARREARS = 205,		// 账号欠费
    AnyRTC_LOCKED = 206,		// 账号被锁定
    AnyRTC_FORCE_EXIT = 207,	// 强制离开
	AnyRTC_ID_INVALIDE = 208,	// AnyRTC ID非法(仅会议和RTCP中检测)
	AnyRTC_SERVICE_CLOSED = 209,// 服务未开通 
	AnyRTC_BUNDLE_ID_ERR = 210,	// Bundle ID不匹配
	AnyRTC_PUB_GONE = 211,		// 订阅的PubID已过期
	AnyRTC_NO_RTC_SVR = 212,	// 没有RTC服务器
}AnyRTCErrorCode;

//连麦
typedef enum {
	RTCLive_OK = 0,				// 正常
	RTCLive_NOT_START = 600,	// 直播未开始
	RTCLive_HOSTER_REJECT,		// 主播拒绝连麦
	RTCLive_LINE_FULL,			// 连麦已满
	RTCLive_CLOSE_ERR,			// 游客关闭错误，onRtmpPlayerClosed
}RTCLiveErrorCode;

//Meet
typedef enum {
	RTCMeet_OK = 0,      // 正常
	RTCMeet_NOT_START = 700,  // 会议未开始
}RTCMeetErrorCode;

//RTCP
typedef enum {
	RTCRtcp_OK = 0,      // 正常
	RTCRtcp_NOT_START = 800,     // 会议未开始
}RTCRtcpErrorCode;

typedef enum {
    RTC_V_1X3 = 0 ,       // Default - One big screen and 3 subscreens
    RTC_V_3X3_auto,       // All screens as same size & auto layout
}RTCVideoLayout;

typedef enum {
    RTMPC_LINE_V_Fullscrn = 0,		// 　默认模式：主播全屏，副主播小屏
    RTMPC_LINE_V_1_equal_others = 1,	// 　主播跟副主播视频大小一致
    RTMPC_LINE_V_1big_3small = 2,		// 　主播大屏（非全屏）副主播小屏
}RTMPCLineVideoLayout;

typedef enum {
    RTMPC_Video_HH = 0,
    RTMPC_Video_Low,
    RTMPC_Video_SD,
    RTMPC_Video_QHD,
    RTMPC_Video_HD,
    RTMPC_Video_720P,
    RTMPC_Video_1080P,
    RTMPC_Video_2K,
    RTMPC_Video_4K,
}RTMPCVideoMode;

typedef enum {
    RTMPC_SCRN_Portrait = 0,
    RTMPC_SCRN_LandscapeRight,
    RTMPC_SCRN_PortraitUpsideDown,
    RTMPC_SCRN_LandscapeLeft,
    RTMPC_SCRN_Auto
}RTMPCScreenOrientation;

typedef enum {
    RTC_SCRN_Portrait = 0,
    RTC_SCRN_LandscapeRight,
    RTC_SCRN_PortraitUpsideDown,
    RTC_SCRN_LandscapeLeft,
    RTC_SCRN_Auto
}RTCScreenOrientation;

typedef enum {
    RTMP_MXV_NULL = 0,
    RTMP_MXV_MAIN,
    RTMP_MXV_B_LEFT,
    RTMP_MXV_B_RIGHT,
    RTMP_MXV_CUSTOM,
}RTMPMixVideoType;

typedef enum {
    RTMP_NA_Nor = 0,		// Normal
    RTMP_NA_Fast,			// When network is bad, we will drop some video frame.
    RTMP_NA_AutoBitrate		// When network is bad, we will adjust video bitrate to match.
    
}RTMPNetAdjustMode;

typedef enum {
    RTMPC_V_T_HOR_LEFT = 0,
    RTMPC_V_T_HOR_CENTER,
    RTMPC_V_T_HOR_RIGHT
}RTMPCVideoTempHor;

typedef enum {
    RTMPC_V_T_VER_TOP = 0,
    RTMPC_V_T_VER_CENTER,
    RTMPC_V_T_VER_BOTTOM
}RTMPCVideoTempVer;

typedef enum {
    RTMPC_V_T_DIR_HOR = 0,
    RTMPC_V_T_DIR_VER
}RTMPCVideoTempDir;

#endif	// __RTC_COMMON_H__
