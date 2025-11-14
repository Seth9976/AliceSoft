// 函数: sub_501f90
// 地址: 0x501f90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

long double x87_r7 = fconvert.t(*(arg1 + 0x54))
long double x87_r6 = float.t(0)
x87_r6 - x87_r7
void* result
result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
bool p = unimplemented  {test ah, 0x44}

if (not(p))
    long double x87_r6_1 = fconvert.t(*(arg1 + 0x58))
    x87_r6_1 - x87_r7
    result.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (not(p_1))
        int32_t var_c_1 = *(arg1 + 0x1c)
        int32_t* ecx
        void* esi
        result = sub_501550(ecx, esi, *(arg1 + 0x20))
        
        if (result != 0 && ((*(result + 0x34) - *(result + 0x30)) & 0xfffffffc) s<= 4)
            int80_t st0_1
            st0_1, result = sub_501ff0(arg1)
            
            if (result.b == 0)
                result.b = *(arg1 + 0x7c) == result.b
                return result

result.b = 0
return result
