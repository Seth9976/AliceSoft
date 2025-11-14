// 函数: sub_434d40
// 地址: 0x434d40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char result = (*(**(*(arg2 + 0xd0) + 4) + 0x30))(0)

if (result == 0)
    return result

int32_t ebx
int32_t var_2c_1 = ebx
int32_t var_34
int32_t var_30

if (*(arg2 + 0x58) != 1 || *(arg2 + 0xc4) != 1)
    var_30 = 0
    var_34 = 0
else
    var_30 = 0
    var_34 = 1

(*(*arg3 + 0x7c))(0, var_34, var_30)
long double x87_r7 = float.t(0)
int32_t eax_3 = *(arg2 + 0xc8)
float var_c = fconvert.s(x87_r7)
float var_10 = fconvert.s(x87_r7)
char var_8 = 0
float var_14 = fconvert.s(x87_r7)
float var_18 = fconvert.s(x87_r7)
float var_1c = fconvert.s(x87_r7)
float arg_8 = fconvert.s(x87_r7)

if (eax_3 == 0xffffffff)
    goto label_434eaa

bool var_4
var_4.d = eax_3
sub_42e070(arg1, &__return_addr, &var_4)
int32_t* __return_addr_1 = __return_addr

if (__return_addr_1 == *(arg1 + 4))
    goto label_434eaa

void* edi_1 = __return_addr_1[4]

if (edi_1 == 0)
    goto label_434eaa

int32_t __saved_edi
int32_t* esp_1 = &__saved_edi

if ((*(**(*(edi_1 + 0xd0) + 4) + 0x30))(1) != 0)
    (*(*arg3 + 0x7c))(1, 0, 0)
    var_8 = 1
    int32_t eax_9 = (*(**(edi_1 + 4) + 0x10))()
    int32_t eax_11 = (*(**(edi_1 + 4) + 0x14))()
    float ecx_8 = *(edi_1 + 8)
    float edx_7 = *(edi_1 + 0xc)
    var_c = fconvert.s(float.t(ecx_8))
    var_10 = fconvert.s(float.t(edx_7))
    var_14 = fconvert.s(float.t(ecx_8 i+ eax_9))
    var_18 = fconvert.s(float.t(edx_7 i+ eax_11))
    var_1c = fconvert.s(float.t((*(**(*(edi_1 + 0xd0) + 4) + 0x20))()))
    arg_8 = fconvert.s(float.t((*(**(*(edi_1 + 0xd0) + 4) + 0x24))()))
label_434eaa:
    var_4 = *(arg2 + 0x58) == 1
    __return_addr.b = (*(**(arg2 + 4) + 0x28))()
    float var_34_2 = fconvert.s(fconvert.t(arg_8))
    float var_38_1 = fconvert.s(fconvert.t(var_1c))
    int32_t eax_25 = ((*(arg2 + 0x1c) << 8 | zx.d(*(arg2 + 0x24))) << 8 | zx.d(*(arg2 + 0x28))) << 8
        | zx.d(*(arg2 + 0x2c))
    float var_3c_1 = fconvert.s(fconvert.t(var_18))
    float var_40_1 = fconvert.s(fconvert.t(var_14))
    float var_44_1 = fconvert.s(fconvert.t(var_10))
    float var_48_1 = fconvert.s(fconvert.t(var_c))
    int32_t ecx_22 = ((*(arg2 + 0x40) << 8 | zx.d(*(arg2 + 0x34))) << 8 | zx.d(*(arg2 + 0x38))) << 8
        | zx.d(*(arg2 + 0x3c))
    int32_t edx_17 = *(*arg3 + 0x78)
    int32_t ecx_23 = *(arg2 + 0x20)
    int32_t* __return_addr_2 = __return_addr
    int32_t var_60 = var_4.d
    
    if (edx_17(var_60, ecx_23, __return_addr_2, eax_25, ecx_22, var_8.d, var_48_1, var_44_1, 
            var_40_1, var_3c_1, var_38_1, var_34_2, arg4, arg5) != 0)
        return 1
    
    sub_604c90(0x75697c)
    esp_1 = &var_60

*esp_1
esp_1[1]
esp_1[2]
return 0
