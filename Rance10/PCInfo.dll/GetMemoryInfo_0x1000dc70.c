// 函数: GetMemoryInfo
// 地址: 0x1000dc70
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

void var_54
int32_t eax_1 = __security_cookie ^ &var_54

if (arg1 == 0 || arg2 == 0)
    int32_t ecx_5 = eax_1
    eax_1.b = 0
    @__security_check_cookie@4(ecx_5 ^ &var_54)
    return eax_1

MEMORYSTATUSEX buffer
buffer.dwLength = 0x40
var_4c
_memset(&var_4c, 0, 0x3c)
GlobalMemoryStatusEx(&buffer)
int32_t esi = buffer.ullTotalPhys.d
int32_t edx = buffer.ullTotalPhys:4.d
*arg2 = (esi - buffer.ullAvailPhys.d) u>> 0x14
    | sbb.d(edx, buffer.ullAvailPhys:4.d, esi u< buffer.ullAvailPhys.d) << 0xc
uint32_t eax_4
eax_4.b = 1
*arg1 = esi u>> 0x14 | edx << 0xc
@__security_check_cookie@4(eax_1 ^ &var_54)
return eax_4
