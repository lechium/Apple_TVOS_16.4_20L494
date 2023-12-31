//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TRIClient;
@protocol OS_dispatch_queue;

@interface ADSyncConfigAssetManager : NSObject
{
    TRIClient *_client;	// 8 = 0x8
    _Bool _consumeSiriVocabularyNotificationForAddressBookSync;	// 16 = 0x10
    _Bool _isMediaEntitySyncDisabled;	// 17 = 0x11
    _Bool _disableDictationOnlySync;	// 18 = 0x12
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CDUnknownBlockType _updateHandler;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00400000002a9d64
- (void).cxx_destruct;	// IMP=0x00200000002aa80e
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool disableDictationOnlySync; // @synthesize disableDictationOnlySync=_disableDictationOnlySync;
@property(nonatomic) _Bool isMediaEntitySyncDisabled; // @synthesize isMediaEntitySyncDisabled=_isMediaEntitySyncDisabled;
@property(nonatomic) _Bool consumeSiriVocabularyNotificationForAddressBookSync; // @synthesize consumeSiriVocabularyNotificationForAddressBookSync=_consumeSiriVocabularyNotificationForAddressBookSync;
- (_Bool)dictationOnlySyncDisabled;	// IMP=0x00100000002aa707
- (_Bool)siriVocabularyNotificationForAddressBookSyncEnabled;	// IMP=0x00100000002aa5bb
- (_Bool)_getConfigValueForFactor:(id)arg1;	// IMP=0x00100000002aa4bc
- (void)_populateConfiguration;	// IMP=0x00100000002aa1fc
- (void)_registerUpdateHandler;	// IMP=0x00100000002a9f4c
- (id)_initWithTriClient:(id)arg1;	// IMP=0x00100000002a9e18
- (id)init;	// IMP=0x00100000002a9db9

@end

