// 函数: sub_576800
// 地址: 0x576800
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_c = ebx
int32_t result

while (true)
    EnterCriticalSection(*(arg1 + 4))
    
    if (*(arg1 + 0xc) == 0 || *(arg1 + 0x20) != 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    result = LeaveCriticalSection(*(arg1 + 4))
    
    if (ebx.b == 0)
        break
    
    Sleep(1)

return result
