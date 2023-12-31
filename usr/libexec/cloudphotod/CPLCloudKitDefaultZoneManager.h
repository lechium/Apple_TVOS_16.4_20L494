//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CPLCloudKitDefaultZoneManager : NSObject
{
    NSArray *_identificationClasses;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00200000001198f9
+ (id)_defaultIdentificationClasses;	// IMP=0x001000000011981b
- (void).cxx_destruct;	// IMP=0x002000000011a359
@property(readonly, nonatomic) NSArray *identificationClasses; // @synthesize identificationClasses=_identificationClasses;
- (id)zoneIdentificationForCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x001000000011a172
- (long long)scopeTypeForCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 fetchedRecords:(id)arg3 currentUserID:(id)arg4;	// IMP=0x0010000000119fbe
- (id)recordsToFetchToIdentifyCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 currentUserID:(id)arg3;	// IMP=0x0010000000119d6e
- (id)defaultZoneIDForMainScope;	// IMP=0x0010000000119d55
- (id)mainScopeZoneIDFromZoneIDs:(id)arg1;	// IMP=0x0010000000119d3c
- (_Bool)isZoneIDForMainScopeIdentifier:(id)arg1;	// IMP=0x0010000000119d23
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x0010000000119bef
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x0010000000119bdd
- (id)scopedIdentifierForCKRecordID:(id)arg1;	// IMP=0x0010000000119b39
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x0010000000119a34
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x0010000000119a2c
- (id)init_;	// IMP=0x00100000001199d1
- (id)initWithIdentificationClasses:(id)arg1;	// IMP=0x001000000011995e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

