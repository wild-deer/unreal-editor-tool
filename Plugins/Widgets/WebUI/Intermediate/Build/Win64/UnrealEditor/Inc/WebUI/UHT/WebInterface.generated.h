// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EMouseCaptureMode : uint8;
enum class EMouseLockMode : uint8;
enum class EWebInterfaceDirectory : uint8;
struct FColor;
struct FJsonLibraryValue;
struct FWebInterfaceCallback;
#ifdef WEBUI_WebInterface_generated_h
#error "WebInterface.generated.h already included, missing '#pragma once' in WebInterface.h"
#endif
#define WEBUI_WebInterface_generated_h

#define FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_25_DELEGATE \
struct WebInterface_eventOnUrlChangedEvent_Parms \
{ \
	FText URL; \
}; \
static inline void FOnUrlChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnUrlChangedEvent, FText const& URL) \
{ \
	WebInterface_eventOnUrlChangedEvent_Parms Parms; \
	Parms.URL=URL; \
	OnUrlChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_26_DELEGATE \
struct WebInterface_eventOnPopupEvent_Parms \
{ \
	FString URL; \
	FString Frame; \
}; \
static inline void FOnPopupEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPopupEvent, const FString& URL, const FString& Frame) \
{ \
	WebInterface_eventOnPopupEvent_Parms Parms; \
	Parms.URL=URL; \
	Parms.Frame=Frame; \
	OnPopupEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_27_DELEGATE \
struct WebInterface_eventOnInterfaceEvent_Parms \
{ \
	FName Name; \
	FJsonLibraryValue Data; \
	FWebInterfaceCallback Callback; \
}; \
static inline void FOnInterfaceEvent_DelegateWrapper(const FMulticastScriptDelegate& OnInterfaceEvent, const FName Name, FJsonLibraryValue Data, FWebInterfaceCallback Callback) \
{ \
	WebInterface_eventOnInterfaceEvent_Parms Parms; \
	Parms.Name=Name; \
	Parms.Data=Data; \
	Parms.Callback=Callback; \
	OnInterfaceEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_SPARSE_DATA
#define FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReadTexturePixels); \
	DECLARE_FUNCTION(execReadTexturePixel); \
	DECLARE_FUNCTION(execGetTextureHeight); \
	DECLARE_FUNCTION(execGetTextureWidth); \
	DECLARE_FUNCTION(execGetTransparencyTick); \
	DECLARE_FUNCTION(execGetTransparencyThreshold); \
	DECLARE_FUNCTION(execGetTransparencyDelay); \
	DECLARE_FUNCTION(execIsVirtualPointerTransparencyEnabled); \
	DECLARE_FUNCTION(execIsMouseTransparencyEnabled); \
	DECLARE_FUNCTION(execIsUsingAcceleratedPaint); \
	DECLARE_FUNCTION(execResetMousePosition); \
	DECLARE_FUNCTION(execUnfocus); \
	DECLARE_FUNCTION(execFocus); \
	DECLARE_FUNCTION(execDisableIME); \
	DECLARE_FUNCTION(execEnableIME); \
	DECLARE_FUNCTION(execUnbind); \
	DECLARE_FUNCTION(execBind); \
	DECLARE_FUNCTION(execCall); \
	DECLARE_FUNCTION(execExecute); \
	DECLARE_FUNCTION(execGetURL); \
	DECLARE_FUNCTION(execLoadContent); \
	DECLARE_FUNCTION(execLoadFile); \
	DECLARE_FUNCTION(execLoadURL); \
	DECLARE_FUNCTION(execLoadHTML); \
	DECLARE_FUNCTION(execLoad);


#define FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReadTexturePixels); \
	DECLARE_FUNCTION(execReadTexturePixel); \
	DECLARE_FUNCTION(execGetTextureHeight); \
	DECLARE_FUNCTION(execGetTextureWidth); \
	DECLARE_FUNCTION(execGetTransparencyTick); \
	DECLARE_FUNCTION(execGetTransparencyThreshold); \
	DECLARE_FUNCTION(execGetTransparencyDelay); \
	DECLARE_FUNCTION(execIsVirtualPointerTransparencyEnabled); \
	DECLARE_FUNCTION(execIsMouseTransparencyEnabled); \
	DECLARE_FUNCTION(execIsUsingAcceleratedPaint); \
	DECLARE_FUNCTION(execResetMousePosition); \
	DECLARE_FUNCTION(execUnfocus); \
	DECLARE_FUNCTION(execFocus); \
	DECLARE_FUNCTION(execDisableIME); \
	DECLARE_FUNCTION(execEnableIME); \
	DECLARE_FUNCTION(execUnbind); \
	DECLARE_FUNCTION(execBind); \
	DECLARE_FUNCTION(execCall); \
	DECLARE_FUNCTION(execExecute); \
	DECLARE_FUNCTION(execGetURL); \
	DECLARE_FUNCTION(execLoadContent); \
	DECLARE_FUNCTION(execLoadFile); \
	DECLARE_FUNCTION(execLoadURL); \
	DECLARE_FUNCTION(execLoadHTML); \
	DECLARE_FUNCTION(execLoad);


#define FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_ACCESSORS
#define FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebInterface(); \
	friend struct Z_Construct_UClass_UWebInterface_Statics; \
public: \
	DECLARE_CLASS(UWebInterface, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebUI"), NO_API) \
	DECLARE_SERIALIZER(UWebInterface)


#define FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUWebInterface(); \
	friend struct Z_Construct_UClass_UWebInterface_Statics; \
public: \
	DECLARE_CLASS(UWebInterface, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebUI"), NO_API) \
	DECLARE_SERIALIZER(UWebInterface)


#define FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebInterface(UWebInterface&&); \
	NO_API UWebInterface(const UWebInterface&); \
public: \
	NO_API virtual ~UWebInterface();


#define FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebInterface(UWebInterface&&); \
	NO_API UWebInterface(const UWebInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebInterface) \
	NO_API virtual ~UWebInterface();


#define FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_18_PROLOG
#define FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_SPARSE_DATA \
	FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_RPC_WRAPPERS \
	FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_ACCESSORS \
	FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_INCLASS \
	FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_SPARSE_DATA \
	FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_ACCESSORS \
	FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_INCLASS_NO_PURE_DECLS \
	FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WebInterface."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBUI_API UClass* StaticClass<class UWebInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_shanxi_Plugins_Widgets_WebUI_Source_WebUI_Public_WebInterface_h


#define FOREACH_ENUM_EWEBINTERFACEDIRECTORY(op) \
	op(EWebInterfaceDirectory::UI) \
	op(EWebInterfaceDirectory::Content) 

enum class EWebInterfaceDirectory : uint8;
template<> struct TIsUEnumClass<EWebInterfaceDirectory> { enum { Value = true }; };
template<> WEBUI_API UEnum* StaticEnum<EWebInterfaceDirectory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
