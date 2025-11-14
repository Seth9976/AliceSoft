// 函数: sub_6ef900
// 地址: 0x6ef900
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
    esi_2[0x15] = ecx_6.b
    ecx_6.b = result[6]
    esi_2[0x16] = ecx_6.b
    char* ecx_7
    ecx_7.b = var_10[6]
    esi_2[0x17] = ecx_7.b
    ecx_7.b = edx[0x10]
    void* esi_3 = &esi_2[arg5]
    *esi_3 = ecx_7.b
    ecx_7.b = *result
    *(esi_3 + 1) = ecx_7.b
    char* ecx_8
    ecx_8.b = *var_10
    *(esi_3 + 2) = ecx_8.b
    ecx_8.b = edx[0x12]
    *(esi_3 + 3) = ecx_8.b
    ecx_8.b = *result
    *(esi_3 + 4) = ecx_8.b
    char* ecx_9
    ecx_9.b = *var_10
    *(esi_3 + 5) = ecx_9.b
    ecx_9.b = edx[0x14]
    *(esi_3 + 6) = ecx_9.b
    ecx_9.b = result[2]
    *(esi_3 + 7) = ecx_9.b
    char* ecx_10
    ecx_10.b = var_10[2]
    *(esi_3 + 8) = ecx_10.b
    ecx_10.b = edx[0x16]
    *(esi_3 + 9) = ecx_10.b
    ecx_10.b = result[2]
    *(esi_3 + 0xa) = ecx_10.b
    char* ecx_11
    ecx_11.b = var_10[2]
    *(esi_3 + 0xb) = ecx_11.b
    ecx_11.b = edx[0x18]
    *(esi_3 + 0xc) = ecx_11.b
    ecx_11.b = result[4]
    *(esi_3 + 0xd) = ecx_11.b
    char* ecx_12
    ecx_12.b = var_10[4]
    *(esi_3 + 0xe) = ecx_12.b
    ecx_12.b = edx[0x1a]
    *(esi_3 + 0xf) = ecx_12.b
    ecx_12.b = result[4]
    *(esi_3 + 0x10) = ecx_12.b
    char* ecx_13
    ecx_13.b = var_10[4]
    *(esi_3 + 0x11) = ecx_13.b
    ecx_13.b = edx[0x1c]
    *(esi_3 + 0x12) = ecx_13.b
    ecx_13.b = result[6]
    *(esi_3 + 0x13) = ecx_13.b
    char* ecx_14
    ecx_14.b = var_10[6]
    *(esi_3 + 0x14) = ecx_14.b
    ecx_14.b = edx[0x1e]
    edx = &edx[0x20]
    *(esi_3 + 0x15) = ecx_14.b
    ecx_14.b = result[6]
    result = &result[0x10]
    *(esi_3 + 0x16) = ecx_14.b
    char* ecx_15
    ecx_15.b = var_10[6]
    *(esi_3 + 0x17) = ecx_15.b
    var_10 = &var_10[0x10]
    var_18 = esi_3 + arg5
    cond:0_1 = var_14 + 1 s< 4
    var_14 += 1
while (cond:0_1)
return result
