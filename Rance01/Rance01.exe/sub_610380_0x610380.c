// 函数: sub_610380
// 地址: 0x610380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HIMAGELIST himl = arg1[4]

if (himl != 0)
    ImageList_Destroy(himl)
    int128_t* ecx_1 = arg1[1]
    int128_t* edi_1 = *arg1
    arg1[4] = 0
    
    if (edi_1 != ecx_1)
        int32_t ebx_1 = 0 s>> 2 << 2
        sub_6b49d0(edi_1, ecx_1, ebx_1)
        arg1[1] = ebx_1 + edi_1

int32_t result = *arg1

if (result != 0)
    int32_t __saved_edi_1 = result
    result = sub_6b4d5b()

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
return result
