//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface StoreQueueListener
{
}

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x002000000003cead
- (void)managedApplicationRequestWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000003ccb8
- (void)claimApplicationsWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000003cb57
- (void)checkQueueWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c8f0
- (id)init;	// IMP=0x001000000003c8c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

