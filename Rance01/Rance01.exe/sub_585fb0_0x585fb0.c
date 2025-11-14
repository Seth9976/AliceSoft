// 函数: sub_585fb0
// 地址: 0x585fb0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_714448
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_50 = ebx
int32_t esi
int32_t var_54 = esi
int32_t edi
int32_t var_58 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = (*(*arg2 + 0x10))(data_78c474 ^ &var_58)
int32_t eax_6 = (*(*arg2 + 0x14))()
int32_t* eax_7
int32_t* ecx_2

if (*(arg1 + 0xc) == 0)
    eax_7 = arg4
    ecx_2 = arg3
else
    eax_7 = arg3
    ecx_2 = arg4

(*(***(arg1 + 4) + 0x10))(arg2, 0, 0, eax_7, 0, 0, eax_4, eax_6)

if (*(arg1 + 0xc) != 0)
    arg5 = fconvert.s(float.t(1) - fconvert.t(arg5))

int32_t edi_2 = *(arg1 + 0x10)
int32_t eax_12
int32_t edx_4
edx_4:eax_12 = sx.q(eax_4)
int32_t eax_16
int32_t edx_5
edx_5:eax_16 = sx.q(eax_6)
int32_t ecx_5 = neg.d(edi_2)
int32_t var_60_1 = (sbb.d(ecx_5, ecx_5, edi_2 != 0) & 0xfffffff4) + 0x48
float var_4c = fconvert.s(float.t((sbb.d(ecx_5, ecx_5, edi_2 != 0) & 0xfffffff4) + 0x48)
    * fconvert.t(3.1415927410125732) / fconvert.t(180.0))
float var_48 = fconvert.s(float.t((eax_12 - edx_4) s>> 1))
float var_3c_2 = fconvert.s(sub_51a3f0(fconvert.s(fconvert.t(var_4c))) * fconvert.t(var_48))
float var_44_2 = fconvert.s(float.t((eax_16 - edx_5) s>> 1))
double var_30 = fconvert.d(fconvert.t(var_44_2))
int32_t eax_19
int16_t x87control
long double st0_1
st0_1, eax_19, x87control = sub_42a880(fconvert.s(fconvert.t(var_4c)))
long double x87_r7_15 = fconvert.t(var_3c_2)
long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(var_30) / st0_1))
x87_r6_2 - x87_r7_15
eax_19.w = (x87_r6_2 < x87_r7_15 ? 1 : 0) << 8
    | (is_unordered.t(x87_r6_2, x87_r7_15) ? 1 : 0) << 0xa | (x87_r6_2 == x87_r7_15 ? 1 : 0) << 0xe
    | 0x3000
bool p = unimplemented  {test ah, 0x5}

if (not(p))
    x87_r7_15 = x87_r6_2

long double x87_r6_3 = fconvert.t(arg5)
int32_t eax_20
eax_20.b = edi_2 != 0
float var_28 = 0f
int32_t var_24 = 0
int32_t var_20 = 0
float var_4c_2 = fconvert.s(fconvert.t(fconvert.s(x87_r7_15)) * x87_r6_3 * x87_r6_3)
float var_3c_3 = fconvert.s(x87_r6_3 * fconvert.t(360.0) + fconvert.t(270.0))
sub_4b3ba0(eax_20 * 2 + 0xa, &var_28)
int32_t var_c_1 = 0
int32_t i = 0
float ebx_2 = var_28
int32_t i_2 = 0
int32_t mxcsr

if (*(arg1 + 0x10) == 0)
    do
        float var_40_3 = fconvert.s((float.t(i_2) * fconvert.t(72.0) + fconvert.t(var_3c_3))
            * fconvert.t(3.1415927410125732) / fconvert.t(180.0))
        int16_t x87control_2
        int80_t st0_4
        st0_4, x87control_2 = sub_70ca80(mxcsr, x87control, fconvert.t(var_40_3))
        var_30.d = fconvert.s(st0_4)
        *(ebx_2 i+ (i << 3)) =
            fconvert.s(fconvert.t(var_30.d) * fconvert.t(var_4c_2) + fconvert.t(var_48))
        int80_t st0_5
        st0_5, x87control = sub_70c950(mxcsr, x87control_2, fconvert.t(var_40_3))
        var_30.d = fconvert.s(st0_5)
        i += 1
        i_2 = i
        *(ebx_2 i+ (i << 3) - 4) =
            fconvert.s(fconvert.t(var_30.d) * fconvert.t(var_4c_2) + fconvert.t(var_44_2))
    while (i s< 5)
else
    do
        float var_40_2 = fconvert.s((float.t(i_2) * fconvert.t(60.0) + fconvert.t(var_3c_3))
            * fconvert.t(3.1415927410125732) / fconvert.t(180.0))
        int16_t x87control_1
        int80_t st0_2
        st0_2, x87control_1 = sub_70ca80(mxcsr, x87control, fconvert.t(var_40_2))
        var_30.d = fconvert.s(st0_2)
        *(ebx_2 i+ (i << 3)) =
            fconvert.s(fconvert.t(var_30.d) * fconvert.t(var_4c_2) + fconvert.t(var_48))
        int80_t st0_3
        st0_3, x87control = sub_70c950(mxcsr, x87control_1, fconvert.t(var_40_2))
        var_30.d = fconvert.s(st0_3)
        i += 1
        i_2 = i
        *(ebx_2 i+ (i << 3) - 4) =
            fconvert.s(fconvert.t(var_30.d) * fconvert.t(var_4c_2) + fconvert.t(var_44_2))
    while (i s< 6)
float* edx_6 = &var_30
int80_t result

if (*(arg1 + 0x10) == 0)
    int32_t* eax_35
    int80_t st0_11
    st0_11, eax_35 = sub_5864e0(ebx_2, edx_6, ebx_2 i+ 8, ebx_2 i+ 0x10, ebx_2 i+ 0x20)
    *(ebx_2 i+ 0x28) = *eax_35
    *(ebx_2 i+ 0x2c) = eax_35[1]
    int32_t* eax_37
    int80_t st0_12
    st0_12, eax_37 = sub_5864e0(ebx_2 i+ 8, &var_30, ebx_2, ebx_2 i+ 0x18, ebx_2 i+ 0x10)
    *(ebx_2 i+ 0x30) = *eax_37
    *(ebx_2 i+ 0x34) = eax_37[1]
    int32_t* eax_39
    int80_t st0_13
    st0_13, eax_39 = sub_5864e0(ebx_2 i+ 0x10, &var_30, ebx_2 i+ 8, ebx_2 i+ 0x20, ebx_2 i+ 0x18)
    *(ebx_2 i+ 0x38) = *eax_39
    *(ebx_2 i+ 0x3c) = eax_39[1]
    int32_t* eax_40
    int80_t st0_14
    st0_14, eax_40 = sub_5864e0(ebx_2 i+ 0x10, &var_30, ebx_2 i+ 0x18, ebx_2 i+ 0x20, ebx_2)
    *(ebx_2 i+ 0x40) = *eax_40
    *(ebx_2 i+ 0x44) = eax_40[1]
    int32_t* eax_41
    int80_t result_2
    result_2, eax_41 = sub_5864e0(ebx_2 i+ 8, &var_30, ebx_2 i+ 0x18, ebx_2 i+ 0x20, ebx_2)
    result = result_2
    *(ebx_2 i+ 0x48) = *eax_41
    *(ebx_2 i+ 0x4c) = eax_41[1]
else
    int32_t* eax_23
    int80_t st0_6
    st0_6, eax_23 = sub_5864e0(ebx_2, edx_6, ebx_2 i+ 0x28, ebx_2 i+ 0x10, ebx_2 i+ 8)
    *(ebx_2 i+ 0x30) = *eax_23
    *(ebx_2 i+ 0x34) = eax_23[1]
    int32_t* eax_26
    int80_t st0_7
    st0_7, eax_26 = sub_5864e0(ebx_2 i+ 8, &var_30, ebx_2, ebx_2 i+ 0x18, ebx_2 i+ 0x10)
    *(ebx_2 i+ 0x38) = *eax_26
    *(ebx_2 i+ 0x3c) = eax_26[1]
    int32_t* eax_28
    int80_t st0_8
    st0_8, eax_28 = sub_5864e0(ebx_2 i+ 0x10, &var_30, ebx_2 i+ 8, ebx_2 i+ 0x20, ebx_2 i+ 0x18)
    *(ebx_2 i+ 0x40) = *eax_28
    *(ebx_2 i+ 0x44) = eax_28[1]
    int32_t* eax_30
    int80_t st0_9
    st0_9, eax_30 = sub_5864e0(ebx_2 i+ 0x18, &var_30, ebx_2 i+ 0x10, ebx_2 i+ 0x28, ebx_2 i+ 0x20)
    *(ebx_2 i+ 0x48) = *eax_30
    *(ebx_2 i+ 0x4c) = eax_30[1]
    int32_t* eax_32
    int80_t st0_10
    st0_10, eax_32 = sub_5864e0(ebx_2 i+ 0x20, &var_30, ebx_2 i+ 0x18, ebx_2, ebx_2 i+ 0x28)
    *(ebx_2 i+ 0x50) = *eax_32
    *(ebx_2 i+ 0x54) = eax_32[1]
    int32_t* eax_33
    int80_t result_1
    result_1, eax_33 = sub_5864e0(ebx_2 i+ 0x28, &var_30, ebx_2 i+ 0x20, ebx_2 i+ 8, ebx_2)
    result = result_1
    *(ebx_2 i+ 0x58) = *eax_33
    *(ebx_2 i+ 0x5c) = eax_33[1]

void* esi_14 = arg1 + 0x14
void* var_3c_4 = esi_14
sub_580e70(esi_14)
float* var_60_16
float* eax_46
float* ecx_30

if (*(arg1 + 0x10) == 0)
    sub_580ec0(ebx_2, esi_14, ebx_2 i+ 0x10, ebx_2 i+ 0x40)
    sub_580ec0(ebx_2 i+ 8, esi_14, ebx_2 i+ 0x18, ebx_2 i+ 0x48)
    var_60_16 = ebx_2 i+ 0x28
    eax_46 = ebx_2 i+ 0x20
    ecx_30 = ebx_2 i+ 0x10
else
    sub_580ec0(ebx_2, esi_14, ebx_2 i+ 0x10, ebx_2 i+ 0x20)
    var_60_16 = ebx_2 i+ 0x28
    eax_46 = ebx_2 i+ 0x18
    ecx_30 = ebx_2 i+ 8

sub_580ec0(ecx_30, esi_14, eax_46, var_60_16)
int32_t* eax_53 = (*(*arg2 + 8))(0, 0)
var_30.d = (*(*arg2 + 0x1c))()
int32_t var_50_1 = (*(*ecx_2 + 8))(0, 0)
int32_t eax_59 = (*(*ecx_2 + 0x1c))()
int32_t ecx_36 = *esi_14
int32_t* eax_60 = nullptr
int32_t i_3 = 0

if (((*(esi_14 + 4) - ecx_36) & 0xfffffff0) s> 0)
    int32_t* var_40_4 = nullptr
    int32_t i_1
    
    do
        int32_t* j = *(eax_60 + ecx_36)
        
        if (j != *(eax_60 + ecx_36 + 4))
            do
                void* esi_17 = *j * 4
                char* ecx_38 = var_4c_2 i+ esi_17
                char* esi_18 = esi_17 + var_50_1
                int32_t k = 0
                
                if (j[1] s> 0)
                    do
                        *ecx_38 = *esi_18
                        ecx_38[1] = esi_18[1]
                        ecx_38[2] = esi_18[2]
                        k += 1
                        ecx_38 = &ecx_38[4]
                        esi_18 = &esi_18[4]
                    while (k s< j[1])
                    
                    eax_60 = var_40_4
                
                j = &j[2]
            while (j != *(*eax_53 + eax_60 + 4))
            
            esi_14 = eax_53
        
        var_4c_2 += arg1
        var_50_1 += eax_59
        ecx_36 = *esi_14
        i_1 = i_3 + 1
        eax_60 = &eax_60[4]
        i_3 = i_1
        var_40_4 = eax_60
    while (i_1 s< (*(esi_14 + 4) - ecx_36) s>> 4)

float var_68 = ebx_2
sub_6b4d5b()
int32_t eax_64
eax_64.b = 1
int32_t var_1c
fsbase->NtTib.ExceptionList = var_1c
return result
