// 函数: sub_5d1ea0
// 地址: 0x5d1ea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int128_t* ecx = ebx[1]
int128_t* result = *ebx
void* edx_1 = ecx - result
arg2.b = 0

if (arg1 u> edx_1)
    return sub_5d1f00(result - ecx + arg1, ebx, ecx, &arg2)

if (arg1 u< edx_1)
    void* edi_1 = result + arg1
    
    if (edi_1 != ecx)
        void* esi_2 = 0
        result = sub_6b49d0(edi_1, ecx, esi_2)
        ebx[1] = esi_2 + edi_1

return result
