//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMPersonManager.h>

@class NSString, NSUUID;

@interface HMPersonManager (HFAdditions)
- (id)hf_linkFromPerson:(id)arg1 toPerson:(id)arg2 toPersonManagerUUID:(id)arg3;	// IMP=0x00200000001e6ee5
- (id)hf_reassociateFaceCropsFromPersonWithUUID:(id)arg1 toPersonWithUUID:(id)arg2 removePerson:(_Bool)arg3;	// IMP=0x00200000001e68c7
- (id)hf_associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2;	// IMP=0x00200000001e6559
- (id)hf_removeFaceCropsWithUUIDs:(id)arg1;	// IMP=0x00200000001e60a7
- (id)hf_removePersonWithUUID:(id)arg1;	// IMP=0x00200000001e57c6
- (id)hf_namePerson:(id)arg1 name:(id)arg2;	// IMP=0x00200000001e505c
- (id)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:(id)arg1;	// IMP=0x00200000001e4f44
- (id)hf_faceCropsForPersonWithIdentifier:(id)arg1;	// IMP=0x00200000001e498f
- (id)hf_personWithIdentifier:(id)arg1;	// IMP=0x00200000001e4660
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
