// 函数: sub_573920
// 地址: 0x573920
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[4] == 0)
    return 0

int32_t edx = arg1[5]
int32_t result = *(arg2 + 4)
char* esi

if (edx u< 0x10)
    esi = arg1
else
    esi = *arg1

int32_t* esi_1

if (*esi u>= 0x81)
    if (edx u< 0x10)
        esi_1 = arg1
    else
        esi_1 = *arg1

if (*esi u< 0x81 || *esi_1 u> 0x9f)
    if (edx u>= 0x10)
        arg1 = *arg1
    
    if (*arg1 u< 0xe0)
        return (result + 1) s>> 1

return result
