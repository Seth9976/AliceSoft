// 函数: sub_408a00
// 地址: 0x408a00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_5 = arg1[6]
*arg1 = &chipmunk::CSACT::`vftable'{for `IInterface'}

if (ecx_5 != 0)
    (*(*ecx_5 + 4))()
    arg1[6] = 0

void* result = arg1[0xd]

if (result != 0)
    result = (*(*(result + 4) + 4))()
    arg1[0xd] = 0

int32_t* edi = arg1[0xc]

if (edi != 0)
    sub_40ad30(edi)
    int32_t* var_c_2 = edi
    result = sub_6b4d5b()
    arg1[0xc] = 0

int32_t* ecx_1 = arg1[0xa]

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))()
    arg1[0xa] = 0

int32_t* ecx_2 = arg1[8]

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))()
    arg1[8] = 0

int32_t* ecx_3 = arg1[7]

if (ecx_3 != 0)
    result = (*(*ecx_3 + 4))()
    arg1[7] = 0

int32_t* ecx_4 = arg1[0xe]

if (ecx_4 != 0)
    result = (*(*ecx_4 + 4))()
    arg1[0xe] = 0

return result
