//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SDKAddToLibraryResponseParserDelegate : NSObject
{
    _Bool;	// 8 = 0x8
    NSMutableDictionary *_addedItems;	// 16 = 0x10
    unsigned long long _currentCloudID;	// 24 = 0x18
    unsigned long long _currentAdamID;	// 32 = 0x20
    NSString *_currentGlobalID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000011d205
@property(readonly, nonatomic) NSString *currentGlobalID; // @synthesize currentGlobalID=_currentGlobalID;
@property(readonly, nonatomic) unsigned long long currentAdamID; // @synthesize currentAdamID=_currentAdamID;
@property(readonly, nonatomic) unsigned long long currentCloudID; // @synthesize currentCloudID=_currentCloudID;
@property(readonly, nonatomic) _Bool updateRequired; // @synthesize updateRequired=_updateRequired;
@property(readonly, nonatomic) NSMutableDictionary *addedItems; // @synthesize addedItems=_addedItems;
- (void)parser:(id)arg1 didEndContainerCode:(unsigned int)arg2;	// IMP=0x001000000011d0b2
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x001000000011cf0a
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x001000000011cedf
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x001000000011cebd
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x001000000011ce55
- (id)init;	// IMP=0x001000000011cdef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

