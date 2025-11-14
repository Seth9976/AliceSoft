// 函数: sub_4b9550
// 地址: 0x4b9550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_711c78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg6
int32_t* edi = arg3
int32_t var_28 = 0
int32_t var_4 = 0

if (edi != arg5)
    while (ebx != arg7)
        int32_t* esi_1 = *edi
        (*(**ebx + 4))(eax_2)
        var_28.q = fconvert.d(unimplemented  {fstp qword [esp+0x14], st0})
        unimplemented  {fstp qword [esp+0x14], st0}
        (*(*esi_1 + 4))()
        long double temp0_1 = fconvert.t(var_28.q)
        unimplemented  {fcomp st0, qword [esp+0x14]} f- temp0_1
        bool c0_1 = unimplemented  {fcomp st0, qword [esp+0x14]} f< temp0_1
        bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, qword [esp+0x14]}, temp0_1)
        bool c3_1 = unimplemented  {fcomp st0, qword [esp+0x14]} f== temp0_1
        unimplemented  {fcomp st0, qword [esp+0x14]}
        int16_t top = top + 2
        void* ecx_2 = arg9
        int32_t* eax_6 = *(ecx_2 + 4)
        
        if ((((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                | (top & 7) << 0xb):1.b & 0x41) != 0)
            if (eax_6 u>= *(ecx_2 + 8))
                if (eax_6 != 0)
                    *eax_6 = *edi
                    ecx_2 = arg9
                
                *(ecx_2 + 4) += 4
                *(arg9 + 8) = *(ecx_2 + 4)
            else
                *eax_6 = *edi
                *(arg9 + 4) += 4
            
            edi = &edi[1]
        else if (eax_6 u>= *(ecx_2 + 8))
            if (eax_6 != 0)
                *eax_6 = *ebx
                ecx_2 = arg9
            
            *(ecx_2 + 4) += 4
            *(arg9 + 8) = *(ecx_2 + 4)
            ebx = &ebx[1]
        else
            *eax_6 = *ebx
            *(arg9 + 4) += 4
            ebx = &ebx[1]
        
        if (edi == arg5)
            break

int32_t var_50 = 0
int32_t var_4c = 0
int32_t var_48 = 0
int32_t var_44 = 0
void* var_40 = arg9
int32_t* var_28_1 = &var_50
int32_t var_20
sub_4dd2c0(&var_20, arg5, arg9, edi)
int32_t eax_12 = var_20

if (eax_12 != 0)
    int32_t var_40_1 = eax_12
    sub_6b4d5b()

var_50 = 0
int32_t var_4c_1 = 0
int32_t var_48_1 = 0
int32_t var_44_1 = 0
void* var_10
void* var_40_2 = var_10
arg5 = &var_50
sub_4dd2c0(arg4, arg7, var_10, ebx)

if (arg8 != 0)
    int32_t var_40_3 = arg8
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return arg4
