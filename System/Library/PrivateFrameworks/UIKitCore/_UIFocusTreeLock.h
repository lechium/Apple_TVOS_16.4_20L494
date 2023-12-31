//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSTimer;

__attribute__((visibility("hidden")))
@interface _UIFocusTreeLock : NSObject
{
    NSMapTable *_lockedEnvironments;	// 8 = 0x8
    NSTimer *_validationTimer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000036b3e0
@property(readonly, nonatomic) NSTimer *validationTimer; // @synthesize validationTimer=_validationTimer;
@property(readonly, nonatomic) NSMapTable *lockedEnvironments; // @synthesize lockedEnvironments=_lockedEnvironments;
- (id)description;	// IMP=0x000000000036b346
- (void)_validateLockedEnvironments;	// IMP=0x000000000036b1f2
- (_Bool)isEnvironmentLocked:(id)arg1;	// IMP=0x000000000036af4a
- (_Bool)unlockEnvironmentTree:(id)arg1;	// IMP=0x000000000036ac4b
- (void)lockEnvironmentTree:(id)arg1;	// IMP=0x000000000036aa64
- (id)init;	// IMP=0x000000000036a89a

@end

