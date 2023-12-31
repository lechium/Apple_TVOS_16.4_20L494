//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SecMockAKS : NSObject
{
}

+ (void)updateOperationsUntilUnlock;	// IMP=0x002000000000d74e
+ (void)setOperationsUntilUnlock:(int)arg1;	// IMP=0x001000000000d742
+ (id)popDecryptRefKeyFailure;	// IMP=0x001000000000d6a0
+ (void)resetDecryptRefKeyFailures;	// IMP=0x001000000000d658
+ (void)failNextDecryptRefKey:(id)arg1;	// IMP=0x001000000000d59e
+ (void)unlockAllClasses;	// IMP=0x001000000000d52e
+ (void)lockClassA_C;	// IMP=0x001000000000d4be
+ (void)lockClassA;	// IMP=0x001000000000d44e
+ (_Bool)useGenerationCount;	// IMP=0x001000000000d446
+ (_Bool)isSEPDown;	// IMP=0x001000000000d43e
+ (_Bool)forceUnwrapKeyDecodeFailure;	// IMP=0x001000000000d436
+ (_Bool)forceInvalidPersona;	// IMP=0x001000000000d42e
+ (_Bool)isLocked:(int)arg1;	// IMP=0x001000000000d359
+ (void)reset;	// IMP=0x001000000000d2e9
+ (void)setKeybag_state:(unsigned int)arg1;	// IMP=0x001000000000d2dd
+ (unsigned int)keybag_state;	// IMP=0x001000000000d2d1
+ (id)mutabilityQueue;	// IMP=0x001000000000d2a1
+ (id)lockedStates;	// IMP=0x001000000000d254
+ (void)trapdoor;	// IMP=0x001000000000d230

@end

