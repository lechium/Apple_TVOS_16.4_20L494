//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SecMockAKS : NSObject
{
}

+ (void)updateOperationsUntilUnlock;	// IMP=0x002000000000d326
+ (void)setOperationsUntilUnlock:(int)arg1;	// IMP=0x001000000000d31a
+ (id)popDecryptRefKeyFailure;	// IMP=0x001000000000d278
+ (void)resetDecryptRefKeyFailures;	// IMP=0x001000000000d230
+ (void)failNextDecryptRefKey:(id)arg1;	// IMP=0x001000000000d176
+ (void)unlockAllClasses;	// IMP=0x001000000000d106
+ (void)lockClassA_C;	// IMP=0x001000000000d096
+ (void)lockClassA;	// IMP=0x001000000000d026
+ (_Bool)useGenerationCount;	// IMP=0x001000000000d01e
+ (_Bool)isSEPDown;	// IMP=0x001000000000d016
+ (_Bool)forceUnwrapKeyDecodeFailure;	// IMP=0x001000000000d00e
+ (_Bool)forceInvalidPersona;	// IMP=0x001000000000d006
+ (_Bool)isLocked:(int)arg1;	// IMP=0x001000000000cf31
+ (void)reset;	// IMP=0x001000000000cec1
+ (void)setKeybag_state:(unsigned int)arg1;	// IMP=0x001000000000ceb5
+ (unsigned int)keybag_state;	// IMP=0x001000000000cea9
+ (id)mutabilityQueue;	// IMP=0x001000000000ce79
+ (id)lockedStates;	// IMP=0x001000000000ce2c
+ (void)trapdoor;	// IMP=0x001000000000ce08

@end

