// 函数: sub_50e180
// 地址: 0x50e180
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* const ecx_9 = arg16

if (arg11 == 0)
    arg16 = nullptr
else
    arg16 = 1
    arg8 = 0

int32_t edi = *(ecx_9 + 0xac)
int32_t edx
edx.b = arg13 != 0
int32_t ebp = edx
int32_t edx_1
edx_1.b = arg4 != 0
arg11.d = edx_1

if (arg5 != 0)
    int32_t edx_2
    edx_2.b = arg1 != 0
    arg13.d = edx_2 + 1
else if (arg1 == 0)
    arg13.d = 0
else
    arg13.d = 3

arg1 = *(arg15 + 0x74)

if (arg1 == 0)
    edx_1.b = arg3
    
    if (edx_1.b == 0)
        goto label_50e20d
else
    edx_1.b = 0
    arg11.d = 0
label_50e20d:
    edi = 0
    arg9 = 0
    arg8 = 0

if (arg11.d == 0)
    ebp = 0

int32_t eax = *(ecx_9 + 0xd0)
arg3.d = eax

if (eax == 2)
    arg8 = 0
    arg11.d = 0
label_50e23d:
    edi = 0
    ebp = 0
    arg16 = nullptr
    arg10 = 0
else if (eax == 3)
    goto label_50e23d

long double x87_r7 = float.t(0)
long double temp1 = fconvert.t(*(arg15 + 0xdc))
x87_r7 - temp1
int32_t ecx
ecx.b = edx_1.b != 0
void* const edx_3
edx_3.b = arg12 != 0
eax.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
    | (x87_r7 == temp1 ? 1 : 0) << 0xe | 0x3800
bool p = unimplemented  {test ah, 0x5}
char eax_1

eax_1 = p ? 0 : 1

char ebx = *(arg15 + 0xd8)
int32_t* ecx_3 = sub_513c50(arg6, arg7, arg8, edi, arg10, arg14, ecx, arg16, arg13.d, arg11.d, 
    arg3.d, edx_3, ebp, arg9, arg1, ebx, eax_1)
long double temp2 = fconvert.t(*(arg15 + 0xdc))
x87_r7 - temp2
arg4.d = 1
int32_t* eax_7
eax_7.w = (x87_r7 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp2) ? 1 : 0) << 0xa
    | (x87_r7 == temp2 ? 1 : 0) << 0xe
bool p_1 = unimplemented  {test ah, 0x5}

if (p_1)
    arg4.d = 0

int32_t* var_1c_1 = ecx_3
char result = sub_50e020(ecx_3, arg2)

if (result == 0)
    return result

int32_t eax_14
int32_t* ecx_8
eax_14, ecx_8 = sub_513cf0(arg6, arg7, arg8, edi, arg10, arg14, ecx, arg16, arg13.d, arg11.d, 
    arg3.d, edx_3, ebp, arg9, arg1, ebx, arg4)
int32_t var_1c_3 = eax_14
return sub_50e0d0(ecx_8, arg2) != 0
