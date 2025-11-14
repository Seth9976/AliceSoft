// 函数: sub_6315d0
// 地址: 0x6315d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* result = *(arg1 + 0x14)
int128_t* edi = *(arg1 + 0x10)

if (edi != result)
    void* esi_2 = 0
    result = sub_6b49d0(edi, result, esi_2)
    *(arg1 + 0x14) = esi_2 + edi

return result
