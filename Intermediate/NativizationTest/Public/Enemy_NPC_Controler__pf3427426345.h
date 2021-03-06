#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/AIController.h"
class UAIPerceptionComponent;
class AActor;
class APawn;
#include "Enemy_NPC_Controler__pf3427426345.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/NPC/AI/Enemy_NPC_Controler.Enemy_NPC_Controler_C", OverrideNativeName="Enemy_NPC_Controler_C"))
class AEnemy_NPC_Controler_C__pf3427426345 : public AAIController
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AIPerception"))
	UAIPerceptionComponent* bpv__AIPerception__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Line Of Sight Timer", Category="Default", MultiLine="true", tooltip="Will determine how long before the AI gives up chasing the Player", OverrideNativeName="Line Of Sight Timer"))
	float bpv__LinexOfxSightxTimer__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemy Timer", Category="Default", MultiLine="true", tooltip="На випадок, якщо гравець з\'явиться у полі зору раніше ніж сплине таймер", OverrideNativeName="EnemyTimer"))
	FTimerHandle bpv__EnemyTimer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Has Line Of Sight", Category="Default", MultiLine="true", OverrideNativeName="HasLineOfSight"))
	FName bpv__HasLineOfSight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enemy Actor", Category="Default", MultiLine="true", tooltip="which we have set up to only trigger if it is the Player", OverrideNativeName="EnemyActor"))
	FName bpv__EnemyActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Actor"))
	AActor* b0l__K2Node_ComponentBoundEvent_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Stimulus"))
	FAIStimulus b0l__K2Node_ComponentBoundEvent_Stimulus__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_PossessedPawn"))
	APawn* b0l__K2Node_Event_PossessedPawn__pf;
	AEnemy_NPC_Controler_C__pf3427426345(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Enemy_NPC_Controler__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Enemy_NPC_Controler__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Enemy_NPC_Controler__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Blueprint implementable event to react to the controller possessing a pawn */", DisplayName="On Possess", ToolTip="Blueprint implementable event to react to the controller possessing a pawn", CppFromBpEvent, OverrideNativeName="ReceivePossess"))
	virtual void bpf__ReceivePossess__pf(APawn* bpp__PossessedPawn__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature__pf(AActor* bpp__Actor__pf, FAIStimulus bpp__Stimulus__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StartEnemyTimer"))
	virtual void bpf__StartEnemyTimer__pf();
public:
};
