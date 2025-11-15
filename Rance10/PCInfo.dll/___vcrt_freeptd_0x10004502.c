// 函数: ___vcrt_freeptd
// 地址: 0x10004502
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

uint32_t result = data_10016020

if (result == 0xffffffff)
    return result

int32_t esi_1 = arg1

if (esi_1 == 0)
    esi_1 = ___vcrt_FlsGetValue(result)
    result = data_10016020

sub_10004e15(result, 0)
return ___vcrt_freefls@4(esi_1)
