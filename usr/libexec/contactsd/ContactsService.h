//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNAccessAuthorization, CNContactStore, CNContactsEnvironment, CNiOSAddressBookDataMapper, NSString, NSXPCConnection;
@protocol CNContactsLogger, CNRegulatoryLogger, CNScheduler, OS_tcc_identity;

@interface ContactsService : NSObject
{
    CNContactStore *_contactStore;	// 8 = 0x8
    CNiOSAddressBookDataMapper *_dataMapper;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    id <CNScheduler> _workQueue;	// 32 = 0x20
    id <CNContactsLogger> _logger;	// 40 = 0x28
    CNContactsEnvironment *_environment;	// 48 = 0x30
    CNAccessAuthorization *_accessAuthorization;	// 56 = 0x38
    id <CNRegulatoryLogger> _regulatoryLogger;	// 64 = 0x40
    NSObject<OS_tcc_identity> *_assumedIdentity;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000000734e
@property(retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity; // @synthesize assumedIdentity=_assumedIdentity;
@property(retain, nonatomic) id <CNRegulatoryLogger> regulatoryLogger; // @synthesize regulatoryLogger=_regulatoryLogger;
@property(readonly, nonatomic) CNAccessAuthorization *accessAuthorization; // @synthesize accessAuthorization=_accessAuthorization;
@property(readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <CNContactsLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) CNiOSAddressBookDataMapper *dataMapper; // @synthesize dataMapper=_dataMapper;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void)authorizedKeysForContactKeys:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007226
- (void)verifyIndexWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000071ad
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000071a2
- (void)writeFavoritesPropertyListData:(id)arg1 toPath:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006d2a
- (void)favoritesEntryDictionariesAtPath:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006a1c
- (_Bool)shouldNotReportFavoritesError:(id)arg1;	// IMP=0x00100000000068c3
- (void)reportFavoritesIssue:(id)arg1;	// IMP=0x0010000000006869
- (void)currentHistoryAnchorWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006717
- (void)currentHistoryTokenWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000065f7
- (void)executeChangeHistoryClearRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000063b4
- (void)changeHistoryWithFetchRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000625f
- (void)unregisterChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005fd0
- (void)registerChangeHistoryClientIdentifier:(id)arg1 forContainerIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005d41
- (void)userActivityForContact:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005ab0
- (void)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000057d1
- (void)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000546f
- (void)setMeContact:(id)arg1 forContainer:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000005195
- (void)setMeContact:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004fbc
- (void)setDefaultAccountIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004da4
- (void)defaultContainerIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004ca3
- (void)subgroupsOfGroupWithIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004b4e
- (void)groupsMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000049f9
- (void)accountsMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000048a4
- (void)policyForContainerWithIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000474f
- (void)serverSearchContainersMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000045fa
- (void)containersMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000044a5
- (void)executeSaveRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004247
- (void)meContactIdentifiersWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000405e
- (void)identifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003f36
- (void)progressiveContactsForFetchRequest:(id)arg1 progressHandler:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000003b92
- (void)encodedContactsAndCursorForFetchRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000367f
- (void)contactsForFetchRequest:(id)arg1 withMatchInfoReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003312
- (void)sectionListOffsetsForSortOrder:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000030ec
- (void)contactCountForFetchRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002e3a
- (void)unifiedContactCountWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002d12
- (void)performWorkServicingSPI:(CDUnknownBlockType)arg1 authenticationFailureHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002c7d
- (void)performServicingRequestWork:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002856
- (void)performWorkWithContactStore:(CDUnknownBlockType)arg1;	// IMP=0x001000000000270d
- (void)performAsyncWorkWithDataMapper:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002580
- (void)performWorkWithDataMapper:(CDUnknownBlockType)arg1;	// IMP=0x0010000000002465
- (_Bool)clientAllowedToUseSPI:(id *)arg1;	// IMP=0x0010000000002042
- (void)configureAssumedIdentityWithOptions:(id)arg1;	// IMP=0x001000000000203c
- (id)unitTestBaseURLWithOptions:(id)arg1;	// IMP=0x0010000000001f38
- (void)configureUnitTestWithOptions:(id)arg1;	// IMP=0x0010000000001b23
- (void)configureServiceWithOptions:(id)arg1;	// IMP=0x0010000000001ace
- (id)initWithDataMapper:(id)arg1 dataMapperConfiguration:(id)arg2 workQueue:(id)arg3 connection:(id)arg4 accessAuthorization:(id)arg5;	// IMP=0x001000000000187f
- (id)initWithWorkQueue:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000001682

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

