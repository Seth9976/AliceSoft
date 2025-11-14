// 函数: sub_4afa40
// 地址: 0x4afa40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

for (int32_t* i = *(arg1 + 0x40); i != *(arg1 + 0x44); i = &i[1])
    int32_t* ecx_1 = *i
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()

int128_t* ecx_2 = *(arg1 + 0x44)
int128_t* edi = *(arg1 + 0x40)

if (edi != ecx_2)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx_2, ebx_1)
    *(arg1 + 0x44) = ebx_1 + edi

int32_t* ecx_3 = *(arg1 + 0x3c)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))(arg1 + 4)

*(arg1 + 0x3c) = 0
int32_t result = sub_576420(arg1 + 0x18)
void* edi_1 = *(arg1 + 0x14)

if (edi_1 != 0)
    sub_50aaa0(edi_1)
    void* var_10_4 = edi_1
    result = sub_6b4d5b()
    *(arg1 + 0x14) = 0

int32_t* ecx_5 = *(arg1 + 0x10)

if (ecx_5 != 0)
    result = (*(*ecx_5 + 4))()
    *(arg1 + 0x10) = 0

return result
