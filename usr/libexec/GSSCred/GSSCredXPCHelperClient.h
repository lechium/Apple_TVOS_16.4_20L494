//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GSSCredXPCHelperClient : NSObject
{
}

+ (int)refreshForCred:(struct HeimCred_s *)arg1 expireTime:(long long *)arg2;	// IMP=0x0020000000013470
+ (int)acquireForCred:(struct HeimCred_s *)arg1 expireTime:(long long *)arg2;	// IMP=0x0010000000012ee0
+ (void)sendWakeup:(id)arg1;	// IMP=0x0010000000012e30
+ (id)createXPCConnection:(unsigned int)arg1;	// IMP=0x0010000000012ac0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
