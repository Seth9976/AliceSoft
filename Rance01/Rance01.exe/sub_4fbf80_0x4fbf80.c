// 函数: sub_4fbf80
// 地址: 0x4fbf80
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71fabb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_94
int32_t eax_2 = data_78c474 ^ &var_94
int32_t __saved_edi
int32_t var_a4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg2
char* edi = arg1
int32_t var_74 = 0
*(edi + 0x14) = 0xf
*(edi + 0x10) = 0
void* var_80 = ebx
char* var_7c = edi
*edi = 0
int32_t var_c_1 = 0
int32_t eax_5
int32_t edx
edx:eax_5 = muls.dp.d(0x2e8ba2e9, *(ebx + 0x64) - *(ebx + 0x60))
int32_t edx_1 = edx s>> 3
int32_t var_a8 = (edx_1 u>> 0x1f) + edx_1
int32_t var_74_1 = 1
int32_t var_c_2 = 1
sub_402000(edi, sub_4104a0(0x754c88), 0, 0xffffffff)
var_c_2.b = 0
int32_t var_54
int32_t var_40

if (var_40 u>= 0x10)
    int32_t var_a8_1 = var_54
    sub_6b4d5b()

int32_t eax_11
int32_t edx_2
edx_2:eax_11 = muls.dp.d(0x2aaaaaab, *(ebx + 0x74) - *(ebx + 0x70))
int32_t edx_3 = edx_2 s>> 2
int32_t var_a8_2 = (edx_3 u>> 0x1f) + edx_3
int32_t var_c_3 = 2
sub_402000(edi, sub_4104a0(0x754c98), 0, 0xffffffff)
var_c_3.b = 0

if (var_40 u>= 0x10)
    int32_t var_a8_3 = var_54
    sub_6b4d5b()

int32_t var_a8_4 = (*(ebx + 0x44) - *(ebx + 0x40)) s>> 6
int32_t var_c_4 = 3
sub_402000(edi, sub_4104a0(0x754ca8), 0, 0xffffffff)
var_c_4.b = 0

if (var_40 u>= 0x10)
    int32_t var_a8_5 = var_54
    sub_6b4d5b()

sub_402cb0(edi, 0x754cb8, 1)
int32_t var_a8_6 = (*(ebx + 0x54) - *(ebx + 0x50)) s>> 2
int32_t var_c_5 = 4
sub_402000(edi, sub_4104a0(0x754cbc), 0, 0xffffffff)
var_c_5.b = 0

if (var_40 u>= 0x10)
    int32_t var_a8_7 = var_54
    sub_6b4d5b()

int32_t* ecx_8 = *(ebx + 0x50)
int32_t* var_88 = ecx_8

if (ecx_8 != *(ebx + 0x54))
    while (true)
        int32_t* ebx_2 = *ecx_8
        int32_t var_a8_8 = (ecx_8 - *(ebx + 0x50)) s>> 2
        int32_t var_c_6 = 5
        sub_402000(edi, sub_4104a0("[%3d]"), 0, 0xffffffff)
        var_c_6.b = 0
        int32_t var_38
        int32_t var_24
        
        if (var_24 u>= 0x10)
            int32_t var_a8_9 = var_38
            sub_6b4d5b()
        
        if (*var_88 != 0)
            int32_t var_4c_1 = 0
            int32_t* eax_32 = operator new(0x14)
            
            if (eax_32 == 0)
                int32_t var_70 = 0
                struct std::exception::VTable* var_68
                std::exception::exception(&var_68, &var_70)
                var_68 = &std::bad_alloc::`vftable'{for `std::exception'}
                sub_6b77db(&var_68, 0x771508)
                noreturn
            
            *eax_32 = eax_32
            eax_32[1] = eax_32
            eax_32[2] = eax_32
            eax_32[4].b = 1
            *(eax_32 + 0x11) = 1
            int32_t var_c_7 = 6
            void* i = ebx_2[0xa]
            void* i_1 = i
            
            if (i != ebx_2[0xb])
                int32_t ecx_11 = *(var_80 + 0x60)
                
                do
                    int32_t* edi_1 = i + 4
                    int32_t j_1 = 3
                    int32_t j
                    
                    do
                        int32_t eax_37 = *edi_1
                        int32_t* k = *(eax_37 * 0x2c + ecx_11 + 0xc)
                        
                        if (k != *(eax_37 * 0x2c + ecx_11 + 0x10))
                            do
                                int32_t* var_5c
                                sub_416880(&var_54, k, &var_5c)
                                ecx_11 = *(var_80 + 0x60)
                                k = &k[1]
                            while (k != *(*edi_1 * 0x2c + ecx_11 + 0x10))
                            
                            i = i_1
                        
                        edi_1 = &edi_1[0xf]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    i += 0xb4
                    i_1 = i
                while (i != ebx_2[0xb])
                
                edi = var_7c
            
            int32_t ecx_14 = ebx_2[0xb] - ebx_2[0xa]
            int32_t esi_8 = ebx_2[8]
            int32_t eax_42
            int32_t edx_7
            edx_7:eax_42 = muls.dp.d(0xb60b60b7, ecx_14)
            int32_t edx_8 = edx_7 + ecx_14
            ecx_14.b = *(ebx_2 + 0x26)
            int32_t edx_9 = edx_8 s>> 7
            int32_t eax_45 = (edx_9 u>> 0x1f) + edx_9
            edx_9.b = *(ebx_2 + 0x7b)
            char var_8d_1 = ecx_14.b
            int32_t ecx_15 = ebx_2[7]
            char var_8e_1 = edx_9.b
            int32_t edx_10 = ebx_2[0x20]
            int32_t* var_8c_1
            
            if (ebx_2[5] u< 0x10)
                var_8c_1 = ebx_2
            else
                var_8c_1 = *ebx_2
            
            int32_t var_a8_11 = eax_45
            int32_t var_ac_1 = var_4c_1
            char eax_47
            int80_t st0_1
            st0_1, eax_47 = sub_501ff0(ebx_2)
            uint32_t var_b0_5 = zx.d(eax_47)
            uint32_t var_b4_1 = zx.d(var_8d_1)
            uint32_t var_b8_1 = zx.d(var_8e_1)
            int32_t var_bc_1 = esi_8
            int32_t var_c0_1 = ecx_15
            int32_t var_c4_1 = edx_10
            int32_t* var_c8_1 = var_8c_1
            var_c_7.b = 7
            sub_402000(edi, sub_4104a0(" "%s" "), 0, 0xffffffff)
            
            if (var_24 u>= 0x10)
                int32_t var_a8_12 = var_38
                sub_6b4d5b()
            
            int32_t var_c_8 = 8
            void var_6c
            sub_58bc40(&var_54, &var_6c, *eax_32, eax_32)
            var_c_8.b = 0
            int32_t* var_a8_14 = eax_32
            sub_6b4d5b()
        else
            sub_402cb0(edi, 0x754cdc, 1)
        
        void* eax_55 = &var_88[1]
        var_88 = eax_55
        
        if (eax_55 == *(var_80 + 0x54))
            break
        
        ecx_8 = var_88
        ebx = var_80

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_94)
