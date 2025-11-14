// 函数: sub_570600
// 地址: 0x570600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = *(arg1 + 4)

if (esi[2].b != 0)
    timeEndPeriod(*esi)
    esi[2].b = 0

int32_t* ptc = *(arg1 + 4)

if (ptc[2].b != 0)
    timeEndPeriod(*ptc)
    ptc[2].b = 0

uint32_t result = timeGetDevCaps(ptc, 8)

if (result == 0)
    result = timeBeginPeriod(*ptc)
    
    if (result == 0)
        ptc[2].b = 1

return result
