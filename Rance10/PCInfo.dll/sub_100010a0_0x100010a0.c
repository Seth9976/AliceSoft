// 函数: sub_100010a0
// 地址: 0x100010a0
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

OSVERSIONINFOEXA versionInformation
int32_t var_4 = __security_cookie ^ &versionInformation
int32_t eax_1
eax_1.w = arg1
int32_t var_b4 = 0
versionInformation.dwOSVersionInfoSize = 0x9c
versionInformation.wServicePackMajor = eax_1.w
int32_t dwlConditionMask
int32_t edx
dwlConditionMask, edx = VerSetConditionMask(0, VER_SERVICEPACKMAJOR, 1)
int32_t var_ac = edx
int32_t eax_3 = VerifyVersionInfoA(&versionInformation, VER_SERVICEPACKMAJOR, dwlConditionMask) - 1
int32_t eax_4 = neg.d(eax_3)
@__security_check_cookie@4(var_4 ^ &versionInformation)
return sbb.d(eax_4, eax_4, eax_3 != 0) + 1
