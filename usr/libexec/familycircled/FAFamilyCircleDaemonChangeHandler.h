//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FAFamilyCircleDaemonChangeHandler : NSObject
{
}

+ (void)_refetchFamilyWithNetworkService:(id)arg1 familyRefreshActivityScheduler:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x004000000001b5e2
+ (void)handleDidUpdateMemberFlagWithNetworkService:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b54f
+ (void)handleDidRemoveMemberWithNetworkService:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b4bc
+ (void)handleDidReceivePushEventWithNetworkService:(id)arg1 familyRefreshActivityScheduler:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b4a0
+ (_Bool)handleURLResponse:(id)arg1 networkService:(id)arg2 familyRefreshActivityScheduler:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001b277

@end

