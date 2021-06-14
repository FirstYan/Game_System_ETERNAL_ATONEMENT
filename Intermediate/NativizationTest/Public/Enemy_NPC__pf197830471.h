#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AnimGraphRuntime/Public/PlayMontageCallbackProxy.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Combat_Interface__pf197830471.h"
class UWidgetComponent;
class UHP_Name_Bar_C__pf2204467963;
class UDamageType;
class AController;
class AActor;
class UPlayMontageCallbackProxy;
#include "Enemy_NPC__pf197830471.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ParagonSevarog/Characters/NPC/AI/Enemy_NPC.Enemy_NPC_C", OverrideNativeName="Enemy_NPC_C"))
class AEnemy_NPC_C__pf197830471 : public ACharacter, public ICombat_Interface_C
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnMontagePlayDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OnMontagePlayDelegate__DelegateSignature__SC_0, FName , bpp__NotifyName__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HP_Bar"))
	UWidgetComponent* bpv__HP_Bar__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max HP", Category="Default", MultiLine="true", OverrideNativeName="Max HP"))
	float bpv__MaxxHP__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current HP", Category="Default", MultiLine="true", OverrideNativeName="Current HP"))
	float bpv__CurrentxHP__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Dead?", Category="Default", MultiLine="true", OverrideNativeName="Is Dead?"))
	bool bpv__IsxDeadx__pfTzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Start Max Speed", Category="Default", MultiLine="true", OverrideNativeName="Start max Speed"))
	float bpv__StartxmaxxSpeed__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="HP Bar Widget Ref", Category="Default", MultiLine="true", OverrideNativeName="HP Bar Widget Ref"))
	UHP_Name_Bar_C__pf2204467963* bpv__HPxBarxWidgetxRef__pfTTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_4"))
	FName b0l__K2Node_CustomEvent_NotifyName_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_3"))
	FName b0l__K2Node_CustomEvent_NotifyName_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_2"))
	FName b0l__K2Node_CustomEvent_NotifyName_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_1"))
	FName b0l__K2Node_CustomEvent_NotifyName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName"))
	FName b0l__K2Node_CustomEvent_NotifyName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable"))
	FName b0l__Temp_name_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Damage"))
	float b0l__K2Node_Event_Damage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageType"))
	UDamageType* b0l__K2Node_Event_DamageType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InstigatedBy"))
	AController* b0l__K2Node_Event_InstigatedBy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageCauser"))
	AActor* b0l__K2Node_Event_DamageCauser__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue"))
	UPlayMontageCallbackProxy* b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	AEnemy_NPC_C__pf197830471(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Enemy_NPC_0"))
	void bpf__ExecuteUbergraph_Enemy_NPC__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Enemy_NPC__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Enemy_NPC__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Enemy_NPC__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Enemy_NPC__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Enemy_NPC__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Enemy_NPC__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Enemy_NPC__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintAuthorityOnly, meta=(Category="Game|Damage", Comment="/** Event when this actor takes ANY damage */", DisplayName="AnyDamage", ToolTip="Event when this actor takes ANY damage", CppFromBpEvent, OverrideNativeName="ReceiveAnyDamage"))
	virtual void bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Death"))
	virtual void bpf__Death__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="MeeleAttack"))
	virtual void bpf__MeeleAttack__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnCompleted_10852E6B44E5ACD88E5921B909CA124A"))
	virtual void bpf__OnCompleted_10852E6B44E5ACD88E5921B909CA124A__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnBlendOut_10852E6B44E5ACD88E5921B909CA124A"))
	virtual void bpf__OnBlendOut_10852E6B44E5ACD88E5921B909CA124A__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnInterrupted_10852E6B44E5ACD88E5921B909CA124A"))
	virtual void bpf__OnInterrupted_10852E6B44E5ACD88E5921B909CA124A__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyBegin_10852E6B44E5ACD88E5921B909CA124A"))
	virtual void bpf__OnNotifyBegin_10852E6B44E5ACD88E5921B909CA124A__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyEnd_10852E6B44E5ACD88E5921B909CA124A"))
	virtual void bpf__OnNotifyEnd_10852E6B44E5ACD88E5921B909CA124A__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Called from Behavior Tree for change the AI\'s movement speed", Category, OverrideNativeName="Update Walk Speed"))
	virtual void bpf__UpdatexWalkxSpeed__pfTT(float bpp__NewWalkSpeed__pf);
public:
};
