//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockContactsLogger : NSObject
{
}

- (void)failedToApplyContactUpdateOfKind:(const char *)arg1 value:(id)arg2 property:(id)arg3 error:(id)arg4;	// IMP=0x00000000000ef2a1
- (void)deleteImageRecentsMetadataRequestFailed:(id)arg1;	// IMP=0x00000000000ef29b
- (void)setContactImageDataZeroCropRect:(id)arg1 format:(const char *)arg2;	// IMP=0x00000000000ef295
- (void)setContactImageData:(id)arg1 format:(const char *)arg2 cropRect:(struct CGRect)arg3;	// IMP=0x00000000000ef28f
- (void)removeContactImageData;	// IMP=0x00000000000ef289
- (void)setContactImageData:(id)arg1;	// IMP=0x00000000000ef283
- (void)applyContactUpdateOfKind:(const char *)arg1 value:(id)arg2 property:(id)arg3;	// IMP=0x00000000000ef27d
- (void)postingNotificationWithName:(id)arg1;	// IMP=0x00000000000ef277
- (void)XPCConnectionWasInterrupted;	// IMP=0x00000000000ef271
- (void)XPCConnectionWasInvalidated;	// IMP=0x00000000000ef26b
- (void)errorWhenQueryingTetheredSyncData:(id)arg1;	// IMP=0x00000000000ef265
- (void)internalError:(id)arg1;	// IMP=0x00000000000ef25f
- (void)SPIUsageLackingEntitlementRejectedForPID:(int)arg1;	// IMP=0x00000000000ef259
- (void)SPIUsageLackingEntitlementGrantedForPID:(int)arg1;	// IMP=0x00000000000ef253
- (void)serviceError:(id)arg1;	// IMP=0x00000000000ef24d
- (void)changedMeContact:(id)arg1;	// IMP=0x00000000000ef247
- (void)updatingContact:(id)arg1;	// IMP=0x00000000000ef241
- (void)deletingContact:(id)arg1;	// IMP=0x00000000000ef23b
- (void)addingContacts:(id)arg1 toContainerWithIdentifier:(id)arg2;	// IMP=0x00000000000ef235
- (void)saveRequestFailed:(id)arg1;	// IMP=0x00000000000ef22f
- (void)saveRequestInvalid:(id)arg1;	// IMP=0x00000000000ef229
- (void)didFetchEncodedContacts:(id)arg1 error:(id)arg2;	// IMP=0x00000000000ef223
- (void)didFetchContacts:(id)arg1 error:(id)arg2;	// IMP=0x00000000000ef21d
- (void)fetchEncodedContactsMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;	// IMP=0x00000000000ef217
- (void)fetchContactsProgressivelyMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;	// IMP=0x00000000000ef211
- (void)fetchContactsMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;	// IMP=0x00000000000ef20b
- (void)contactsAccessWasDeniedWithError:(id)arg1;	// IMP=0x00000000000ef205
- (void)contactsAccessWasGranted;	// IMP=0x00000000000ef1ff
- (void)requestAuthorizationWasDenied;	// IMP=0x00000000000ef1f9
- (void)accessAuthorizationStatusWasDenied;	// IMP=0x00000000000ef1f3
- (void)postingNotification:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef1d8
- (void)servicingContactsRequest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef1bd
- (void)settingDefaultAccount:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef1a2
- (void)resettingSortDataIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef187
- (void)clearingChangeHistory:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef16c
- (void)fetchingChangeHistory:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef151
- (void)unregisteringForChangeHistory:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef136
- (void)registeringForChangeHistory:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef11b
- (void)saving:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef100
- (void)fetchingDefaultContainerIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef0e5
- (void)fetchingContainers:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef0ca
- (void)fetchingGroups:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef0af
- (void)fetchingContactsBatch:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef094
- (void)fetchingContactIdentifierWithMatchingDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef079
- (void)fetchingContactWithUserActivity:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef05e
- (void)fetchingContacts:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef043
- (void)fetchingContactSectionCounts:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef028
- (void)fetchingContactCount:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef00d
- (void)changingMeContact:(CDUnknownBlockType)arg1;	// IMP=0x00000000000eeff2
- (void)fetchingMeContactIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x00000000000eefd7
- (void)requestingAccessForContacts:(CDUnknownBlockType)arg1;	// IMP=0x00000000000eefbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
