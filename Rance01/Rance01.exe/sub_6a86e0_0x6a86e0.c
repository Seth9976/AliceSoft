// 函数: sub_6a86e0
// 地址: 0x6a86e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* ecx = arg1[1]
int128_t* esi = *arg1

if (esi != ecx)
    int32_t edi_1 = 0 s>> 2 << 2
    sub_6b49d0(esi, ecx, edi_1)
    arg1[1] = edi_1 + esi

int128_t* ecx_1 = arg1[5]
int128_t* esi_1 = arg1[4]

if (esi_1 != ecx_1)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(esi_1, ecx_1, ebx_1)
    arg1[5] = ebx_1 + esi_1

char* eax_7 = data_797d94

if (sub_5d57f0(eax_7) != 0)
    sub_5d76b0(arg1, *(eax_7 + 0x38))

char* eax_11 = data_797d94

if (sub_5d57f0(eax_11) != 0)
    sub_5d87b0(&arg1[4], *(eax_11 + 0x3c))

return 1
