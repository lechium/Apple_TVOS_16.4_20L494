//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKRecoveryAttempter : NSObject
{
    CDUnknownBlockType _attemptRecovery;	// 8 = 0x8
}

+ (id)recoveryAttempterUsingHandler:(CDUnknownBlockType)arg1;	// IMP=0x004000000012122a
- (void).cxx_destruct;	// IMP=0x0020000000121315
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;	// IMP=0x0010000000121300
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;	// IMP=0x0010000000121292

@end

