// 函数: sub_4cb060
// 地址: 0x4cb060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t esi_2 = (arg2[1] - *arg2) s>> 2
int32_t edi = 0
struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable** result

if (esi_2 s> 0)
    while (true)
        if (edi s>= 0)
            result = *arg2
        
        struct sealengine::CDrawInstance::sealengine::CMotionObjectShadowSphere::VTable** ecx_4
        
        if (edi s< 0 || edi s>= (arg2[1] - result) s>> 2)
            ecx_4 = nullptr
        else
            ecx_4 = result[edi]
        
        if (edi s>= 0)
            result = *arg1
            
            if (edi s< (arg1[1] - result) s>> 2)
                result = result[edi]
                
                if (result == 0)
                label_4cb0e8:
                    edi += 1
                    
                    if (edi s>= esi_2)
                        break
                    
                    continue
                else
                    result = sub_4c9490(arg7, arg6, result, ecx_4, arg3, arg4, arg5, arg8, arg9, 
                        arg10, arg11)
                    
                    if (result.b != 0)
                        goto label_4cb0e8
        
        result.b = 0
        return result

result.b = 1
return result
