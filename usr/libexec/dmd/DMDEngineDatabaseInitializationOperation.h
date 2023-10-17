//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol DMDDeviceStateProvider;

@interface DMDEngineDatabaseInitializationOperation
{
    NSObject<DMDDeviceStateProvider> *_deviceStateProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003e873
@property(retain, nonatomic) NSObject<DMDDeviceStateProvider> *deviceStateProvider; // @synthesize deviceStateProvider=_deviceStateProvider;
- (_Bool)destroyPersistentStoresWithError:(id *)arg1;	// IMP=0x001000000003e33c
- (_Bool)updateMetadataForManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003e0a8
- (void)fixupDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003d667
- (void)loadPersistentStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003d0f7
- (void)destroyLegacyDatabaseIfNeeded;	// IMP=0x001000000003cc35
- (void)main;	// IMP=0x001000000003c9f6
- (void)operationWillStart;	// IMP=0x001000000003c9b6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000003c871
- (_Bool)isReady;	// IMP=0x001000000003c7fc
- (void)dealloc;	// IMP=0x001000000003c7a2

@end

