// 函数: sub_4c9490
// 地址: 0x4c9490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable** result

if (arg3[1].b != 0)
    switch (*arg3 - 1)
        case 0
            int80_t st0_1
            st0_1, result = sub_4c98c0(arg1, arg3, arg4, arg2, arg10)
            
            if (result.b == 0)
                result.b = 0
                return result
        case 1
            if (arg3[5] != 0)
                int32_t var_14_2 = arg10
                int80_t st0_2
                st0_2, result = sub_4c9e90(arg4, arg3, arg2, arg1, arg8)
                
                if (result.b == 0)
                    result.b = 0
                    return result
            
            void* eax = *arg9
            int32_t eax_1
            
            if (((arg9[1] - eax) & 0xfffffffc) s> 8)
                eax_1 = *(eax + 8)
            else
                eax_1 = 0
            
            int32_t* edx
            edx.b = eax_1 != 0
            result = sub_4ca2c0(arg3, edx.b, arg5, arg11)
            
            if (result.b == 0)
                return result
        case 2
            int80_t st0_3
            st0_3, result = sub_4ca610(arg6, arg4, arg3, arg7, arg2)
            
            if (result.b == 0)
                return result
        case 7
            result = sub_4caae0(arg4, arg3, arg6, arg7, arg2, arg1, arg11)
            
            if (result.b == 0)
                return result
        case 8
            result = sub_4c95b0(arg4, arg3, arg11)
            
            if (result.b == 0)
                return result

result.b = 1
return result
