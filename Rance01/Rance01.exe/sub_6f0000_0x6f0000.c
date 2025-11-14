// 函数: sub_6f0000
// 地址: 0x6f0000
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* edx = arg1
char* result = arg2
int32_t var_14 = 0
void* var_18 = arg4
char* var_10 = arg3
bool cond:0_1

do
    int32_t ecx
    ecx.b = *edx
    char* esi_2 = var_18
    *esi_2 = ecx.b
    char* ebx
    ebx.b = *result
    esi_2[1] = ebx.b
    ecx.b = *var_10
    esi_2[2] = ecx.b
    ecx.b = edx[2]
    esi_2[3] = ecx.b
    ecx.b = *result
    esi_2[4] = ecx.b
    char* ecx_1
    ecx_1.b = *var_10
    esi_2[5] = ecx_1.b
    ecx_1.b = edx[4]
    esi_2[6] = ecx_1.b
    ecx_1.b = result[2]
    esi_2[7] = ecx_1.b
    char* ecx_2
    ecx_2.b = var_10[2]
    esi_2[8] = ecx_2.b
    ecx_2.b = edx[6]
    esi_2[9] = ecx_2.b
    ecx_2.b = result[2]
    esi_2[0xa] = ecx_2.b
    char* ecx_3
    ecx_3.b = var_10[2]
    esi_2[0xb] = ecx_3.b
    ecx_3.b = edx[8]
    esi_2[0xc] = ecx_3.b
    ecx_3.b = result[4]
    esi_2[0xd] = ecx_3.b
    char* ecx_4
    ecx_4.b = var_10[4]
    esi_2[0xe] = ecx_4.b
    ecx_4.b = edx[0xa]
    esi_2[0xf] = ecx_4.b
    ecx_4.b = result[4]
    esi_2[0x10] = ecx_4.b
    char* ecx_5
    ecx_5.b = var_10[4]
    esi_2[0x11] = ecx_5.b
    ecx_5.b = edx[0xc]
    esi_2[0x12] = ecx_5.b
    ecx_5.b = result[6]
    esi_2[0x13] = ecx_5.b
    char* ecx_6
    ecx_6.b = var_10[6]
    esi_2[0x14] = ecx_6.b
    ecx_6.b = edx[0xe]
    edx = &edx[0x10]
    esi_2[0x15] = ecx_6.b
    ecx_6.b = result[6]
    result = &result[0x10]
    esi_2[0x16] = ecx_6.b
    char* ecx_7
    ecx_7.b = var_10[6]
    esi_2[0x17] = ecx_7.b
    var_10 = &var_10[0x10]
    var_18 = &esi_2[arg5]
    cond:0_1 = var_14 + 1 s< 8
    var_14 += 1
while (cond:0_1)
return result
