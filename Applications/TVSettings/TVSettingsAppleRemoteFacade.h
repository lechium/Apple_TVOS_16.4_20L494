//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSFormatter;

@interface TVSettingsAppleRemoteFacade : NSObject
{
}

+ (_Bool);	// IMP=0x004000000007b558
+ (id)sharedInstance;	// IMP=0x001000000007abd9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x002000000007b560
@property(readonly, nonatomic) NSFormatter *sensitivityFormatter;
@property(readonly, nonatomic) NSArray *availableSensitivityValues;
@property(nonatomic) long long sensitivity;
@property(readonly, nonatomic) _Bool supportsSensitivity;
@property(readonly, nonatomic) NSFormatter *clickpadModeFormatter;
@property(readonly, nonatomic) NSArray *availableClickpadModeValues;
@property(nonatomic) unsigned long long clickpadMode;
@property(readonly, nonatomic) _Bool supportsClickpadModes;
@property(nonatomic) _Bool tvButtonLaunchesTVApp;
- (void)dealloc;	// IMP=0x001000000007ad83
- (id)init;	// IMP=0x001000000007ac2e

@end

