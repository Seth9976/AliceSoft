// 函数: sub_6ca690
// 地址: 0x6ca690
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_6ca520()
int32_t result = sub_6ca370(arg1)

if (result == 0 || result == 1 || result == 2 || result == 3 || result == 4 || result == 5
        || result == 6)
    return result

int32_t edx_1 = data_797c68

if (edx_1 == 5)
    if ((data_797c74 & 0x800000) == 0)
        return 1
    
    return 3

if (edx_1 != 6)
    if (edx_1 != 0xf)
        return 0
    
    if ((data_797c74 & 0x4000000) == 0)
        return 0
    
    return 6

int32_t eax = data_797c74

if ((eax & 0x800000) != 0 && (eax & 0x2000000) == 0)
    return 4

if ((eax & 0x2800000) != 0x2800000)
    return 2

return 5
