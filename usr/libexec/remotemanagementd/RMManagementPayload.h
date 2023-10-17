//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, RMManagementPayloadState, RMManagementSource;

@interface RMManagementPayload
{
}

- (void)failedLoadingWithError:(id)arg1;	// IMP=0x001000000004fab5
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004f811

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier;
@property(nonatomic) short loadState;
@property(retain, nonatomic) RMManagementSource *managementSource;
@property(readonly, copy, nonatomic) NSData *payload;
@property(retain, nonatomic) RMManagementPayloadState *state; // @dynamic state;
@property(readonly) Class superclass;

@end

