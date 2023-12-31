//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableDictionary, NSPersistentContainer;
@protocol OS_dispatch_queue;

@interface RMStoreController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSManagedObjectContext *_context;	// 16 = 0x10
    NSPersistentContainer *_persistentContainer;	// 24 = 0x18
    NSMutableDictionary *_clientByIdentifier;	// 32 = 0x20
}

+ (void)start;	// IMP=0x002000000007c93a
+ (id)sharedController;	// IMP=0x001000000007c74d
- (void).cxx_destruct;	// IMP=0x002000000008554b
@property(retain, nonatomic) NSMutableDictionary *clientByIdentifier; // @synthesize clientByIdentifier=_clientByIdentifier;
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (id)_newPayloadWithDeclaration:(id)arg1 managementSource:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000851fa
- (id)_payloadsForPayloadClass:(Class)arg1 identifier:(id)arg2 managementSource:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000084ed0
- (id)_payloadsForDeclarationIdentifier:(id)arg1 managementSource:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000084bbb
- (id)_activeDeclarationsForConfigurationTypes:(id)arg1 storeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000083ffc
- (id)_declarationsOfClass:(Class)arg1 managementSource:(id)arg2 declarationTypes:(id)arg3 identifier:(id)arg4 error:(id *)arg5;	// IMP=0x001000000008393d
- (id)_declarationsForStoreIdentifier:(id)arg1 declarationTypes:(id)arg2 identifier:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000835af
- (void)_addOptionsToManagementSource:(id)arg1 options:(id)arg2;	// IMP=0x0010000000083473
- (id)_allManagementSourcesReturningError:(id *)arg1;	// IMP=0x00100000000831e9
- (id)_managementSourceWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000082fed
- (id)_subscriberStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000082f3f
- (id)_providerStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000082e91
- (id)_observerStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000082de3
- (void)resolveAsset:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000082513
- (void)subscribedDeclarationsWithTypes:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000821fa
- (void)subscribedStoreDeclarationsWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000081afa
- (void)subscriberStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008165b
- (void)subscriberStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000081377
- (void)applyChangesForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008122f
- (void)deleteDeclarationWithIdentifier:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000080b0b
- (void)saveDeclaration:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008015c
- (void)providerStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007fcbd
- (void)providerStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007f9d9
- (void)removeStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007f5db
- (void)createStoreWithType:(long long)arg1 defaultToInteractive:(_Bool)arg2 dataSeparated:(_Bool)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000007ec51
- (void)observerStoresDidChange;	// IMP=0x001000000007ebaa
- (void)fetchDataAtURL:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007e721
- (void)setShouldInstallConfiguration:(id)arg1 shouldInstall:(_Bool)arg2 storeIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007e5ef
- (void)declarationManifestForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007e2dd
- (void)declarationsWithTypes:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007dfbe
- (void)declarationsForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007dcd5
- (void)declarationWithIdentifier:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007d93e
- (void)observerStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007d49f
- (void)observerStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007d1bb
- (id)_clientForIdentifier:(id)arg1;	// IMP=0x001000000007d138
- (void)_stopClientForIdentifier:(id)arg1;	// IMP=0x001000000007d073
- (id)_makeClientWithManagementSourceObjectID:(id)arg1 storeIdentifier:(id)arg2 persistentContainer:(id)arg3;	// IMP=0x001000000007cfaf
- (id)_startClientForSourceIdentifier:(id)arg1 objectID:(id)arg2;	// IMP=0x001000000007cebf
- (void)_start;	// IMP=0x001000000007c9d3
- (id)initWithPersistentContainer:(id)arg1 context:(id)arg2;	// IMP=0x001000000007c84c

@end

