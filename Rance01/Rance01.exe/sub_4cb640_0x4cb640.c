// 函数: sub_4cb640
// 地址: 0x4cb640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &sealengine::CLightParamList::`vftable'
int32_t __saved_edi_3 = arg1[3]

if (__saved_edi_3 != 0)
    int32_t __saved_edi_1 = __saved_edi_3
    sub_6b4d5b()

arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
CRITICAL_SECTION* lpCriticalSection = arg1[2]

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
    sub_6b4d5b()

if ((arg2 & 1) != 0)
    struct sealengine::CLightParamList::VTable** __saved_edi_2 = arg1
    sub_6b4d5b()

return arg1
