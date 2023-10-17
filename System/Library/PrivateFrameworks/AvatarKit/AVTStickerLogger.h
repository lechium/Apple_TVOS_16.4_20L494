//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface AVTStickerLogger : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x006000000004ab4a
- (void).cxx_destruct;	// IMP=0x000000000004aec5
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void)logErrorShaderModifiers:(id)arg1 cantBeRemovedFromAvatar:(id)arg2 errors:(id)arg3;	// IMP=0x000000000004adb8
- (void)logRemovingShaderModifiers:(id)arg1 fromAvatar:(id)arg2 wereApplied:(_Bool)arg3;	// IMP=0x000000000004adb2
- (void)logShaderModifier:(id)arg1 notRemovedFromAvatar:(id)arg2 reason:(id)arg3;	// IMP=0x000000000004adac
- (void)logShaderModifier:(id)arg1 removedFromAvatar:(id)arg2 material:(id)arg3;	// IMP=0x000000000004ada6
- (void)logShaderModifier:(id)arg1 appliedToAvatar:(id)arg2 material:(id)arg3;	// IMP=0x000000000004ada0
- (void)logCompleteExport:(id)arg1 startedAt:(double)arg2;	// IMP=0x000000000004ad9a
- (void)logStartExport:(id)arg1;	// IMP=0x000000000004ad94
- (void)logErrorCreatingAssetReader:(id)arg1;	// IMP=0x000000000004ad24
- (void)logErrorBuildingProp:(id)arg1;	// IMP=0x000000000004acb4
- (void)logCompleteBuildingProp:(id)arg1 startedAt:(double)arg2;	// IMP=0x000000000004acae
- (void)logStartBuildingProp:(id)arg1;	// IMP=0x000000000004aca8
- (void)logCompletedApplyConfiguration:(id)arg1;	// IMP=0x000000000004aca2
- (void)logStartApplyConfiguration:(id)arg1;	// IMP=0x000000000004ac9c
- (void)logConfigurationNotFoundForName:(id)arg1;	// IMP=0x000000000004ac2c
- (id)init;	// IMP=0x000000000004abcf

@end
