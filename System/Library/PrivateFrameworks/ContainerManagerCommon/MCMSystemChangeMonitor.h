//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMSystemChangeMonitor : NSObject
{
}

- (void)userIdentityCache:(id)arg1 didAddUserIdentity:(id)arg2;	// IMP=0x000000000008d1b2
- (void)userIdentityCache:(id)arg1 didInvalidateUserIdentity:(id)arg2;	// IMP=0x000000000008d181

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

