// 函数: sub_5ca700
// 地址: 0x5ca700
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[6].b != 0)
    int32_t eax_1 = *arg1
    
    if (eax_1 != 0 && sub_602070(&arg1[7], eax_1 + 4) == 0)
        return false

int32_t __saved_edi_3 = arg1[5]
arg1[6].w = 0

if (__saved_edi_3 != 0)
    int32_t __saved_edi_2 = __saved_edi_3
    sub_6b4d5b()
    arg1[5] = 0

int32_t* ecx = *arg1

if (ecx != 0)
    (**ecx)(1)
    *arg1 = 0

int128_t* result = arg1[2]
int128_t* ebx = arg1[1]

if (ebx != result)
    void* edi_2 = 0
    sub_6b49d0(ebx, result, edi_2)
    arg1[2] = edi_2 + ebx

result.b = 1
return result
