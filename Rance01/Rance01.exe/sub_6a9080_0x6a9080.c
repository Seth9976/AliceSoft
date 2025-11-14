// 函数: sub_6a9080
// 地址: 0x6a9080
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* ecx = *(arg1 + 0x14)
int128_t* edi = *(arg1 + 0x10)

if (edi != ecx)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx, ebx_1)
    *(arg1 + 0x14) = ebx_1 + edi

int32_t result = *(arg1 + 0x10)

if (result != 0)
    int32_t __saved_ebx_1 = result
    result = sub_6b4d5b()

*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
return result
