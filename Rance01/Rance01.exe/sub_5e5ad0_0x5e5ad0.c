// 函数: sub_5e5ad0
// 地址: 0x5e5ad0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_4_1 = arg3
int32_t edx = *(arg3 + 0x18)
void* ecx = arg3 + 0x18
void* var_4 = ecx

if (edx == 0xffffffff)
    arg1.b = 0
    return arg1

int32_t ebx = *(arg1 + 0x1c)
int32_t ebp = *(arg1 + 0x20)
int32_t esi = *(arg1 + 0x30)
int32_t edi = *(arg1 + 0x2c)

if (*(arg1 + 0xc0) != 0)
    esi = *(ecx + 4)
    ebx = 0
    ebp = 0
    
    if (esi != 0)
        ecx = var_4
        edi = sub_5f9f40(edx)
    else
        edi = 0
    
    if (esi != 0)
        int32_t eax_3 = sub_5f9f90(*ecx)
        ecx = var_4
        esi = eax_3

int32_t var_18 = esi
int32_t var_1c = edi
int32_t var_20 = ebp
int32_t var_24 = ebx

if (sub_5e91c0(ecx) != 0)
    return 1

int32_t var_18_1 = esi
int32_t var_1c_1 = edi
int32_t var_20_1 = ebp
int32_t var_24_1 = ebx
sub_40da60(0x736260)
void* eax_6
eax_6.b = 0
return eax_6
