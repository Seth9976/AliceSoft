// 函数: sub_55ae70
// 地址: 0x55ae70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* ecx_1 = arg1[1]
int32_t ebp = arg2
int128_t* edi = *arg1

if (edi != ecx_1)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(edi, ecx_1, ebx_1)
    arg1[1] = ebx_1 + edi

int128_t* ecx = arg1[1]
int32_t eax_4 = *arg1
int32_t edx_2 = (ecx - eax_4) s>> 2
arg2 = 0

if (ebp u> edx_2)
    sub_51af90(ebp - edx_2, arg1, ecx, &arg2)
else if (ebp u< edx_2)
    int128_t* edi_1 = eax_4 + (ebp << 2)
    
    if (edi_1 != ecx)
        void* ebx_3 = 0 s>> 2 << 2
        sub_6b49d0(edi_1, ecx, ebx_3)
        arg1[1] = ebx_3 + edi_1

int128_t* result = arg1[5]
int128_t* ebx_5 = arg1[4]

if (ebx_5 != result)
    void* edi_3 = 0
    result = sub_6b49d0(ebx_5, result, edi_3)
    arg1[5] = edi_3 + ebx_5

return result
