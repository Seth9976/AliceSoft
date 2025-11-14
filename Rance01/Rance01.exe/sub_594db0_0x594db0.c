// 函数: sub_594db0
// 地址: 0x594db0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_4 = edi
sub_5949a0(arg1 + 0x30)
CRITICAL_SECTION* var_c = arg1 + 0x1c
int32_t* esp = &var_c
int32_t result = sub_5949a0(var_c)
int32_t* ecx_1 = *(arg1 + 0x18)

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))()
    *(arg1 + 0x18) = 0

int32_t* ecx_2 = *(arg1 + 0x14)

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))()
    *(arg1 + 0x14) = 0

int32_t* ecx_3 = *(arg1 + 0x10)

if (ecx_3 != 0)
    result = (*(*ecx_3 + 4))()
    *(arg1 + 0x10) = 0

int32_t* ecx_4 = *(arg1 + 0xc)

if (ecx_4 != 0)
    result = (*(*ecx_4 + 4))()
    *(arg1 + 0xc) = 0

int32_t* ecx_5 = *(arg1 + 8)

if (ecx_5 != 0)
    result = (*(*ecx_5 + 4))()
    esp = &var_4
    *(arg1 + 8) = 0

*esp
return result
