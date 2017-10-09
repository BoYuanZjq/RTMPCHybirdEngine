#ifndef __RTC_CORE_H__
#define __RTC_CORE_H__
#include <string>
#include "LIV_Export.h"

class LIV_API RTCCore
{
public:
	virtual ~RTCCore() {};
	static RTCCore& Inst();

	/**
	* ��ʼ��AnyRTC�Ŀ�������Ϣ(�������:https://www.anyrtc.io)
	* @param:	strDevelopID - ������ID
	* @param:	strAppId - Ӧ��ID
	* @param:	strKey - ��������Կ
	* @param:	strToken - TOKEN
	* @param:	strBundleId - Android��packagename   iOS��bundleid   web��domain
	*/
	virtual void InitEngineWithAnyrtcInfo(const char*strDevelopID, const char*strAppId,
		const char*strKey, const char*trToken, const std::string&strBundleId) = 0;
	/**
	* ����˽���Ʒ����ַ
	* @param:	strSvrAddr - ˽���Ƶ�IP
	* @param:	nSvrPort - ˽���ƵĶ˿�
	*/
	virtual void ConfigServerForPriCloud(const char*strSvrAddr, int nSvrPort) = 0;

	/**
	* �Ƿ��Ǻ���ģʽ
	*/
	virtual bool ScreenIsLandscape() = 0;
	/**
	* ʹ�ú���ģʽ
	*/
	virtual void SetScreenToLandscape() = 0;
	/**
	* ʹ������ģʽ
	*/
	virtual void SetScreenToPortrait() = 0;

	/**
	* ����ֱ��Ϊ��Ƶģʽ
	*/
	virtual void SetLiveToAuidoOnly(bool enabled, bool audioDetect) = 0;
	/**
	* �Ƿ��Ǵ���Ƶֱ��ģʽ
	*/
	virtual bool LiveIsAuidoOnly() = 0;
	/**
	* �Ƿ�����Ƶ���
	*/
	virtual bool LiveIsAudioDetect() = 0;
    
    virtual void UserThreedFilter(bool userThreeFilter) = 0;
    
    virtual bool UserIsThreeFilter() = 0;

	/**
	* ������Ƶ�ɼ��豸
	*/
	virtual void SwitchAudioCapture(const char*strAudioDev) = 0;

	/**
	* ������Ƶ�����豸
	*/
	virtual void SwitchAudioSpeaker(const char*strAudioDev) = 0;

#ifdef WIN32
	/**
	* ��ȡ�豸��Ϣ,����Windowsƽ̨
	*/
	static const int GetAudDevCount();
	static const int GetSpkDevCount();
	static const int GetVidDevCount();
	static const int RefreshVidDevCount();
	static const char* GetAudDevNameByIndex(int index);
	static const char* GetSpkDevNameByIndex(int index);
	static const char* GetVidDevNameByIndex(int index);
#else
	static void SetCameraMirror(bool enabled);
#endif

protected:
	virtual void InitDevice() = 0;

protected:
	RTCCore() {};
};

#endif	// __RT_CORE_H__
