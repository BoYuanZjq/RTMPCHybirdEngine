#ifndef __RTMP_C_COMMON_H__
#define __RTMP_C_COMMON_H__
#include "RTCCommon.h"
#include "LIV_Export.h"

/**
* SDK�İ汾��
*/
LIV_API const char* RTMPC_Version(void);

//** PublishID: X000
// X - Tag,  
// ��һ��0 - codectype=> 0:h264 1:vp8 2:vp9;
// �ڶ���0 - sdptyp=> 0:��rtx��fec 1:��rtx��fec 2:��rtx��fec;
// ������0 - mediatype=> 0:��Ƶ 1:��Ƶ 2:��Ƶ+Data 3:��Ƶ+Data

#ifdef WIN32
#include <string>
LIV_API int  GenRandomString(char*buf, int len);
LIV_API void GetDrive(char*drive);
LIV_API char* GetPath(const char*pp);
LIV_API char* GetRelativePath(const char*pp);
LIV_API void MKDir(const char* filePath);
LIV_API bool DirExist(const char* filePath);
LIV_API bool FileExist(const char* filePath);
LIV_API void DeleteDir(const char* filePath);
LIV_API void DeleteFile(const char* filePath);
LIV_API void DirCopy(const char* filePath, const char* filePathNew);
LIV_API void GetHttpUrl(const char* url, std::string&strHost, int&port, std::string&path);
#endif

#endif	// __RTMP_C_COMMON_H__
