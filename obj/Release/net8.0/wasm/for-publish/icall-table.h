#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
194,
204,
205,
206,
207,
208,
209,
210,
211,
212,
215,
216,
317,
318,
319,
348,
349,
350,
370,
371,
372,
373,
470,
471,
472,
475,
510,
511,
513,
515,
517,
519,
524,
532,
533,
534,
535,
536,
537,
538,
539,
540,
633,
634,
700,
706,
709,
711,
716,
717,
719,
720,
724,
725,
727,
729,
730,
733,
734,
735,
738,
740,
743,
745,
747,
756,
820,
822,
824,
834,
835,
836,
837,
839,
846,
847,
848,
849,
850,
858,
859,
860,
864,
865,
867,
871,
872,
873,
1152,
1330,
1331,
7210,
7211,
7213,
7214,
7215,
7216,
7217,
7219,
7221,
7223,
7233,
7235,
7240,
7242,
7244,
7246,
7297,
7298,
7300,
7301,
7302,
7303,
7304,
7306,
7308,
8240,
8244,
8246,
8247,
8248,
8249,
8498,
8499,
8500,
8501,
8519,
8520,
8521,
8523,
8563,
8621,
8623,
8625,
8633,
8634,
8635,
8636,
9016,
9020,
9021,
9048,
9066,
9073,
9080,
9091,
9095,
9115,
9189,
9191,
9200,
9202,
9203,
9210,
9224,
9244,
9245,
9253,
9255,
9262,
9263,
9266,
9268,
9273,
9279,
9280,
9287,
9289,
9301,
9304,
9305,
9306,
9317,
9326,
9332,
9333,
9334,
9336,
9337,
9354,
9356,
9370,
9387,
9414,
9444,
9445,
9881,
9973,
9974,
10176,
10177,
10184,
10185,
10186,
10191,
10266,
10647,
10648,
10859,
10869,
11595,
11616,
11618,
11620,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 194,
ves_icall_System_Array_InternalCreate,
// token 204,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 205,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 206,
ves_icall_System_Array_CanChangePrimitive,
// token 207,
ves_icall_System_Array_FastCopy,
// token 208,
ves_icall_System_Array_GetLengthInternal_raw,
// token 209,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 210,
ves_icall_System_Array_GetGenericValue_icall,
// token 211,
ves_icall_System_Array_GetValueImpl_raw,
// token 212,
ves_icall_System_Array_SetGenericValue_icall,
// token 215,
ves_icall_System_Array_SetValueImpl_raw,
// token 216,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 317,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 318,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 319,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 348,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 349,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 350,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 370,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 371,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 372,
ves_icall_System_Enum_InternalGetCorElementType,
// token 373,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 470,
ves_icall_System_Environment_get_ProcessorCount,
// token 471,
ves_icall_System_Environment_get_TickCount,
// token 472,
ves_icall_System_Environment_get_TickCount64,
// token 475,
ves_icall_System_Environment_FailFast_raw,
// token 510,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 511,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 513,
ves_icall_System_GC_SuppressFinalize_raw,
// token 515,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 517,
ves_icall_System_GC_GetGCMemoryInfo,
// token 519,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 524,
ves_icall_System_Object_MemberwiseClone_raw,
// token 532,
ves_icall_System_Math_Ceiling,
// token 533,
ves_icall_System_Math_Cos,
// token 534,
ves_icall_System_Math_Floor,
// token 535,
ves_icall_System_Math_Log10,
// token 536,
ves_icall_System_Math_Pow,
// token 537,
ves_icall_System_Math_Sin,
// token 538,
ves_icall_System_Math_Sqrt,
// token 539,
ves_icall_System_Math_Tan,
// token 540,
ves_icall_System_Math_ModF,
// token 633,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 634,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 700,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 706,
ves_icall_RuntimeType_make_array_type_raw,
// token 709,
ves_icall_RuntimeType_make_byref_type_raw,
// token 711,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 716,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 717,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 719,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 720,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 724,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 725,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 727,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 729,
ves_icall_System_RuntimeType_getFullName_raw,
// token 730,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 733,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 734,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 735,
ves_icall_RuntimeType_GetFields_native_raw,
// token 738,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 740,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 743,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 745,
ves_icall_RuntimeType_GetName_raw,
// token 747,
ves_icall_RuntimeType_GetNamespace_raw,
// token 756,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 820,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 822,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 824,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 834,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 835,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 836,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 837,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 839,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 846,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 847,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 848,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 849,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 850,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 858,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 859,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 860,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 864,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 865,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 867,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 871,
ves_icall_System_String_FastAllocateString_raw,
// token 872,
ves_icall_System_String_InternalIsInterned_raw,
// token 873,
ves_icall_System_String_InternalIntern_raw,
// token 1152,
ves_icall_System_Type_internal_from_handle_raw,
// token 1330,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1331,
ves_icall_System_ValueType_Equals_raw,
// token 7210,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7211,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7213,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7214,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7215,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7216,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7217,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7219,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7221,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7223,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7233,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7235,
mono_monitor_exit_icall_raw,
// token 7240,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7242,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7244,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7246,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7297,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7298,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7300,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7301,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7302,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7303,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7304,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7306,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7308,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8240,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8244,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8246,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8247,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8248,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8249,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8498,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8499,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8500,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8501,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8519,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8520,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8521,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8523,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 8563,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8621,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8623,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 8625,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8633,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8634,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8635,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8636,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9016,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9020,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9021,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9048,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9066,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9073,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9080,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9091,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9095,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9115,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9189,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9191,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9200,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9202,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9203,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9210,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9224,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9244,
ves_icall_reflection_get_token_raw,
// token 9245,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9253,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9255,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9262,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9263,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9266,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9268,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9273,
ves_icall_reflection_get_token_raw,
// token 9279,
ves_icall_get_method_info_raw,
// token 9280,
ves_icall_get_method_attributes,
// token 9287,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9289,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9301,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9304,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9305,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9306,
ves_icall_reflection_get_token_raw,
// token 9317,
ves_icall_InternalInvoke_raw,
// token 9326,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9332,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9333,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9334,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9336,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9337,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9354,
ves_icall_InvokeClassConstructor_raw,
// token 9356,
ves_icall_InternalInvoke_raw,
// token 9370,
ves_icall_reflection_get_token_raw,
// token 9387,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9414,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9444,
ves_icall_reflection_get_token_raw,
// token 9445,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9881,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9973,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9974,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10176,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10177,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10184,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10185,
ves_icall_ModuleBuilder_getToken_raw,
// token 10186,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10191,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10266,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10647,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10648,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10859,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10869,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11595,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11616,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11618,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11620,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
