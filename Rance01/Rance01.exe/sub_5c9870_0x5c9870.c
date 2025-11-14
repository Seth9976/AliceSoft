// 函数: sub_5c9870
// 地址: 0x5c9870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = *arg1
void* edi = arg1[1]
int32_t eax
int32_t edx
edx:eax = muls.dp.d(0x2e8ba2e9, edi - ebx)
int32_t eax_3 = (edi - ebx) s/ 0x2c
int32_t ecx

if (eax_3 u<= 5)
    if (eax_3 u< 5)
        sub_5c9940(arg1, 5 - eax_3)
        struct IALDFile2::aldloader::CALDFile::VTable** edi_2 = arg1[1]
        int32_t var_10_3 = ecx
        int32_t eax_8
        int32_t edx_4
        edx_4:eax_8 = muls.dp.d(0x2e8ba2e9, edi_2 - *arg1)
        int32_t edx_5 = edx_4 s>> 3
        sub_5c9b00(edi_2, 5 - ((edx_5 u>> 0x1f) + edx_5))
        int32_t edi_3 = arg1[1]
        int32_t eax_12
        int32_t edx_6
        edx_6:eax_12 = muls.dp.d(0x2e8ba2e9, edi_3 - *arg1)
        int32_t edx_7 = edx_6 s>> 3
        eax_3 = (edx_7 u>> 0x1f) + edx_7
        arg1[1] = (5 - eax_3) * 0x2c + edi_3
else if (ebx + 0xdc != edi)
    int32_t var_10_1 = ecx
    void* eax_6 = sub_5c9be0(edi, edx s>> 3, ebx + 0xdc, edi)
    int32_t edx_2 = arg1[1]
    int32_t var_18_1 = ecx
    int32_t var_1c = edx_2
    int32_t eax_7 = sub_5c9c30(eax_6, edx_2)
    arg1[1] = eax_6
    return eax_7
return eax_3
