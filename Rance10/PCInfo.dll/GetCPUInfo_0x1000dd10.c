// 函数: GetCPUInfo
// 地址: 0x1000dd10
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t var_a0
int32_t eax_1 = __security_cookie ^ &var_a0

if (arg1 == 0 || arg2 == 0 || arg3 == 0 || arg4 == 0)
    uint32_t* eax_2
    eax_2.b = 0
    @__security_check_cookie@4(eax_1 ^ &var_a0)
    return eax_2

var_a0 = 0
int32_t var_84 = 0
int32_t var_98 = 0
int32_t var_9c = 0
int32_t edx
int32_t edx_1 = sub_1000e140(&var_a0, edx, 0, &var_a0, &var_84, &var_98, &var_9c)
int64_t var_47 = 0
int32_t var_48 = var_84
var_47:3.d = var_9c
int32_t var_3f = 0
var_47:7.d = var_98
var_3f:3.b = 0
int32_t var_6c = 0
int32_t var_94 = 0
var_98 = 0
var_9c = 0
int32_t edx_2 = sub_1000e140(&var_6c, edx_1, 1, &var_6c, &var_94, &var_9c, &var_98)
int32_t eax_8 = var_98
uint32_t ebx
ebx.b = 0
char var_54 = (eax_8 u>> 0x19).b & 1
int32_t eax_10 = var_9c
int32_t var_8c
int32_t var_88

if (var_a0 u>= 7)
    var_8c = 0
    var_a0 = 0
    var_88 = 0
    var_94 = 0
    edx_2 = sub_1000e140(&var_8c, edx_2, 7, &var_8c, &var_a0, &var_88, &var_94)
    ebx.b = (var_a0 u>> 5).b & 1

var_a0 = 0
var_8c = 0
var_88 = 0
var_94 = 0
sub_1000e140(&var_a0, edx_2, 0x80000000, &var_a0, &var_8c, &var_88, &var_94)
int32_t var_38
int32_t edx_3 = _memset(&var_38, 0, 0x31)

if (var_a0 u>= 0x80000004)
    var_a0 = 0
    var_98 = 0
    var_9c = 0
    __builtin_memset(&var_8c, 0, 0x20)
    var_94 = 0
    int32_t var_80
    int32_t var_7c
    int32_t var_78
    int32_t var_74
    int32_t var_70
    sub_1000e140(&var_70, 
        sub_1000e140(&var_80, 
            sub_1000e140(&var_a0, edx_3, 0x80000002, &var_a0, &var_98, &var_9c, &var_84), 
            0x80000003, &var_80, &var_7c, &var_78, &var_74), 
        0x80000004, &var_70, &var_8c, &var_88, &var_94)
    var_38 = var_a0
    int32_t var_34_1 = var_98
    int32_t var_30_1 = var_9c
    int32_t var_2c_1 = var_84
    int32_t var_28_1 = var_80
    int32_t var_24_1 = var_7c
    int32_t var_20_1 = var_78
    int32_t var_1c_1 = var_74
    int32_t var_18_1 = var_70
    int32_t var_14_1 = var_8c
    int32_t var_10_1 = var_88
    int32_t var_c_1 = var_94
    char var_8_1 = 0

(*(*arg1 + 4))(&var_48)
*arg2 = var_6c
uint32_t edx_12 = (((((zx.d(ebx.b) * 2) | (zx.d((eax_10 u>> 0x1c).b) & 1)) * 2)
    | (zx.d((eax_10 u>> 0x14).b) & 1)) * 2) | (zx.d((eax_10 u>> 0x13).b) & 1)
uint32_t edx_20 = (((((((edx_12 * 2) | (zx.d((eax_10 u>> 9).b) & 1)) * 2) | (zx.d(eax_10.b) & 1))
    * 2) | (zx.d((eax_8 u>> 0x1a).b) & 1)) * 2) | zx.d(var_54)
*arg3 = (edx_20 * 2) | (zx.d((eax_8 u>> 0x17).b) & 1)
(*(*arg4 + 4))(&var_38)
int32_t eax_48
eax_48.b = 1
@__security_check_cookie@4(eax_1 ^ &var_a0)
return eax_48
