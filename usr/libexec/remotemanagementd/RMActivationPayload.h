//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSSet, NSString, RMActivationPayloadState, RMManagementSource, RMPredicateDescription;

@interface RMActivationPayload
{
}

- (id)reportDetails;	// IMP=0x0010000000008585
@property(retain, nonatomic) RMPredicateDescription *predicateDescription;
- (void)failedLoadingWithError:(id)arg1;	// IMP=0x00100000000091a4
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000008865

// Remaining properties
@property(retain, nonatomic) NSSet *configurationReferences; // @dynamic configurationReferences;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier;
@property(nonatomic) short loadState;
@property(retain, nonatomic) RMManagementSource *managementSource;
@property(readonly, copy, nonatomic) NSData *payload;
@property(retain, nonatomic) NSData *predicateDescription_; // @dynamic predicateDescription_;
@property(retain, nonatomic) RMActivationPayloadState *state; // @dynamic state;
@property(readonly) Class superclass;

@end

